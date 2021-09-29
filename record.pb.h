// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: record.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_record_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_record_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3018000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3018000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_record_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_record_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_record_2eproto;
class Record;
struct RecordDefaultTypeInternal;
extern RecordDefaultTypeInternal _Record_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Record* Arena::CreateMaybeMessage<::Record>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Record final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Record) */ {
 public:
  inline Record() : Record(nullptr) {}
  ~Record() override;
  explicit constexpr Record(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Record(const Record& from);
  Record(Record&& from) noexcept
    : Record() {
    *this = ::std::move(from);
  }

  inline Record& operator=(const Record& from) {
    CopyFrom(from);
    return *this;
  }
  inline Record& operator=(Record&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Record& default_instance() {
    return *internal_default_instance();
  }
  static inline const Record* internal_default_instance() {
    return reinterpret_cast<const Record*>(
               &_Record_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Record& a, Record& b) {
    a.Swap(&b);
  }
  inline void Swap(Record* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Record* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Record* New() const final {
    return new Record();
  }

  Record* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Record>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Record& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Record& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Record* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Record";
  }
  protected:
  explicit Record(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kFamilyFieldNumber = 2,
    kAgeFieldNumber = 3,
    kMarriedFieldNumber = 4,
  };
  // required string name = 1;
  bool has_name() const;
  private:
  bool _internal_has_name() const;
  public:
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_MUST_USE_RESULT std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // required string family = 2;
  bool has_family() const;
  private:
  bool _internal_has_family() const;
  public:
  void clear_family();
  const std::string& family() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_family(ArgT0&& arg0, ArgT... args);
  std::string* mutable_family();
  PROTOBUF_MUST_USE_RESULT std::string* release_family();
  void set_allocated_family(std::string* family);
  private:
  const std::string& _internal_family() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_family(const std::string& value);
  std::string* _internal_mutable_family();
  public:

  // optional int32 age = 3;
  bool has_age() const;
  private:
  bool _internal_has_age() const;
  public:
  void clear_age();
  ::PROTOBUF_NAMESPACE_ID::int32 age() const;
  void set_age(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_age() const;
  void _internal_set_age(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // optional bool married = 4;
  bool has_married() const;
  private:
  bool _internal_has_married() const;
  public:
  void clear_married();
  bool married() const;
  void set_married(bool value);
  private:
  bool _internal_married() const;
  void _internal_set_married(bool value);
  public:

  // @@protoc_insertion_point(class_scope:Record)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr family_;
  ::PROTOBUF_NAMESPACE_ID::int32 age_;
  bool married_;
  friend struct ::TableStruct_record_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Record

// required string name = 1;
inline bool Record::_internal_has_name() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Record::has_name() const {
  return _internal_has_name();
}
inline void Record::clear_name() {
  name_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Record::name() const {
  // @@protoc_insertion_point(field_get:Record.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Record::set_name(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Record.name)
}
inline std::string* Record::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:Record.name)
  return _s;
}
inline const std::string& Record::_internal_name() const {
  return name_.Get();
}
inline void Record::_internal_set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* Record::_internal_mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  return name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* Record::release_name() {
  // @@protoc_insertion_point(field_release:Record.name)
  if (!_internal_has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return name_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void Record::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:Record.name)
}

// required string family = 2;
inline bool Record::_internal_has_family() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Record::has_family() const {
  return _internal_has_family();
}
inline void Record::clear_family() {
  family_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& Record::family() const {
  // @@protoc_insertion_point(field_get:Record.family)
  return _internal_family();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Record::set_family(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000002u;
 family_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Record.family)
}
inline std::string* Record::mutable_family() {
  std::string* _s = _internal_mutable_family();
  // @@protoc_insertion_point(field_mutable:Record.family)
  return _s;
}
inline const std::string& Record::_internal_family() const {
  return family_.Get();
}
inline void Record::_internal_set_family(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  family_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* Record::_internal_mutable_family() {
  _has_bits_[0] |= 0x00000002u;
  return family_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* Record::release_family() {
  // @@protoc_insertion_point(field_release:Record.family)
  if (!_internal_has_family()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return family_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void Record::set_allocated_family(std::string* family) {
  if (family != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  family_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), family,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:Record.family)
}

// optional int32 age = 3;
inline bool Record::_internal_has_age() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Record::has_age() const {
  return _internal_has_age();
}
inline void Record::clear_age() {
  age_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Record::_internal_age() const {
  return age_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Record::age() const {
  // @@protoc_insertion_point(field_get:Record.age)
  return _internal_age();
}
inline void Record::_internal_set_age(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000004u;
  age_ = value;
}
inline void Record::set_age(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_age(value);
  // @@protoc_insertion_point(field_set:Record.age)
}

// optional bool married = 4;
inline bool Record::_internal_has_married() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool Record::has_married() const {
  return _internal_has_married();
}
inline void Record::clear_married() {
  married_ = false;
  _has_bits_[0] &= ~0x00000008u;
}
inline bool Record::_internal_married() const {
  return married_;
}
inline bool Record::married() const {
  // @@protoc_insertion_point(field_get:Record.married)
  return _internal_married();
}
inline void Record::_internal_set_married(bool value) {
  _has_bits_[0] |= 0x00000008u;
  married_ = value;
}
inline void Record::set_married(bool value) {
  _internal_set_married(value);
  // @@protoc_insertion_point(field_set:Record.married)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_record_2eproto
