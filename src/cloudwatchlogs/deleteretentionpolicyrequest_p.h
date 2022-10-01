// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERETENTIONPOLICYREQUEST_P_H
#define QTAWS_DELETERETENTIONPOLICYREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "deleteretentionpolicyrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DeleteRetentionPolicyRequest;

class DeleteRetentionPolicyRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    DeleteRetentionPolicyRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   DeleteRetentionPolicyRequest * const q);
    DeleteRetentionPolicyRequestPrivate(const DeleteRetentionPolicyRequestPrivate &other,
                                   DeleteRetentionPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRetentionPolicyRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
