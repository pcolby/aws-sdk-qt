// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPONENTPROVISIONEDRESOURCESREQUEST_P_H
#define QTAWS_LISTCOMPONENTPROVISIONEDRESOURCESREQUEST_P_H

#include "protonrequest_p.h"
#include "listcomponentprovisionedresourcesrequest.h"

namespace QtAws {
namespace Proton {

class ListComponentProvisionedResourcesRequest;

class ListComponentProvisionedResourcesRequestPrivate : public ProtonRequestPrivate {

public:
    ListComponentProvisionedResourcesRequestPrivate(const ProtonRequest::Action action,
                                   ListComponentProvisionedResourcesRequest * const q);
    ListComponentProvisionedResourcesRequestPrivate(const ListComponentProvisionedResourcesRequestPrivate &other,
                                   ListComponentProvisionedResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListComponentProvisionedResourcesRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
