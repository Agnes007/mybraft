// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: counter.proto

#ifndef PROTOBUF_counter_2eproto__INCLUDED
#define PROTOBUF_counter_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/service.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace example {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_counter_2eproto();
void protobuf_AssignDesc_counter_2eproto();
void protobuf_ShutdownFile_counter_2eproto();

class Snapshot;
class FetchAddRequest;
class CounterResponse;
class GetRequest;

enum FetchAddRequest_KVType {
  FetchAddRequest_KVType_INSERT = 0,
  FetchAddRequest_KVType_DELETE = 1
};
bool FetchAddRequest_KVType_IsValid(int value);
const FetchAddRequest_KVType FetchAddRequest_KVType_KVType_MIN = FetchAddRequest_KVType_INSERT;
const FetchAddRequest_KVType FetchAddRequest_KVType_KVType_MAX = FetchAddRequest_KVType_DELETE;
const int FetchAddRequest_KVType_KVType_ARRAYSIZE = FetchAddRequest_KVType_KVType_MAX + 1;

const ::google::protobuf::EnumDescriptor* FetchAddRequest_KVType_descriptor();
inline const ::std::string& FetchAddRequest_KVType_Name(FetchAddRequest_KVType value) {
  return ::google::protobuf::internal::NameOfEnum(
    FetchAddRequest_KVType_descriptor(), value);
}
inline bool FetchAddRequest_KVType_Parse(
    const ::std::string& name, FetchAddRequest_KVType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<FetchAddRequest_KVType>(
    FetchAddRequest_KVType_descriptor(), name, value);
}
// ===================================================================

class Snapshot : public ::google::protobuf::Message {
 public:
  Snapshot();
  virtual ~Snapshot();

  Snapshot(const Snapshot& from);

  inline Snapshot& operator=(const Snapshot& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Snapshot& default_instance();

  void Swap(Snapshot* other);

  // implements Message ----------------------------------------------

  Snapshot* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Snapshot& from);
  void MergeFrom(const Snapshot& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int64 value = 1;
  inline bool has_value() const;
  inline void clear_value();
  static const int kValueFieldNumber = 1;
  inline ::google::protobuf::int64 value() const;
  inline void set_value(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:example.Snapshot)
 private:
  inline void set_has_value();
  inline void clear_has_value();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 value_;
  friend void  protobuf_AddDesc_counter_2eproto();
  friend void protobuf_AssignDesc_counter_2eproto();
  friend void protobuf_ShutdownFile_counter_2eproto();

  void InitAsDefaultInstance();
  static Snapshot* default_instance_;
};
// -------------------------------------------------------------------

class FetchAddRequest : public ::google::protobuf::Message {
 public:
  FetchAddRequest();
  virtual ~FetchAddRequest();

  FetchAddRequest(const FetchAddRequest& from);

