// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEIPAMORGANIZATIONADMINACCOUNTREQUEST_P_H
#define QTAWS_ENABLEIPAMORGANIZATIONADMINACCOUNTREQUEST_P_H

#include "ec2request_p.h"
#include "enableipamorganizationadminaccountrequest.h"

namespace QtAws {
namespace Ec2 {

class EnableIpamOrganizationAdminAccountRequest;

class EnableIpamOrganizationAdminAccountRequestPrivate : public Ec2RequestPrivate {

public:
    EnableIpamOrganizationAdminAccountRequestPrivate(const Ec2Request::Action action,
                                   EnableIpamOrganizationAdminAccountRequest * const q);
    EnableIpamOrganizationAdminAccountRequestPrivate(const EnableIpamOrganizationAdminAccountRequestPrivate &other,
                                   EnableIpamOrganizationAdminAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableIpamOrganizationAdminAccountRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
