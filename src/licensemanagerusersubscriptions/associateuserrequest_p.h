// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEUSERREQUEST_P_H
#define QTAWS_ASSOCIATEUSERREQUEST_P_H

#include "licensemanagerusersubscriptionsrequest_p.h"
#include "associateuserrequest.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class AssociateUserRequest;

class AssociateUserRequestPrivate : public LicenseManagerUserSubscriptionsRequestPrivate {

public:
    AssociateUserRequestPrivate(const LicenseManagerUserSubscriptionsRequest::Action action,
                                   AssociateUserRequest * const q);
    AssociateUserRequestPrivate(const AssociateUserRequestPrivate &other,
                                   AssociateUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateUserRequest)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