  inline FetchAddRequest& operator=(const FetchAddRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const FetchAddRequest& default_instance();

  void Swap(FetchAddRequest* other);

  // implements Message ----------------------------------------------

  FetchAddRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FetchAddRequest& from);
  void MergeFrom(const FetchAddRequest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef FetchAddRequest_KVType KVType;
  static const KVType INSERT = FetchAddRequest_KVType_INSERT;
  static const KVType DELETE = FetchAddRequest_KVType_DELETE;
  static inline bool KVType_IsValid(int value) {
    return FetchAddRequest_KVType_IsValid(value);
  }
  static const KVType KVType_MIN =
    FetchAddRequest_KVType_KVType_MIN;
  static const KVType KVType_MAX =
    FetchAddRequest_KVType_KVType_MAX;
  static const int KVType_ARRAYSIZE =
    FetchAddRequest_KVType_KVType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  KVType_descriptor() {
    return FetchAddRequest_KVType_descriptor();
  }
  static inline const ::std::string& KVType_Name(KVType value) {
    return FetchAddRequest_KVType_Name(value);
  }
  static inline bool KVType_Parse(const ::std::string& name,
      KVType* value) {
    return FetchAddRequest_KVType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required int64 value = 1;
  inline bool has_value() const;
  inline void clear_value();
  static const int kValueFieldNumber = 1;
  inline ::google::protobuf::int64 value() const;
  inline void set_value(::google::protobuf::int64 value);

  // required string key = 2;
  inline bool has_key() const;
  inline void clear_key();
  static const int kKeyFieldNumber = 2;
  inline const ::std::string& key() const;
  inline void set_key(const ::std::string& value);
  inline void set_key(const char* value);
  inline void set_key(const char* value, size_t size);
  inline ::std::string* mutable_key();
  inline ::std::string* release_key();
  inline void set_allocated_key(::std::string* key);

  // required string val = 3;
  inline bool has_val() const;
  inline void clear_val();
  static const int kValFieldNumber = 3;
  inline const ::std::string& val() const;
  inline void set_val(const ::std::string& value);
  inline void set_val(const char* value);
  inline void set_val(const char* value, size_t size);
  inline ::std::string* mutable_val();
  inline ::std::string* release_val();
  inline void set_allocated_val(::std::string* val);

  // optional .example.FetchAddRequest.KVType type = 4 [default = INSERT];
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 4;
  inline ::example::FetchAddRequest_KVType type() const;
  inline void set_type(::example::FetchAddRequest_KVType value);

  // @@protoc_insertion_point(class_scope:example.FetchAddRequest)
 private:
  inline void set_has_value();
  inline void clear_has_value();
  inline void set_has_key();
  inline void clear_has_key();
  inline void set_has_val();
  inline void clear_has_val();
  inline void set_has_type();
  inline void clear_has_type();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 value_;
  ::std::string* key_;
  ::std::string* val_;
  int type_;
  friend void  protobuf_AddDesc_counter_2eproto();
  friend void protobuf_AssignDesc_counter_2eproto();
  friend void protobuf_ShutdownFile_counter_2eproto();

  void InitAsDefaultInstance();
  static FetchAddRequest* default_instance_;
};
// -------------------------------------------------------------------

class CounterResponse : public ::google::protobuf::Message {
 public:
  CounterResponse();
  virtual ~CounterResponse();

  CounterResponse(const CounterResponse& from);

  inline CounterResponse& operator=(const CounterResponse& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CounterResponse& default_instance();

  void Swap(CounterResponse* other);

  // implements Message ----------------------------------------------

  CounterResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CounterResponse& from);
  void MergeFrom(const CounterResponse& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required bool success = 1;
  inline bool has_success() const;
  inline void clear_success();
  static const int kSuccessFieldNumber = 1;
  inline bool success() const;
  inline void set_success(bool value);

  // optional int64 value = 2;
  inline bool has_value() const;
  inline void clear_value();
  static const int kValueFieldNumber = 2;
  inline ::google::protobuf::int64 value() const;
  inline void set_value(::google::protobuf::int64 value);

  // optional string redirect = 3;
  inline bool has_redirect() const;
  inline void clear_redirect();
  static const int kRedirectFieldNumber = 3;
  inline const ::std::string& redirect() const;
  inline void set_redirect(const ::std::string& value);
  inline void set_redirect(const char* value);
  inline void set_redirect(const char* value, size_t size);
  inline ::std::string* mutable_redirect();
  inline ::std::string* release_redirect();
  inline void set_allocated_redirect(::std::string* redirect);

  // @@protoc_insertion_point(class_scope:example.CounterResponse)
 private:
  inline void set_has_success();
  inline void clear_has_success();
  inline void set_has_value();
  inline void clear_has_value();
  inline void set_has_redirect();
  inline void clear_has_redirect();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 value_;
  ::std::string* redirect_;
  bool success_;
  friend void  protobuf_AddDesc_counter_2eproto();
  friend void protobuf_AssignDesc_counter_2eproto();
  friend void protobuf_ShutdownFile_counter_2eproto();

  void InitAsDefaultInstance();
  static CounterResponse* default_instance_;
};
// -------------------------------------------------------------------

class GetRequest : public ::google::protobuf::Message {
 public:
  GetRequest();
  virtual ~GetRequest();

  GetRequest(const GetRequest& from);

  inline GetRequest& operator=(const GetRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const GetRequest& default_instance();

  void Swap(GetRequest* other);

  // implements Message ----------------------------------------------

  GetRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GetRequest& from);
  void MergeFrom(const GetRequest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:example.GetRequest)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_counter_2eproto();
  friend void protobuf_AssignDesc_counter_2eproto();
  friend void protobuf_ShutdownFile_counter_2eproto();

  void InitAsDefaultInstance();
  static GetRequest* default_instance_;
};
// ===================================================================

class CounterService_Stub;

class CounterService : public ::google::protobuf::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline CounterService() {};
 public:
  virtual ~CounterService();

  typedef CounterService_Stub Stub;

  static const ::google::protobuf::ServiceDescriptor* descriptor();

  virtual void fetch_add(::google::protobuf::RpcController* controller,
                       const ::example::FetchAddRequest* request,
                       ::example::CounterResponse* response,
                       ::google::protobuf::Closure* done);
  virtual void get(::google::protobuf::RpcController* controller,
                       const ::example::GetRequest* request,
                       ::example::CounterResponse* response,
                       ::google::protobuf::Closure* done);

  // implements Service ----------------------------------------------

  const ::google::protobuf::ServiceDescriptor* GetDescriptor();
  void CallMethod(const ::google::protobuf::MethodDescriptor* method,
                  ::google::protobuf::RpcController* controller,
                  const ::google::protobuf::Message* request,
                  ::google::protobuf::Message* response,
                  ::google::protobuf::Closure* done);
  const ::google::protobuf::Message& GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const;
  const ::google::protobuf::Message& GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(CounterService);
};

class CounterService_Stub : public CounterService {
 public:
  CounterService_Stub(::google::protobuf::RpcChannel* channel);
  CounterService_Stub(::google::protobuf::RpcChannel* channel,
                   ::google::protobuf::Service::ChannelOwnership ownership);
  ~CounterService_Stub();

  inline ::google::protobuf::RpcChannel* channel() { return channel_; }

  // implements CounterService ------------------------------------------

  void fetch_add(::google::protobuf::RpcController* controller,
                       const ::example::FetchAddRequest* request,
                       ::example::CounterResponse* response,
                       ::google::protobuf::Closure* done);
  void get(::google::protobuf::RpcController* controller,
                       const ::example::GetRequest* request,
                       ::example::CounterResponse* response,
                       ::google::protobuf::Closure* done);
 private:
  ::google::protobuf::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(CounterService_Stub);
};


// ===================================================================


// ===================================================================

// Snapshot

// required int64 value = 1;
inline bool Snapshot::has_value() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Snapshot::set_has_value() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Snapshot::clear_has_value() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Snapshot::clear_value() {
  value_ = GOOGLE_LONGLONG(0);
  clear_has_value();
}
inline ::google::protobuf::int64 Snapshot::value() const {
  // @@protoc_insertion_point(field_get:example.Snapshot.value)
  return value_;
}
inline void Snapshot::set_value(::google::protobuf::int64 value) {
  set_has_value();
  value_ = value;
  // @@protoc_insertion_point(field_set:example.Snapshot.value)
}

// -------------------------------------------------------------------

// FetchAddRequest

// required int64 value = 1;
inline bool FetchAddRequest::has_value() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FetchAddRequest::set_has_value() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FetchAddRequest::clear_has_value() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FetchAddRequest::clear_value() {
  value_ = GOOGLE_LONGLONG(0);
  clear_has_value();
}
inline ::google::protobuf::int64 FetchAddRequest::value() const {
  // @@protoc_insertion_point(field_get:example.FetchAddRequest.value)
  return value_;
}
inline void FetchAddRequest::set_value(::google::protobuf::int64 value) {
  set_has_value();
  value_ = value;
  // @@protoc_insertion_point(field_set:example.FetchAddRequest.value)
}

// required string key = 2;
inline bool FetchAddRequest::has_key() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FetchAddRequest::set_has_key() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FetchAddRequest::clear_has_key() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FetchAddRequest::clear_key() {
  if (key_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    key_->clear();
  }
  clear_has_key();
}
inline const ::std::string& FetchAddRequest::key() const {
  // @@protoc_insertion_point(field_get:example.FetchAddRequest.key)
  return *key_;
}
inline void FetchAddRequest::set_key(const ::std::string& value) {
  set_has_key();
  if (key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    key_ = new ::std::string;
  }
  key_->assign(value);
  // @@protoc_insertion_point(field_set:example.FetchAddRequest.key)
}
inline void FetchAddRequest::set_key(const char* value) {
  set_has_key();
  if (key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    key_ = new ::std::string;
  }
  key_->assign(value);
  // @@protoc_insertion_point(field_set_char:example.FetchAddRequest.key)
}
inline void FetchAddRequest::set_key(const char* value, size_t size) {
  set_has_key();
  if (key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    key_ = new ::std::string;
  }
  key_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:example.FetchAddRequest.key)
}
inline ::std::string* FetchAddRequest::mutable_key() {
  set_has_key();
  if (key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    key_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:example.FetchAddRequest.key)
  return key_;
}
inline ::std::string* FetchAddRequest::release_key() {
  clear_has_key();
  if (key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = key_;
    key_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void FetchAddRequest::set_allocated_key(::std::string* key) {
  if (key_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete key_;
  }
  if (key) {
    set_has_key();
    key_ = key;
  } else {
    clear_has_key();
    key_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:example.FetchAddRequest.key)
}

// required string val = 3;
inline bool FetchAddRequest::has_val() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void FetchAddRequest::set_has_val() {
  _has_bits_[0] |= 0x00000004u;
}
inline void FetchAddRequest::clear_has_val() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void FetchAddRequest::clear_val() {
  if (val_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    val_->clear();
  }
  clear_has_val();
}
inline const ::std::string& FetchAddRequest::val() const {
  // @@protoc_insertion_point(field_get:example.FetchAddRequest.val)
  return *val_;
}
inline void FetchAddRequest::set_val(const ::std::string& value) {
  set_has_val();
  if (val_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    val_ = new ::std::string;
  }
  val_->assign(value);
  // @@protoc_insertion_point(field_set:example.FetchAddRequest.val)
}
inline void FetchAddRequest::set_val(const char* value) {
  set_has_val();
  if (val_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    val_ = new ::std::string;
  }
  val_->assign(value);
  // @@protoc_insertion_point(field_set_char:example.FetchAddRequest.val)
}
inline void FetchAddRequest::set_val(const char* value, size_t size) {
  set_has_val();
  if (val_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    val_ = new ::std::string;
  }
  val_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:example.FetchAddRequest.val)
}
inline ::std::string* FetchAddRequest::mutable_val() {
  set_has_val();
  if (val_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    val_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:example.FetchAddRequest.val)
  return val_;
}
inline ::std::string* FetchAddRequest::release_val() {
  clear_has_val();
  if (val_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = val_;
    val_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void FetchAddRequest::set_allocated_val(::std::string* val) {
  if (val_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete val_;
  }
  if (val) {
    set_has_val();
    val_ = val;
  } else {
    clear_has_val();
    val_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:example.FetchAddRequest.val)
}

// optional .example.FetchAddRequest.KVType type = 4 [default = INSERT];
inline bool FetchAddRequest::has_type() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void FetchAddRequest::set_has_type() {
  _has_bits_[0] |= 0x00000008u;
}
inline void FetchAddRequest::clear_has_type() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void FetchAddRequest::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::example::FetchAddRequest_KVType FetchAddRequest::type() const {
  // @@protoc_insertion_point(field_get:example.FetchAddRequest.type)
  return static_cast< ::example::FetchAddRequest_KVType >(type_);
}
inline void FetchAddRequest::set_type(::example::FetchAddRequest_KVType value) {
  assert(::example::FetchAddRequest_KVType_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:example.FetchAddRequest.type)
}

// -------------------------------------------------------------------

// CounterResponse

// required bool success = 1;
inline bool CounterResponse::has_success() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CounterResponse::set_has_success() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CounterResponse::clear_has_success() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CounterResponse::clear_success() {
  success_ = false;
  clear_has_success();
}
inline bool CounterResponse::success() const {
  // @@protoc_insertion_point(field_get:example.CounterResponse.success)
  return success_;
}
inline void CounterResponse::set_success(bool value) {
  set_has_success();
  success_ = value;
  // @@protoc_insertion_point(field_set:example.CounterResponse.success)
}

// optional int64 value = 2;
inline bool CounterResponse::has_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CounterResponse::set_has_value() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CounterResponse::clear_has_value() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CounterResponse::clear_value() {
  value_ = GOOGLE_LONGLONG(0);
  clear_has_value();
}
inline ::google::protobuf::int64 CounterResponse::value() const {
  // @@protoc_insertion_point(field_get:example.CounterResponse.value)
  return value_;
}
inline void CounterResponse::set_value(::google::protobuf::int64 value) {
  set_has_value();
  value_ = value;
  // @@protoc_insertion_point(field_set:example.CounterResponse.value)
}

// optional string redirect = 3;
inline bool CounterResponse::has_redirect() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CounterResponse::set_has_redirect() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CounterResponse::clear_has_redirect() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CounterResponse::clear_redirect() {
  if (redirect_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    redirect_->clear();
  }
  clear_has_redirect();
}
inline const ::std::string& CounterResponse::redirect() const {
  // @@protoc_insertion_point(field_get:example.CounterResponse.redirect)
  return *redirect_;
}
inline void CounterResponse::set_redirect(const ::std::string& value) {
  set_has_redirect();
  if (redirect_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    redirect_ = new ::std::string;
  }
  redirect_->assign(value);
  // @@protoc_insertion_point(field_set:example.CounterResponse.redirect)
}
inline void CounterResponse::set_redirect(const char* value) {
  set_has_redirect();
  if (redirect_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    redirect_ = new ::std::string;
  }
  redirect_->assign(value);
  // @@protoc_insertion_point(field_set_char:example.CounterResponse.redirect)
}
inline void CounterResponse::set_redirect(const char* value, size_t size) {
  set_has_redirect();
  if (redirect_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    redirect_ = new ::std::string;
  }
  redirect_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:example.CounterResponse.redirect)
}
inline ::std::string* CounterResponse::mutable_redirect() {
  set_has_redirect();
  if (redirect_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    redirect_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:example.CounterResponse.redirect)
  return redirect_;
}
inline ::std::string* CounterResponse::release_redirect() {
  clear_has_redirect();
  if (redirect_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = redirect_;
    redirect_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void CounterResponse::set_allocated_redirect(::std::string* redirect) {
  if (redirect_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete redirect_;
  }
  if (redirect) {
    set_has_redirect();
    redirect_ = redirect;
  } else {
    clear_has_redirect();
    redirect_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:example.CounterResponse.redirect)
}

// -------------------------------------------------------------------

// GetRequest


// @@protoc_insertion_point(namespace_scope)

}  // namespace example

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::example::FetchAddRequest_KVType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::example::FetchAddRequest_KVType>() {
  return ::example::FetchAddRequest_KVType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_counter_2eproto__INCLUDED
