// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEPIPELINEPROVISIONEDRESOURCESREQUEST_P_H
#define QTAWS_LISTSERVICEPIPELINEPROVISIONEDRESOURCESREQUEST_P_H

#include "protonrequest_p.h"
#include "listservicepipelineprovisionedresourcesrequest.h"

namespace QtAws {
namespace Proton {

class ListServicePipelineProvisionedResourcesRequest;

class ListServicePipelineProvisionedResourcesRequestPrivate : public ProtonRequestPrivate {

public:
    ListServicePipelineProvisionedResourcesRequestPrivate(const ProtonRequest::Action action,
                                   ListServicePipelineProvisionedResourcesRequest * const q);
    ListServicePipelineProvisionedResourcesRequestPrivate(const ListServicePipelineProvisionedResourcesRequestPrivate &other,
                                   ListServicePipelineProvisionedResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListServicePipelineProvisionedResourcesRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
