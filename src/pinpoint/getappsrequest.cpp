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

#include "getappsrequest.h"
#include "getappsrequest_p.h"
#include "getappsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetAppsRequest
 * \brief The GetAppsRequest class provides an interface for Pinpoint GetApps requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getApps
 */

/*!
 * Constructs a copy of \a other.
 */
GetAppsRequest::GetAppsRequest(const GetAppsRequest &other)
    : PinpointRequest(new GetAppsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAppsRequest object.
 */
GetAppsRequest::GetAppsRequest()
    : PinpointRequest(new GetAppsRequestPrivate(PinpointRequest::GetAppsAction, this))
{

}

/*!
 * \reimp
 */
bool GetAppsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAppsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAppsRequest::response(QNetworkReply * const reply) const
{
    return new GetAppsResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetAppsRequestPrivate
 * \brief The GetAppsRequestPrivate class provides private implementation for GetAppsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 *
 * Constructs a GetAppsRequestPrivate object for Pinpoint \a action with,
 * public implementation \a q.
 */
GetAppsRequestPrivate::GetAppsRequestPrivate(
    const PinpointRequest::Action action, GetAppsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAppsRequest
 * class' copy constructor.
 */
GetAppsRequestPrivate::GetAppsRequestPrivate(
    const GetAppsRequestPrivate &other, GetAppsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
