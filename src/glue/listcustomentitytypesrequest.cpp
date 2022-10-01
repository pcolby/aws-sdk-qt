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

#include "listcustomentitytypesrequest.h"
#include "listcustomentitytypesrequest_p.h"
#include "listcustomentitytypesresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListCustomEntityTypesRequest
 * \brief The ListCustomEntityTypesRequest class provides an interface for Glue ListCustomEntityTypes requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::listCustomEntityTypes
 */

/*!
 * Constructs a copy of \a other.
 */
ListCustomEntityTypesRequest::ListCustomEntityTypesRequest(const ListCustomEntityTypesRequest &other)
    : GlueRequest(new ListCustomEntityTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCustomEntityTypesRequest object.
 */
ListCustomEntityTypesRequest::ListCustomEntityTypesRequest()
    : GlueRequest(new ListCustomEntityTypesRequestPrivate(GlueRequest::ListCustomEntityTypesAction, this))
{

}

/*!
 * \reimp
 */
bool ListCustomEntityTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCustomEntityTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCustomEntityTypesRequest::response(QNetworkReply * const reply) const
{
    return new ListCustomEntityTypesResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::ListCustomEntityTypesRequestPrivate
 * \brief The ListCustomEntityTypesRequestPrivate class provides private implementation for ListCustomEntityTypesRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListCustomEntityTypesRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
ListCustomEntityTypesRequestPrivate::ListCustomEntityTypesRequestPrivate(
    const GlueRequest::Action action, ListCustomEntityTypesRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCustomEntityTypesRequest
 * class' copy constructor.
 */
ListCustomEntityTypesRequestPrivate::ListCustomEntityTypesRequestPrivate(
    const ListCustomEntityTypesRequestPrivate &other, ListCustomEntityTypesRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
