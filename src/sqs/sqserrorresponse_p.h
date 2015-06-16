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

#ifndef SQSERRORRESPONSE_P_H
#define SQSERRORRESPONSE_P_H

#include "sqsresponse_p.h"

class QXmlStreamReader;

QTAWS_BEGIN_NAMESPACE

class SqsErrorResponse;

class QTAWS_EXPORT SqsErrorResponsePrivate : public SqsResponsePrivate {

public:
    /// @todo ErrorCode errorCode;
    QString errorCodeString;
    QString errorDetail;
    /// @todo ErrorType errorType;
    QString errorTypeString;
    QString errorMessage;
    QString requestId;

    SqsErrorResponsePrivate(SqsErrorResponse * const q);

    virtual ~SqsErrorResponsePrivate();

    bool parseErrorResponse(QXmlStreamReader * xml);

private:
    Q_DECLARE_PUBLIC(SqsErrorResponse)
    SqsErrorResponse * const q_ptr; ///< Internal q-pointer.

};

QTAWS_END_NAMESPACE

#endif
