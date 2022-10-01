// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOGGROUPRESPONSE_H
#define QTAWS_CREATELOGGROUPRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "createloggrouprequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class CreateLogGroupResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT CreateLogGroupResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    CreateLogGroupResponse(const CreateLogGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLogGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLogGroupResponse)
    Q_DISABLE_COPY(CreateLogGroupResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
