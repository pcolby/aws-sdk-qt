// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSERROR_H
#define SQSERROR_H

#include "core/qtawsglobal.h"

#include <QList>
#include <QVariantMap>

class QIODevice;
class QXmlStreamReader;

namespace QtAws {
namespace SqsOld {

class SqsErrorPrivate;

class QTAWS_EXPORT SqsError {

public:
    /// SQS error codes.
    /// @see http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
    enum ErrorCode {
        AccessDenied,
        IncompleteSignature,
        InternalFailure,
        InvalidAction,
        InvalidClientTokenId,
        InvalidParameterCombination,
        InvalidParameterValue,
        InvalidQueryParameter,
        MalformedQueryString,
        MissingAction,
        MissingAuthenticationToken,
        MissingParameter,
        OptInRequired,
        RequestExpired,
        ServiceUnavailable,
        Throttling,
        ValidationError,
        OtherError = 0xFF
    };

    /// SQS error types.
    /// @see http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
    enum ErrorType {
        ReceiverType,
        SenderType,
        OtherType = 0xFF
    };

    SqsError(QXmlStreamReader &xml);

    // Qt container class support.
    /// @cond internal
    SqsError();
    SqsError(const SqsError &other);
    SqsError &operator=(const SqsError &other);
    /// @endcond

    virtual ~SqsError();

    ErrorCode code() const;
    QVariantMap detail() const;
    QString message() const;
    QString rawCode() const;
    QString rawType() const;
    ErrorType type() const;

    bool operator==(const SqsError &other) const;

protected:
    /// @cond internal
    SqsErrorPrivate * const d_ptr; ///< Internal d-pointer.
    SqsError(SqsErrorPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(SqsError)
    friend class TestSqsError;
};

typedef QList<SqsError> SqsErrorList;

} // namespace SqsOld
} // namespace QtAws

#endif
