// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUBSCRIPTIONFILTERRESPONSE_H
#define QTAWS_DELETESUBSCRIPTIONFILTERRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "deletesubscriptionfilterrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DeleteSubscriptionFilterResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT DeleteSubscriptionFilterResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    DeleteSubscriptionFilterResponse(const DeleteSubscriptionFilterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSubscriptionFilterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSubscriptionFilterResponse)
    Q_DISABLE_COPY(DeleteSubscriptionFilterResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
