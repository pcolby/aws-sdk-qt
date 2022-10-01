// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOGSTREAMRESPONSE_H
#define QTAWS_CREATELOGSTREAMRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "createlogstreamrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class CreateLogStreamResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT CreateLogStreamResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    CreateLogStreamResponse(const CreateLogStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLogStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLogStreamResponse)
    Q_DISABLE_COPY(CreateLogStreamResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
