// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEINSTANCEPROVISIONEDRESOURCESREQUEST_P_H
#define QTAWS_LISTSERVICEINSTANCEPROVISIONEDRESOURCESREQUEST_P_H

#include "protonrequest_p.h"
#include "listserviceinstanceprovisionedresourcesrequest.h"

namespace QtAws {
namespace Proton {

class ListServiceInstanceProvisionedResourcesRequest;

class ListServiceInstanceProvisionedResourcesRequestPrivate : public ProtonRequestPrivate {

public:
    ListServiceInstanceProvisionedResourcesRequestPrivate(const ProtonRequest::Action action,
                                   ListServiceInstanceProvisionedResourcesRequest * const q);
    ListServiceInstanceProvisionedResourcesRequestPrivate(const ListServiceInstanceProvisionedResourcesRequestPrivate &other,
                                   ListServiceInstanceProvisionedResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListServiceInstanceProvisionedResourcesRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
