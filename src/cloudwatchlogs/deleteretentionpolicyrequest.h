// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERETENTIONPOLICYREQUEST_H
#define QTAWS_DELETERETENTIONPOLICYREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DeleteRetentionPolicyRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT DeleteRetentionPolicyRequest : public CloudWatchLogsRequest {

public:
    DeleteRetentionPolicyRequest(const DeleteRetentionPolicyRequest &other);
    DeleteRetentionPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRetentionPolicyRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
