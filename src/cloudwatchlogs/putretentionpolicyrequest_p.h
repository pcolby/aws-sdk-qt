// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRETENTIONPOLICYREQUEST_P_H
#define QTAWS_PUTRETENTIONPOLICYREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "putretentionpolicyrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class PutRetentionPolicyRequest;

class PutRetentionPolicyRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    PutRetentionPolicyRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   PutRetentionPolicyRequest * const q);
    PutRetentionPolicyRequestPrivate(const PutRetentionPolicyRequestPrivate &other,
                                   PutRetentionPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutRetentionPolicyRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
