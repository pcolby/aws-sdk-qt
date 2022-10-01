// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVITEACCOUNTTOORGANIZATIONREQUEST_P_H
#define QTAWS_INVITEACCOUNTTOORGANIZATIONREQUEST_P_H

#include "organizationsrequest_p.h"
#include "inviteaccounttoorganizationrequest.h"

namespace QtAws {
namespace Organizations {

class InviteAccountToOrganizationRequest;

class InviteAccountToOrganizationRequestPrivate : public OrganizationsRequestPrivate {

public:
    InviteAccountToOrganizationRequestPrivate(const OrganizationsRequest::Action action,
                                   InviteAccountToOrganizationRequest * const q);
    InviteAccountToOrganizationRequestPrivate(const InviteAccountToOrganizationRequestPrivate &other,
                                   InviteAccountToOrganizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(InviteAccountToOrganizationRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
