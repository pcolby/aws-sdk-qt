// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGRESOURCESREQUEST_P_H
#define QTAWS_TAGRESOURCESREQUEST_P_H

#include "resourcegroupstaggingrequest_p.h"
#include "tagresourcesrequest.h"

namespace QtAws {
namespace ResourceGroupsTagging {

class TagResourcesRequest;

class TagResourcesRequestPrivate : public ResourceGroupsTaggingRequestPrivate {

public:
    TagResourcesRequestPrivate(const ResourceGroupsTaggingRequest::Action action,
                                   TagResourcesRequest * const q);
    TagResourcesRequestPrivate(const TagResourcesRequestPrivate &other,
                                   TagResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(TagResourcesRequest)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif
