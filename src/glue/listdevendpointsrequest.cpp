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

#include "listdevendpointsrequest.h"
#include "listdevendpointsrequest_p.h"
#include "listdevendpointsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListDevEndpointsRequest
 * \brief The ListDevEndpointsRequest class provides an interface for Glue ListDevEndpoints requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::listDevEndpoints
 */

/*!
 * Constructs a copy of \a other.
 */
ListDevEndpointsRequest::ListDevEndpointsRequest(const ListDevEndpointsRequest &other)
    : GlueRequest(new ListDevEndpointsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDevEndpointsRequest object.
 */
ListDevEndpointsRequest::ListDevEndpointsRequest()
    : GlueRequest(new ListDevEndpointsRequestPrivate(GlueRequest::ListDevEndpointsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDevEndpointsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDevEndpointsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDevEndpointsRequest::response(QNetworkReply * const reply) const
{
    return new ListDevEndpointsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::ListDevEndpointsRequestPrivate
 * \brief The ListDevEndpointsRequestPrivate class provides private implementation for ListDevEndpointsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListDevEndpointsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
ListDevEndpointsRequestPrivate::ListDevEndpointsRequestPrivate(
    const GlueRequest::Action action, ListDevEndpointsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDevEndpointsRequest
 * class' copy constructor.
 */
ListDevEndpointsRequestPrivate::ListDevEndpointsRequestPrivate(
    const ListDevEndpointsRequestPrivate &other, ListDevEndpointsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
