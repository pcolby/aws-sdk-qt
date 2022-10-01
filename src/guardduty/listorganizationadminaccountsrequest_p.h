// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORGANIZATIONADMINACCOUNTSREQUEST_P_H
#define QTAWS_LISTORGANIZATIONADMINACCOUNTSREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "listorganizationadminaccountsrequest.h"

namespace QtAws {
namespace GuardDuty {

class ListOrganizationAdminAccountsRequest;

class ListOrganizationAdminAccountsRequestPrivate : public GuardDutyRequestPrivate {

public:
    ListOrganizationAdminAccountsRequestPrivate(const GuardDutyRequest::Action action,
                                   ListOrganizationAdminAccountsRequest * const q);
    ListOrganizationAdminAccountsRequestPrivate(const ListOrganizationAdminAccountsRequestPrivate &other,
                                   ListOrganizationAdminAccountsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListOrganizationAdminAccountsRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
