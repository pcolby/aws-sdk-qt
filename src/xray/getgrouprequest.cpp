/*
    Copyright 2013-2018 Paul Colby

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

#include "getgrouprequest.h"
#include "getgrouprequest_p.h"
#include "getgroupresponse.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetGroupRequest
 * \brief The GetGroupRequest class provides an interface for XRay GetGroup requests.
 *
 * \inmodule QtAwsXRay
 *
 *  AWS X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by processing those
 *
 * \sa XRayClient::getGroup
 */

/*!
 * Constructs a copy of \a other.
 */
GetGroupRequest::GetGroupRequest(const GetGroupRequest &other)
    : XRayRequest(new GetGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGroupRequest object.
 */
GetGroupRequest::GetGroupRequest()
    : XRayRequest(new GetGroupRequestPrivate(XRayRequest::GetGroupAction, this))
{

}

/*!
 * \reimp
 */
bool GetGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGroupRequest::response(QNetworkReply * const reply) const
{
    return new GetGroupResponse(*this, reply);
}

/*!
 * \class QtAws::XRay::GetGroupRequestPrivate
 * \brief The GetGroupRequestPrivate class provides private implementation for GetGroupRequest.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetGroupRequestPrivate object for XRay \a action,
 * with public implementation \a q.
 */
GetGroupRequestPrivate::GetGroupRequestPrivate(
    const XRayRequest::Action action, GetGroupRequest * const q)
    : XRayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGroupRequest
 * class' copy constructor.
 */
GetGroupRequestPrivate::GetGroupRequestPrivate(
    const GetGroupRequestPrivate &other, GetGroupRequest * const q)
    : XRayRequestPrivate(other, q)
{

}

} // namespace XRay
} // namespace QtAws
