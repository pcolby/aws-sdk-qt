// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEUSERREQUEST_P_H
#define QTAWS_DISASSOCIATEUSERREQUEST_P_H

#include "licensemanagerusersubscriptionsrequest_p.h"
#include "disassociateuserrequest.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class DisassociateUserRequest;

class DisassociateUserRequestPrivate : public LicenseManagerUserSubscriptionsRequestPrivate {

public:
    DisassociateUserRequestPrivate(const LicenseManagerUserSubscriptionsRequest::Action action,
                                   DisassociateUserRequest * const q);
    DisassociateUserRequestPrivate(const DisassociateUserRequestPrivate &other,
                                   DisassociateUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateUserRequest)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
