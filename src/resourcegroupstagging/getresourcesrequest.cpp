// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresourcesrequest.h"
#include "getresourcesrequest_p.h"
#include "getresourcesresponse.h"
#include "resourcegroupstaggingrequest_p.h"

namespace QtAws {
namespace ResourceGroupsTagging {

/*!
 * \class QtAws::ResourceGroupsTagging::GetResourcesRequest
 * \brief The GetResourcesRequest class provides an interface for ResourceGroupsTagging GetResources requests.
 *
 * \inmodule QtAwsResourceGroupsTagging
 *
 *
 * \sa ResourceGroupsTaggingClient::getResources
 */

/*!
 * Constructs a copy of \a other.
 */
GetResourcesRequest::GetResourcesRequest(const GetResourcesRequest &other)
    : ResourceGroupsTaggingRequest(new GetResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetResourcesRequest object.
 */
GetResourcesRequest::GetResourcesRequest()
    : ResourceGroupsTaggingRequest(new GetResourcesRequestPrivate(ResourceGroupsTaggingRequest::GetResourcesAction, this))
{

}

/*!
 * \reimp
 */
bool GetResourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetResourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResourcesRequest::response(QNetworkReply * const reply) const
{
    return new GetResourcesResponse(*this, reply);
}

/*!
 * \class QtAws::ResourceGroupsTagging::GetResourcesRequestPrivate
 * \brief The GetResourcesRequestPrivate class provides private implementation for GetResourcesRequest.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTagging
 */

/*!
 * Constructs a GetResourcesRequestPrivate object for ResourceGroupsTagging \a action,
 * with public implementation \a q.
 */
GetResourcesRequestPrivate::GetResourcesRequestPrivate(
    const ResourceGroupsTaggingRequest::Action action, GetResourcesRequest * const q)
    : ResourceGroupsTaggingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetResourcesRequest
 * class' copy constructor.
 */
GetResourcesRequestPrivate::GetResourcesRequestPrivate(
    const GetResourcesRequestPrivate &other, GetResourcesRequest * const q)
    : ResourceGroupsTaggingRequestPrivate(other, q)
{

}

} // namespace ResourceGroupsTagging
} // namespace QtAws
