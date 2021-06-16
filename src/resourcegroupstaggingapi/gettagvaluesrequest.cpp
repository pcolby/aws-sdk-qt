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
#include "resourcegroupstaggingapirequest_p.h"

namespace QtAws {
namespace ResourceGroupsTaggingAPI {

/*!
 * \class QtAws::ResourceGroupsTaggingAPI::GetTagValuesRequest
 * \brief The GetTagValuesRequest class provides an interface for ResourceGroupsTaggingAPI GetTagValues requests.
 *
 * \inmodule QtAwsResourceGroupsTaggingAPI
 *
 *
 * \sa ResourceGroupsTaggingAPIClient::getTagValues
 */

/*!
 * Constructs a copy of \a other.
 */
GetTagValuesRequest::GetTagValuesRequest(const GetTagValuesRequest &other)
    : ResourceGroupsTaggingAPIRequest(new GetTagValuesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTagValuesRequest object.
 */
GetTagValuesRequest::GetTagValuesRequest()
    : ResourceGroupsTaggingAPIRequest(new GetTagValuesRequestPrivate(ResourceGroupsTaggingAPIRequest::GetTagValuesAction, this))
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
 * \class QtAws::ResourceGroupsTaggingAPI::GetTagValuesRequestPrivate
 * \brief The GetTagValuesRequestPrivate class provides private implementation for GetTagValuesRequest.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTaggingAPI
 */

/*!
 * Constructs a GetTagValuesRequestPrivate object for ResourceGroupsTaggingAPI \a action,
 * with public implementation \a q.
 */
GetTagValuesRequestPrivate::GetTagValuesRequestPrivate(
    const ResourceGroupsTaggingAPIRequest::Action action, GetTagValuesRequest * const q)
    : ResourceGroupsTaggingAPIRequestPrivate(action, q)
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
    : ResourceGroupsTaggingAPIRequestPrivate(other, q)
{

}

} // namespace ResourceGroupsTaggingAPI
} // namespace QtAws
