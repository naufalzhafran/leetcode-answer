class ListNode {
  val: number;
  next: ListNode | null;
  constructor(val?: number, next?: ListNode | null) {
    this.val = val === undefined ? 0 : val;
    this.next = next === undefined ? null : next;
  }
  toArray(): number[] {
    if (this.next === null) {
      return [this.val];
    } else {
      return [this.val, ...this.next.toArray()];
    }
  }
}

function middleNode(head: ListNode | null): ListNode | null {
  let pointerA = head;
  let pointerB = head;

  while (pointerA && pointerB && pointerB.next) {
    pointerA = pointerA.next;
    pointerB = pointerB.next.next;
  }

  return pointerA;
}

const questionParam = [2, 3, 4, 5, 6];
let linkedListParam = new ListNode(1);
const head = linkedListParam;

for (const param of questionParam) {
  linkedListParam.next = new ListNode(param);
  linkedListParam = linkedListParam.next;
}

console.log(head.toArray());

console.log(middleNode(head)?.toArray());
