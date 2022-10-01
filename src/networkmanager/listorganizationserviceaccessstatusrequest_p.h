// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORGANIZATIONSERVICEACCESSSTATUSREQUEST_P_H
#define QTAWS_LISTORGANIZATIONSERVICEACCESSSTATUSREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "listorganizationserviceaccessstatusrequest.h"

namespace QtAws {
namespace NetworkManager {

class ListOrganizationServiceAccessStatusRequest;

class ListOrganizationServiceAccessStatusRequestPrivate : public NetworkManagerRequestPrivate {

public:
    ListOrganizationServiceAccessStatusRequestPrivate(const NetworkManagerRequest::Action action,
                                   ListOrganizationServiceAccessStatusRequest * const q);
    ListOrganizationServiceAccessStatusRequestPrivate(const ListOrganizationServiceAccessStatusRequestPrivate &other,
                                   ListOrganizationServiceAccessStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListOrganizationServiceAccessStatusRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
