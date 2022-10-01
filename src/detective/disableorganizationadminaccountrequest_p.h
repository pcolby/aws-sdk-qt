// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEORGANIZATIONADMINACCOUNTREQUEST_P_H
#define QTAWS_DISABLEORGANIZATIONADMINACCOUNTREQUEST_P_H

#include "detectiverequest_p.h"
#include "disableorganizationadminaccountrequest.h"

namespace QtAws {
namespace Detective {

class DisableOrganizationAdminAccountRequest;

class DisableOrganizationAdminAccountRequestPrivate : public DetectiveRequestPrivate {

public:
    DisableOrganizationAdminAccountRequestPrivate(const DetectiveRequest::Action action,
                                   DisableOrganizationAdminAccountRequest * const q);
    DisableOrganizationAdminAccountRequestPrivate(const DisableOrganizationAdminAccountRequestPrivate &other,
                                   DisableOrganizationAdminAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableOrganizationAdminAccountRequest)

};

} // namespace Detective
} // namespace QtAws

#endif
