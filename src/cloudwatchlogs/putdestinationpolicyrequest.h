// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDESTINATIONPOLICYREQUEST_H
#define QTAWS_PUTDESTINATIONPOLICYREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class PutDestinationPolicyRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT PutDestinationPolicyRequest : public CloudWatchLogsRequest {

public:
    PutDestinationPolicyRequest(const PutDestinationPolicyRequest &other);
    PutDestinationPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutDestinationPolicyRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
