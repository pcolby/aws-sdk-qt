// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEIPAMORGANIZATIONADMINACCOUNTREQUEST_P_H
#define QTAWS_DISABLEIPAMORGANIZATIONADMINACCOUNTREQUEST_P_H

#include "ec2request_p.h"
#include "disableipamorganizationadminaccountrequest.h"

namespace QtAws {
namespace Ec2 {

class DisableIpamOrganizationAdminAccountRequest;

class DisableIpamOrganizationAdminAccountRequestPrivate : public Ec2RequestPrivate {

public:
    DisableIpamOrganizationAdminAccountRequestPrivate(const Ec2Request::Action action,
                                   DisableIpamOrganizationAdminAccountRequest * const q);
    DisableIpamOrganizationAdminAccountRequestPrivate(const DisableIpamOrganizationAdminAccountRequestPrivate &other,
                                   DisableIpamOrganizationAdminAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableIpamOrganizationAdminAccountRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
