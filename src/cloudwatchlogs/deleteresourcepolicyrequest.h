// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCEPOLICYREQUEST_H
#define QTAWS_DELETERESOURCEPOLICYREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DeleteResourcePolicyRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT DeleteResourcePolicyRequest : public CloudWatchLogsRequest {

public:
    DeleteResourcePolicyRequest(const DeleteResourcePolicyRequest &other);
    DeleteResourcePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResourcePolicyRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
