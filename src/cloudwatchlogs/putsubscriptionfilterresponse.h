// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSUBSCRIPTIONFILTERRESPONSE_H
#define QTAWS_PUTSUBSCRIPTIONFILTERRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "putsubscriptionfilterrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class PutSubscriptionFilterResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT PutSubscriptionFilterResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    PutSubscriptionFilterResponse(const PutSubscriptionFilterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutSubscriptionFilterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutSubscriptionFilterResponse)
    Q_DISABLE_COPY(PutSubscriptionFilterResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
