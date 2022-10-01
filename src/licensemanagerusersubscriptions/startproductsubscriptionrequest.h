// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPRODUCTSUBSCRIPTIONREQUEST_H
#define QTAWS_STARTPRODUCTSUBSCRIPTIONREQUEST_H

#include "licensemanagerusersubscriptionsrequest.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class StartProductSubscriptionRequestPrivate;

class QTAWSLICENSEMANAGERUSERSUBSCRIPTIONS_EXPORT StartProductSubscriptionRequest : public LicenseManagerUserSubscriptionsRequest {

public:
    StartProductSubscriptionRequest(const StartProductSubscriptionRequest &other);
    StartProductSubscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartProductSubscriptionRequest)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
