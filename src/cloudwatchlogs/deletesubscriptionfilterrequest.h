// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUBSCRIPTIONFILTERREQUEST_H
#define QTAWS_DELETESUBSCRIPTIONFILTERREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DeleteSubscriptionFilterRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT DeleteSubscriptionFilterRequest : public CloudWatchLogsRequest {

public:
    DeleteSubscriptionFilterRequest(const DeleteSubscriptionFilterRequest &other);
    DeleteSubscriptionFilterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSubscriptionFilterRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
