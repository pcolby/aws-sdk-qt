// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENUMBEROFDOMAINCONTROLLERSREQUEST_P_H
#define QTAWS_UPDATENUMBEROFDOMAINCONTROLLERSREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "updatenumberofdomaincontrollersrequest.h"

namespace QtAws {
namespace DirectoryService {

class UpdateNumberOfDomainControllersRequest;

class UpdateNumberOfDomainControllersRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    UpdateNumberOfDomainControllersRequestPrivate(const DirectoryServiceRequest::Action action,
                                   UpdateNumberOfDomainControllersRequest * const q);
    UpdateNumberOfDomainControllersRequestPrivate(const UpdateNumberOfDomainControllersRequestPrivate &other,
                                   UpdateNumberOfDomainControllersRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateNumberOfDomainControllersRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
