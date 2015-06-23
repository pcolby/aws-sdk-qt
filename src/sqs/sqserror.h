/*
    Copyright 2013-2015 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef SQSERROR_H
#define SQSERROR_H

#include "sqsresponse.h"

#include <QVariantMap>

QTAWS_BEGIN_NAMESPACE

class SqsErrorPrivate;

class QTAWS_EXPORT SqsError : public SqsResponse {
    Q_OBJECT

public:
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

    enum ErrorType {
        ReceiverType,
        SenderType,
        OtherType = 0xFF
    };

    struct Error {
        ErrorCode code;
        QVariantMap detail;
        QString message;
        QString rawCode;
        QString rawType;
        ErrorType type;
    };

    typedef QList<Error> ErrorList;

    SqsError(QObject * const parent = 0);

    virtual ~SqsError();

    virtual bool isErrorResponse() const;
    virtual bool isValid() const;

    ErrorList errors() const;

    ErrorCode code() const;
    QVariant detail() const;
    QString message() const;
    ErrorType type() const;

protected slots:
    virtual bool parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(SqsError)
    SqsErrorPrivate * const d_ptr; ///< Internal d-pointer.

};

QTAWS_END_NAMESPACE

#endif
