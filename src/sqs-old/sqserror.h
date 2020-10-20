/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
