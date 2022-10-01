// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTORGANIZATIONSERVICEACCESSUPDATEREQUEST_P_H
#define QTAWS_STARTORGANIZATIONSERVICEACCESSUPDATEREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "startorganizationserviceaccessupdaterequest.h"

namespace QtAws {
namespace NetworkManager {

class StartOrganizationServiceAccessUpdateRequest;

class StartOrganizationServiceAccessUpdateRequestPrivate : public NetworkManagerRequestPrivate {

public:
    StartOrganizationServiceAccessUpdateRequestPrivate(const NetworkManagerRequest::Action action,
                                   StartOrganizationServiceAccessUpdateRequest * const q);
    StartOrganizationServiceAccessUpdateRequestPrivate(const StartOrganizationServiceAccessUpdateRequestPrivate &other,
                                   StartOrganizationServiceAccessUpdateRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartOrganizationServiceAccessUpdateRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
