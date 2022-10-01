// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMONITORINGSUBSCRIPTIONREQUEST_H
#define QTAWS_GETMONITORINGSUBSCRIPTIONREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class GetMonitoringSubscriptionRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT GetMonitoringSubscriptionRequest : public CloudFrontRequest {

public:
    GetMonitoringSubscriptionRequest(const GetMonitoringSubscriptionRequest &other);
    GetMonitoringSubscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMonitoringSubscriptionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
