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

#ifndef QTAWS_DELETERETENTIONPOLICYRESPONSE_P_H
#define QTAWS_DELETERETENTIONPOLICYRESPONSE_P_H

#include "cloudwatchlogsresponse.h"
#include "deleteretentionpolicyrequest.h"

namespace AWS {

namespace CloudWatchLogs {

class DeleteRetentionPolicyResponse;

class QTAWS_EXPORT DeleteRetentionPolicyResponsePrivate : public CloudWatchLogsResponsePrivate {
    Q_OBJECT

public:

    DeleteRetentionPolicyResponsePrivate(DeleteRetentionPolicyResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRetentionPolicyResponse)
    Q_DISABLE_COPY(DeleteRetentionPolicyResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace AWS

#endif
