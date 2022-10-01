// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOGSTREAMRESPONSE_H
#define QTAWS_DELETELOGSTREAMRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "deletelogstreamrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DeleteLogStreamResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT DeleteLogStreamResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    DeleteLogStreamResponse(const DeleteLogStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLogStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLogStreamResponse)
    Q_DISABLE_COPY(DeleteLogStreamResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
