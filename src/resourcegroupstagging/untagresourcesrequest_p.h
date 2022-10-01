// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGRESOURCESREQUEST_P_H
#define QTAWS_UNTAGRESOURCESREQUEST_P_H

#include "resourcegroupstaggingrequest_p.h"
#include "untagresourcesrequest.h"

namespace QtAws {
namespace ResourceGroupsTagging {

class UntagResourcesRequest;

class UntagResourcesRequestPrivate : public ResourceGroupsTaggingRequestPrivate {

public:
    UntagResourcesRequestPrivate(const ResourceGroupsTaggingRequest::Action action,
                                   UntagResourcesRequest * const q);
    UntagResourcesRequestPrivate(const UntagResourcesRequestPrivate &other,
                                   UntagResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(UntagResourcesRequest)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif
