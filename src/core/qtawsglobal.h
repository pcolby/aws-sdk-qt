#ifndef QTAWSGLOBAL_H
#define QTAWSGLOBAL_H


// Export declaration macros.
#if defined QTAWS_LIBRARY
#  define QTAWS_EXPORT Q_DECL_EXPORT
#else
#  define QTAWS_EXPORT Q_DECL_IMPORT
#endif

// Custom namespace wrapper macros.
#ifdef QTAWS_NAMESPACE
# define QTAWS_BEGIN_NAMESPACE namespace QTAWS_NAMESPACE {
# define QTAWS_END_NAMESPACE }
#else
# define QTAWS_BEGIN_NAMESPACE
# define QTAWS_END_NAMESPACE
#endif


#endif // QTAWSGLOBAL_H
