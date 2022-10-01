// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOGGROUPRESPONSE_H
#define QTAWS_DELETELOGGROUPRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "deleteloggrouprequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DeleteLogGroupResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT DeleteLogGroupResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    DeleteLogGroupResponse(const DeleteLogGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLogGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLogGroupResponse)
    Q_DISABLE_COPY(DeleteLogGroupResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
