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

#include "getgroupsrequest.h"
#include "getgroupsrequest_p.h"
#include "getgroupsresponse.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetGroupsRequest
 * \brief The GetGroupsRequest class provides an interface for XRay GetGroups requests.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::getGroups
 */

/*!
 * Constructs a copy of \a other.
 */
GetGroupsRequest::GetGroupsRequest(const GetGroupsRequest &other)
    : XRayRequest(new GetGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGroupsRequest object.
 */
GetGroupsRequest::GetGroupsRequest()
    : XRayRequest(new GetGroupsRequestPrivate(XRayRequest::GetGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool GetGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGroupsRequest::response(QNetworkReply * const reply) const
{
    return new GetGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::XRay::GetGroupsRequestPrivate
 * \brief The GetGroupsRequestPrivate class provides private implementation for GetGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetGroupsRequestPrivate object for XRay \a action,
 * with public implementation \a q.
 */
GetGroupsRequestPrivate::GetGroupsRequestPrivate(
    const XRayRequest::Action action, GetGroupsRequest * const q)
    : XRayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGroupsRequest
 * class' copy constructor.
 */
GetGroupsRequestPrivate::GetGroupsRequestPrivate(
    const GetGroupsRequestPrivate &other, GetGroupsRequest * const q)
    : XRayRequestPrivate(other, q)
{

}

} // namespace XRay
} // namespace QtAws
