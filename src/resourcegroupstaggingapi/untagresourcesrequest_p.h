/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_UNTAGRESOURCESREQUEST_P_H
#define QTAWS_UNTAGRESOURCESREQUEST_P_H

#include "resourcegroupstaggingapi_p.h"
#include "untagresourcesrequest.h"

namespace QtAws {
namespace ResourceGroupsTaggingAPI {

class UntagResourcesRequest;

class QTAWS_EXPORT UntagResourcesRequestPrivate : public ResourceGroupsTaggingAPIPrivate {

public:
    UntagResourcesRequestPrivate(const ResourceGroupsTaggingAPI::Action action,
                                   UntagResourcesRequest * const q);
    UntagResourcesRequestPrivate(const UntagResourcesRequestPrivate &other,
                                   UntagResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(UntagResourcesRequest)

};

} // namespace ResourceGroupsTaggingAPI
} // namespace QtAws

#endif
