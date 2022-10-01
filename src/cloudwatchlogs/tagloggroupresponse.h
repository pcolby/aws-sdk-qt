// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGLOGGROUPRESPONSE_H
#define QTAWS_TAGLOGGROUPRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "tagloggrouprequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class TagLogGroupResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT TagLogGroupResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    TagLogGroupResponse(const TagLogGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TagLogGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagLogGroupResponse)
    Q_DISABLE_COPY(TagLogGroupResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
