// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPPRODUCTSUBSCRIPTIONREQUEST_H
#define QTAWS_STOPPRODUCTSUBSCRIPTIONREQUEST_H

#include "licensemanagerusersubscriptionsrequest.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class StopProductSubscriptionRequestPrivate;

class QTAWSLICENSEMANAGERUSERSUBSCRIPTIONS_EXPORT StopProductSubscriptionRequest : public LicenseManagerUserSubscriptionsRequest {

public:
    StopProductSubscriptionRequest(const StopProductSubscriptionRequest &other);
    StopProductSubscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopProductSubscriptionRequest)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
