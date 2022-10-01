// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMONITORINGSUBSCRIPTIONREQUEST_H
#define QTAWS_DELETEMONITORINGSUBSCRIPTIONREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteMonitoringSubscriptionRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT DeleteMonitoringSubscriptionRequest : public CloudFrontRequest {

public:
    DeleteMonitoringSubscriptionRequest(const DeleteMonitoringSubscriptionRequest &other);
    DeleteMonitoringSubscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMonitoringSubscriptionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
