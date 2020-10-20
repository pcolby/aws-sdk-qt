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

#ifndef SQSRESPONSE_P_H
#define SQSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"
#include "sqserror.h"

#include <QXmlStreamReader>

namespace QtAws {
namespace SqsOld {

class SqsResponse;

class QTAWS_EXPORT SqsResponsePrivate : public AwsAbstractResponsePrivate {

public:
    SqsErrorList errors; ///< SQS errors.
    QString requestId;   ///< SQS request ID.

    SqsResponsePrivate(SqsResponse * const q);

    void parseErrorResponse(QXmlStreamReader &xml);
    void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SqsResponse)
    Q_DISABLE_COPY(SqsResponsePrivate)

};

} // namespace SqsOld
} // namespace QtAws

#endif
