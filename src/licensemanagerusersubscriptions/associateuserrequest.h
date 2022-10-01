// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEUSERREQUEST_H
#define QTAWS_ASSOCIATEUSERREQUEST_H

#include "licensemanagerusersubscriptionsrequest.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class AssociateUserRequestPrivate;

class QTAWSLICENSEMANAGERUSERSUBSCRIPTIONS_EXPORT AssociateUserRequest : public LicenseManagerUserSubscriptionsRequest {

public:
    AssociateUserRequest(const AssociateUserRequest &other);
    AssociateUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateUserRequest)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
