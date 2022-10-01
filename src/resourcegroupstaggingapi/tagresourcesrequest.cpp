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

#include "tagresourcesrequest.h"
#include "tagresourcesrequest_p.h"
#include "tagresourcesresponse.h"
#include "resourcegroupstaggingrequest_p.h"

namespace QtAws {
namespace ResourceGroupsTagging {

/*!
 * \class QtAws::ResourceGroupsTagging::TagResourcesRequest
 * \brief The TagResourcesRequest class provides an interface for ResourceGroupsTagging TagResources requests.
 *
 * \inmodule QtAwsResourceGroupsTagging
 *
 *
 * \sa ResourceGroupsTaggingClient::tagResources
 */

/*!
 * Constructs a copy of \a other.
 */
TagResourcesRequest::TagResourcesRequest(const TagResourcesRequest &other)
    : ResourceGroupsTaggingRequest(new TagResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TagResourcesRequest object.
 */
TagResourcesRequest::TagResourcesRequest()
    : ResourceGroupsTaggingRequest(new TagResourcesRequestPrivate(ResourceGroupsTaggingRequest::TagResourcesAction, this))
{

}

/*!
 * \reimp
 */
bool TagResourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TagResourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TagResourcesRequest::response(QNetworkReply * const reply) const
{
    return new TagResourcesResponse(*this, reply);
}

/*!
 * \class QtAws::ResourceGroupsTagging::TagResourcesRequestPrivate
 * \brief The TagResourcesRequestPrivate class provides private implementation for TagResourcesRequest.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTagging
 */

/*!
 * Constructs a TagResourcesRequestPrivate object for ResourceGroupsTagging \a action,
 * with public implementation \a q.
 */
TagResourcesRequestPrivate::TagResourcesRequestPrivate(
    const ResourceGroupsTaggingRequest::Action action, TagResourcesRequest * const q)
    : ResourceGroupsTaggingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TagResourcesRequest
 * class' copy constructor.
 */
TagResourcesRequestPrivate::TagResourcesRequestPrivate(
    const TagResourcesRequestPrivate &other, TagResourcesRequest * const q)
    : ResourceGroupsTaggingRequestPrivate(other, q)
{

}

} // namespace ResourceGroupsTagging
} // namespace QtAws
