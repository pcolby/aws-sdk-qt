/*
    Copyright 2013-2020 Paul Colby

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

#include "creategrouprequest.h"
#include "creategrouprequest_p.h"
#include "creategroupresponse.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::CreateGroupRequest
 * \brief The CreateGroupRequest class provides an interface for XRay CreateGroup requests.
 *
 * \inmodule QtAwsXRay
 *
 *  AWS X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by processing those
 *
 * \sa XRayClient::createGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateGroupRequest::CreateGroupRequest(const CreateGroupRequest &other)
    : XRayRequest(new CreateGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateGroupRequest object.
 */
CreateGroupRequest::CreateGroupRequest()
    : XRayRequest(new CreateGroupRequestPrivate(XRayRequest::CreateGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateGroupResponse(*this, reply);
}

/*!
 * \class QtAws::XRay::CreateGroupRequestPrivate
 * \brief The CreateGroupRequestPrivate class provides private implementation for CreateGroupRequest.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a CreateGroupRequestPrivate object for XRay \a action,
 * with public implementation \a q.
 */
CreateGroupRequestPrivate::CreateGroupRequestPrivate(
    const XRayRequest::Action action, CreateGroupRequest * const q)
    : XRayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateGroupRequest
 * class' copy constructor.
 */
CreateGroupRequestPrivate::CreateGroupRequestPrivate(
    const CreateGroupRequestPrivate &other, CreateGroupRequest * const q)
    : XRayRequestPrivate(other, q)
{

}

} // namespace XRay
} // namespace QtAws
