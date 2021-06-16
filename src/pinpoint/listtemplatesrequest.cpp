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

#include "listtemplatesrequest.h"
#include "listtemplatesrequest_p.h"
#include "listtemplatesresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::ListTemplatesRequest
 * \brief The ListTemplatesRequest class provides an interface for Pinpoint ListTemplates requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::listTemplates
 */

/*!
 * Constructs a copy of \a other.
 */
ListTemplatesRequest::ListTemplatesRequest(const ListTemplatesRequest &other)
    : PinpointRequest(new ListTemplatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTemplatesRequest object.
 */
ListTemplatesRequest::ListTemplatesRequest()
    : PinpointRequest(new ListTemplatesRequestPrivate(PinpointRequest::ListTemplatesAction, this))
{

}

/*!
 * \reimp
 */
bool ListTemplatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTemplatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTemplatesRequest::response(QNetworkReply * const reply) const
{
    return new ListTemplatesResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::ListTemplatesRequestPrivate
 * \brief The ListTemplatesRequestPrivate class provides private implementation for ListTemplatesRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a ListTemplatesRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
ListTemplatesRequestPrivate::ListTemplatesRequestPrivate(
    const PinpointRequest::Action action, ListTemplatesRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTemplatesRequest
 * class' copy constructor.
 */
ListTemplatesRequestPrivate::ListTemplatesRequestPrivate(
    const ListTemplatesRequestPrivate &other, ListTemplatesRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
