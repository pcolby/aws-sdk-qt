/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_CHANGEMESSAGEVISIBILITYBATCHRESPONSE_P_H
#define QTAWS_CHANGEMESSAGEVISIBILITYBATCHRESPONSE_P_H

#include "sqsresponse.h"
#include "changemessagevisibilitybatchrequest.h"

namespace AWS {

namespace SQS {

class ChangeMessageVisibilityBatchResponse;

class QTAWS_EXPORT ChangeMessageVisibilityBatchResponsePrivate : public SQSResponsePrivate {
    Q_OBJECT

public:

    ChangeMessageVisibilityBatchResponsePrivate(ChangeMessageVisibilityBatchResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ChangeMessageVisibilityBatchResponse)
    Q_DISABLE_COPY(ChangeMessageVisibilityBatchResponsePrivate)

};

} // namespace SQS
} // namespace AWS

#endif
