#include <QObject>

#if defined QTAWS_LIBRARY
#define QTAWS_EXPORT Q_DECL_EXPORT
#else
#define QTAWS_EXPORT Q_DECL_IMPORT
#endif

namespace aws {
namespace core {

class QTAWS_EXPORT Credentials : QObject {
    Q_OBJECT
};

} }
