// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEORGANIZATIONADMINACCOUNTREQUEST_P_H
#define QTAWS_ENABLEORGANIZATIONADMINACCOUNTREQUEST_P_H

#include "detectiverequest_p.h"
#include "enableorganizationadminaccountrequest.h"

namespace QtAws {
namespace Detective {

class EnableOrganizationAdminAccountRequest;

class EnableOrganizationAdminAccountRequestPrivate : public DetectiveRequestPrivate {

public:
    EnableOrganizationAdminAccountRequestPrivate(const DetectiveRequest::Action action,
                                   EnableOrganizationAdminAccountRequest * const q);
    EnableOrganizationAdminAccountRequestPrivate(const EnableOrganizationAdminAccountRequestPrivate &other,
                                   EnableOrganizationAdminAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableOrganizationAdminAccountRequest)

};

} // namespace Detective
} // namespace QtAws

#endif
