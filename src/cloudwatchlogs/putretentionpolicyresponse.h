// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRETENTIONPOLICYRESPONSE_H
#define QTAWS_PUTRETENTIONPOLICYRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "putretentionpolicyrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class PutRetentionPolicyResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT PutRetentionPolicyResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    PutRetentionPolicyResponse(const PutRetentionPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutRetentionPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRetentionPolicyResponse)
    Q_DISABLE_COPY(PutRetentionPolicyResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
