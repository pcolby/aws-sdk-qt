/*
    Copyright 2013-2019 Paul Colby

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

#include "removeattributesrequest.h"
#include "removeattributesrequest_p.h"
#include "removeattributesresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::RemoveAttributesRequest
 * \brief The RemoveAttributesRequest class provides an interface for Pinpoint RemoveAttributes requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::removeAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveAttributesRequest::RemoveAttributesRequest(const RemoveAttributesRequest &other)
    : PinpointRequest(new RemoveAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveAttributesRequest object.
 */
RemoveAttributesRequest::RemoveAttributesRequest()
    : PinpointRequest(new RemoveAttributesRequestPrivate(PinpointRequest::RemoveAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RemoveAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveAttributesRequest::response(QNetworkReply * const reply) const
{
    return new RemoveAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::RemoveAttributesRequestPrivate
 * \brief The RemoveAttributesRequestPrivate class provides private implementation for RemoveAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a RemoveAttributesRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
RemoveAttributesRequestPrivate::RemoveAttributesRequestPrivate(
    const PinpointRequest::Action action, RemoveAttributesRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RemoveAttributesRequest
 * class' copy constructor.
 */
RemoveAttributesRequestPrivate::RemoveAttributesRequestPrivate(
    const RemoveAttributesRequestPrivate &other, RemoveAttributesRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
