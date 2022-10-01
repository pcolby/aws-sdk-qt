// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettagvaluesrequest.h"
#include "gettagvaluesrequest_p.h"
#include "gettagvaluesresponse.h"
#include "resourcegroupstaggingrequest_p.h"

namespace QtAws {
namespace ResourceGroupsTagging {

/*!
 * \class QtAws::ResourceGroupsTagging::GetTagValuesRequest
 * \brief The GetTagValuesRequest class provides an interface for ResourceGroupsTagging GetTagValues requests.
 *
 * \inmodule QtAwsResourceGroupsTagging
 *
 *
 * \sa ResourceGroupsTaggingClient::getTagValues
 */

/*!
 * Constructs a copy of \a other.
 */
GetTagValuesRequest::GetTagValuesRequest(const GetTagValuesRequest &other)
    : ResourceGroupsTaggingRequest(new GetTagValuesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTagValuesRequest object.
 */
GetTagValuesRequest::GetTagValuesRequest()
    : ResourceGroupsTaggingRequest(new GetTagValuesRequestPrivate(ResourceGroupsTaggingRequest::GetTagValuesAction, this))
{

}

/*!
 * \reimp
 */
bool GetTagValuesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTagValuesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTagValuesRequest::response(QNetworkReply * const reply) const
{
    return new GetTagValuesResponse(*this, reply);
}

/*!
 * \class QtAws::ResourceGroupsTagging::GetTagValuesRequestPrivate
 * \brief The GetTagValuesRequestPrivate class provides private implementation for GetTagValuesRequest.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTagging
 */

/*!
 * Constructs a GetTagValuesRequestPrivate object for ResourceGroupsTagging \a action,
 * with public implementation \a q.
 */
GetTagValuesRequestPrivate::GetTagValuesRequestPrivate(
    const ResourceGroupsTaggingRequest::Action action, GetTagValuesRequest * const q)
    : ResourceGroupsTaggingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTagValuesRequest
 * class' copy constructor.
 */
GetTagValuesRequestPrivate::GetTagValuesRequestPrivate(
    const GetTagValuesRequestPrivate &other, GetTagValuesRequest * const q)
    : ResourceGroupsTaggingRequestPrivate(other, q)
{

}

} // namespace ResourceGroupsTagging
} // namespace QtAws
