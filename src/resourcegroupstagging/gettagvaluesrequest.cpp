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
