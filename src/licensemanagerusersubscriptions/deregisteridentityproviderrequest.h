// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERIDENTITYPROVIDERREQUEST_H
#define QTAWS_DEREGISTERIDENTITYPROVIDERREQUEST_H

#include "licensemanagerusersubscriptionsrequest.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class DeregisterIdentityProviderRequestPrivate;

class QTAWSLICENSEMANAGERUSERSUBSCRIPTIONS_EXPORT DeregisterIdentityProviderRequest : public LicenseManagerUserSubscriptionsRequest {

public:
    DeregisterIdentityProviderRequest(const DeregisterIdentityProviderRequest &other);
    DeregisterIdentityProviderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterIdentityProviderRequest)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
