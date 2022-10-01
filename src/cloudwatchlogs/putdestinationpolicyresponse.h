// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDESTINATIONPOLICYRESPONSE_H
#define QTAWS_PUTDESTINATIONPOLICYRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "putdestinationpolicyrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class PutDestinationPolicyResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT PutDestinationPolicyResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    PutDestinationPolicyResponse(const PutDestinationPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutDestinationPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutDestinationPolicyResponse)
    Q_DISABLE_COPY(PutDestinationPolicyResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
