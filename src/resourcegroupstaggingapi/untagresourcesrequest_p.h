/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
