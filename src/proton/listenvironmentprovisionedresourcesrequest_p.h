// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENVIRONMENTPROVISIONEDRESOURCESREQUEST_P_H
#define QTAWS_LISTENVIRONMENTPROVISIONEDRESOURCESREQUEST_P_H

#include "protonrequest_p.h"
#include "listenvironmentprovisionedresourcesrequest.h"

namespace QtAws {
namespace Proton {

class ListEnvironmentProvisionedResourcesRequest;

class ListEnvironmentProvisionedResourcesRequestPrivate : public ProtonRequestPrivate {

public:
    ListEnvironmentProvisionedResourcesRequestPrivate(const ProtonRequest::Action action,
                                   ListEnvironmentProvisionedResourcesRequest * const q);
    ListEnvironmentProvisionedResourcesRequestPrivate(const ListEnvironmentProvisionedResourcesRequestPrivate &other,
                                   ListEnvironmentProvisionedResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEnvironmentProvisionedResourcesRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
