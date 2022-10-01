// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGLOGGROUPRESPONSE_H
#define QTAWS_UNTAGLOGGROUPRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "untagloggrouprequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class UntagLogGroupResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT UntagLogGroupResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    UntagLogGroupResponse(const UntagLogGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UntagLogGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagLogGroupResponse)
    Q_DISABLE_COPY(UntagLogGroupResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
