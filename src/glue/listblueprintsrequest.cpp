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

#include "listblueprintsrequest.h"
#include "listblueprintsrequest_p.h"
#include "listblueprintsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListBlueprintsRequest
 * \brief The ListBlueprintsRequest class provides an interface for Glue ListBlueprints requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::listBlueprints
 */

/*!
 * Constructs a copy of \a other.
 */
ListBlueprintsRequest::ListBlueprintsRequest(const ListBlueprintsRequest &other)
    : GlueRequest(new ListBlueprintsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBlueprintsRequest object.
 */
ListBlueprintsRequest::ListBlueprintsRequest()
    : GlueRequest(new ListBlueprintsRequestPrivate(GlueRequest::ListBlueprintsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBlueprintsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBlueprintsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBlueprintsRequest::response(QNetworkReply * const reply) const
{
    return new ListBlueprintsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::ListBlueprintsRequestPrivate
 * \brief The ListBlueprintsRequestPrivate class provides private implementation for ListBlueprintsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListBlueprintsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
ListBlueprintsRequestPrivate::ListBlueprintsRequestPrivate(
    const GlueRequest::Action action, ListBlueprintsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBlueprintsRequest
 * class' copy constructor.
 */
ListBlueprintsRequestPrivate::ListBlueprintsRequestPrivate(
    const ListBlueprintsRequestPrivate &other, ListBlueprintsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
