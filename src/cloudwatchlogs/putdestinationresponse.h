// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDESTINATIONRESPONSE_H
#define QTAWS_PUTDESTINATIONRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "putdestinationrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class PutDestinationResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT PutDestinationResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    PutDestinationResponse(const PutDestinationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutDestinationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutDestinationResponse)
    Q_DISABLE_COPY(PutDestinationResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
