// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCESREQUEST_P_H
#define QTAWS_GETRESOURCESREQUEST_P_H

#include "resourcegroupstaggingrequest_p.h"
#include "getresourcesrequest.h"

namespace QtAws {
namespace ResourceGroupsTagging {

class GetResourcesRequest;

class GetResourcesRequestPrivate : public ResourceGroupsTaggingRequestPrivate {

public:
    GetResourcesRequestPrivate(const ResourceGroupsTaggingRequest::Action action,
                                   GetResourcesRequest * const q);
    GetResourcesRequestPrivate(const GetResourcesRequestPrivate &other,
                                   GetResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResourcesRequest)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif
