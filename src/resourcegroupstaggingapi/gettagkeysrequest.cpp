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

#include "gettagkeysrequest.h"
#include "gettagkeysrequest_p.h"
#include "gettagkeysresponse.h"
#include "resourcegroupstaggingapirequest_p.h"

namespace QtAws {
namespace ResourceGroupsTaggingAPI {

/*!
 * \class QtAws::ResourceGroupsTaggingAPI::GetTagKeysRequest
 * \brief The GetTagKeysRequest class provides an interface for ResourceGroupsTaggingAPI GetTagKeys requests.
 *
 * \inmodule QtAwsResourceGroupsTaggingAPI
 *
 *
 * \sa ResourceGroupsTaggingAPIClient::getTagKeys
 */

/*!
 * Constructs a copy of \a other.
 */
GetTagKeysRequest::GetTagKeysRequest(const GetTagKeysRequest &other)
    : ResourceGroupsTaggingAPIRequest(new GetTagKeysRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTagKeysRequest object.
 */
GetTagKeysRequest::GetTagKeysRequest()
    : ResourceGroupsTaggingAPIRequest(new GetTagKeysRequestPrivate(ResourceGroupsTaggingAPIRequest::GetTagKeysAction, this))
{

}

/*!
 * \reimp
 */
bool GetTagKeysRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTagKeysResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTagKeysRequest::response(QNetworkReply * const reply) const
{
    return new GetTagKeysResponse(*this, reply);
}

/*!
 * \class QtAws::ResourceGroupsTaggingAPI::GetTagKeysRequestPrivate
 * \brief The GetTagKeysRequestPrivate class provides private implementation for GetTagKeysRequest.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTaggingAPI
 */

/*!
 * Constructs a GetTagKeysRequestPrivate object for ResourceGroupsTaggingAPI \a action,
 * with public implementation \a q.
 */
GetTagKeysRequestPrivate::GetTagKeysRequestPrivate(
    const ResourceGroupsTaggingAPIRequest::Action action, GetTagKeysRequest * const q)
    : ResourceGroupsTaggingAPIRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTagKeysRequest
 * class' copy constructor.
 */
GetTagKeysRequestPrivate::GetTagKeysRequestPrivate(
    const GetTagKeysRequestPrivate &other, GetTagKeysRequest * const q)
    : ResourceGroupsTaggingAPIRequestPrivate(other, q)
{

}

} // namespace ResourceGroupsTaggingAPI
} // namespace QtAws
