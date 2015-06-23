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

#include "sqserror.h"
#include "sqsresponse_p.h"

QTAWS_BEGIN_NAMESPACE

class QTAWS_EXPORT SqsErrorPrivate : public SqsResponsePrivate {

public:
    SqsError::ErrorList errors;

    SqsErrorPrivate(SqsError * const q);

    virtual ~SqsErrorPrivate();

    void parseErrorResponse(QXmlStreamReader &xml);

    static SqsError::ErrorCode codeFromString(const QString &code);
    static SqsError::ErrorType typeFromString(const QString &type);

private:
    Q_DECLARE_PUBLIC(SqsError)
    SqsError * const q_ptr; ///< Internal q-pointer.

};

QTAWS_END_NAMESPACE

#endif
