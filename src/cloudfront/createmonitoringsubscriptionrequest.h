// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMONITORINGSUBSCRIPTIONREQUEST_H
#define QTAWS_CREATEMONITORINGSUBSCRIPTIONREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateMonitoringSubscriptionRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT CreateMonitoringSubscriptionRequest : public CloudFrontRequest {

public:
    CreateMonitoringSubscriptionRequest(const CreateMonitoringSubscriptionRequest &other);
    CreateMonitoringSubscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMonitoringSubscriptionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
