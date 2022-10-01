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

#include "getinappmessagesrequest.h"
#include "getinappmessagesrequest_p.h"
#include "getinappmessagesresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetInAppMessagesRequest
 * \brief The GetInAppMessagesRequest class provides an interface for Pinpoint GetInAppMessages requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getInAppMessages
 */

/*!
 * Constructs a copy of \a other.
 */
GetInAppMessagesRequest::GetInAppMessagesRequest(const GetInAppMessagesRequest &other)
    : PinpointRequest(new GetInAppMessagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetInAppMessagesRequest object.
 */
GetInAppMessagesRequest::GetInAppMessagesRequest()
    : PinpointRequest(new GetInAppMessagesRequestPrivate(PinpointRequest::GetInAppMessagesAction, this))
{

}

/*!
 * \reimp
 */
bool GetInAppMessagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetInAppMessagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetInAppMessagesRequest::response(QNetworkReply * const reply) const
{
    return new GetInAppMessagesResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetInAppMessagesRequestPrivate
 * \brief The GetInAppMessagesRequestPrivate class provides private implementation for GetInAppMessagesRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetInAppMessagesRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetInAppMessagesRequestPrivate::GetInAppMessagesRequestPrivate(
    const PinpointRequest::Action action, GetInAppMessagesRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetInAppMessagesRequest
 * class' copy constructor.
 */
GetInAppMessagesRequestPrivate::GetInAppMessagesRequestPrivate(
    const GetInAppMessagesRequestPrivate &other, GetInAppMessagesRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
