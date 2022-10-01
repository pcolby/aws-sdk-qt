// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSUBSCRIPTIONFILTERREQUEST_H
#define QTAWS_PUTSUBSCRIPTIONFILTERREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class PutSubscriptionFilterRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT PutSubscriptionFilterRequest : public CloudWatchLogsRequest {

public:
    PutSubscriptionFilterRequest(const PutSubscriptionFilterRequest &other);
    PutSubscriptionFilterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutSubscriptionFilterRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
