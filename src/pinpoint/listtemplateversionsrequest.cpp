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

#include "listtemplateversionsrequest.h"
#include "listtemplateversionsrequest_p.h"
#include "listtemplateversionsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::ListTemplateVersionsRequest
 * \brief The ListTemplateVersionsRequest class provides an interface for Pinpoint ListTemplateVersions requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::listTemplateVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListTemplateVersionsRequest::ListTemplateVersionsRequest(const ListTemplateVersionsRequest &other)
    : PinpointRequest(new ListTemplateVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTemplateVersionsRequest object.
 */
ListTemplateVersionsRequest::ListTemplateVersionsRequest()
    : PinpointRequest(new ListTemplateVersionsRequestPrivate(PinpointRequest::ListTemplateVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTemplateVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTemplateVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTemplateVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListTemplateVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::ListTemplateVersionsRequestPrivate
 * \brief The ListTemplateVersionsRequestPrivate class provides private implementation for ListTemplateVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a ListTemplateVersionsRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
ListTemplateVersionsRequestPrivate::ListTemplateVersionsRequestPrivate(
    const PinpointRequest::Action action, ListTemplateVersionsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTemplateVersionsRequest
 * class' copy constructor.
 */
ListTemplateVersionsRequestPrivate::ListTemplateVersionsRequestPrivate(
    const ListTemplateVersionsRequestPrivate &other, ListTemplateVersionsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
