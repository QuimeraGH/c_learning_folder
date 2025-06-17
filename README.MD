# 🧪 C Learning Projects Index

Organized by difficulty. Each project has its own folder in `/src/`, with headers in `/include/`.

---

## 🟢 Beginner Projects

| Status | Project | Description |
|--------|---------|-------------|
| [x] ✅ | [swap_two_ints](src/swap_two_ints/) | Swap two integers using pointers |
| [x] ✅ | [dynamic_integer_list](src/dynamic_integer_list/) | Dynamic list with `malloc`/`realloc` |
| [ ] ⬜ | [custom_strlib](src/custom_strlib/) | Reimplement basic string functions |
| [ ] ⬜ | [matrix_allocator](src/matrix_allocator/) | 2D matrix using `int**` |
| [ ] ⬜ | [pointer_explorer](src/pointer_explorer/) | Play with addresses and pointer levels |

---

## 🟡 Intermediate Projects

| Status | Project | Description |
|--------|---------|-------------|
| [ ] ⬜ | [singly_linked_list](src/singly_linked_list/) | Generic linked list using `void*` |
| [ ] ⬜ | [stack_and_queue](src/stack_and_queue/) | Array stack, linked queue |
| [ ] ⬜ | [student_record_system](src/student_record_system/) | Manage data with structs and search |
| [ ] ⬜ | [reverse_array_by_pointer](src/reverse_array_by_pointer/) | Reverse array with pure pointer math |
| [ ] ⬜ | [rpn_calculator](src/rpn_calculator/) | CLI calculator using stack |

---

## 🔴 Advanced Projects

| Status | Project | Description |
|--------|---------|-------------|
| [ ] ⬜ | [hash_map](src/hash_map/) | Hash table using string keys |
| [ ] ⬜ | [memory_arena_allocator](src/memory_arena_allocator/) | Preallocated memory arena system |
| [ ] ⬜ | [text_editor_buffer](src/text_editor_buffer/) | Efficient gap buffer for editing |
| [ ] ⬜ | [manual_malloc](src/manual_malloc/) | Simulate `malloc`/`free` internally |
| [ ] ⬜ | [generic_vector_macro](src/generic_vector_macro/) | Macro-based dynamic generic array |
| [ ] ⬜ | [rope_structure](src/rope_structure/) | Tree-based string editing (rope) |

---

## 📝 Notes

Each project folder should contain:
- Any source files in `src/<project>/`
- Any headers in `include/<project>/`

Keep all builds out of source (e.g. use `/build/` if using CMake).
Build running the prepared bat file, else use your own generator in presets or build process if on other OS.
