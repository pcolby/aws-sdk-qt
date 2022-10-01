// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEACCOUNTFROMORGANIZATIONREQUEST_P_H
#define QTAWS_REMOVEACCOUNTFROMORGANIZATIONREQUEST_P_H

#include "organizationsrequest_p.h"
#include "removeaccountfromorganizationrequest.h"

namespace QtAws {
namespace Organizations {

class RemoveAccountFromOrganizationRequest;

class RemoveAccountFromOrganizationRequestPrivate : public OrganizationsRequestPrivate {

public:
    RemoveAccountFromOrganizationRequestPrivate(const OrganizationsRequest::Action action,
                                   RemoveAccountFromOrganizationRequest * const q);
    RemoveAccountFromOrganizationRequestPrivate(const RemoveAccountFromOrganizationRequestPrivate &other,
                                   RemoveAccountFromOrganizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveAccountFromOrganizationRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
