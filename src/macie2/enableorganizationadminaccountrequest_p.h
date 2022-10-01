// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEORGANIZATIONADMINACCOUNTREQUEST_P_H
#define QTAWS_ENABLEORGANIZATIONADMINACCOUNTREQUEST_P_H

#include "macie2request_p.h"
#include "enableorganizationadminaccountrequest.h"

namespace QtAws {
namespace Macie2 {

class EnableOrganizationAdminAccountRequest;

class EnableOrganizationAdminAccountRequestPrivate : public Macie2RequestPrivate {

public:
    EnableOrganizationAdminAccountRequestPrivate(const Macie2Request::Action action,
                                   EnableOrganizationAdminAccountRequest * const q);
    EnableOrganizationAdminAccountRequestPrivate(const EnableOrganizationAdminAccountRequestPrivate &other,
                                   EnableOrganizationAdminAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableOrganizationAdminAccountRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
