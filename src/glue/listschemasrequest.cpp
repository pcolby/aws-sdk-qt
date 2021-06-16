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

#include "listschemasrequest.h"
#include "listschemasrequest_p.h"
#include "listschemasresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListSchemasRequest
 * \brief The ListSchemasRequest class provides an interface for Glue ListSchemas requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::listSchemas
 */

/*!
 * Constructs a copy of \a other.
 */
ListSchemasRequest::ListSchemasRequest(const ListSchemasRequest &other)
    : GlueRequest(new ListSchemasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSchemasRequest object.
 */
ListSchemasRequest::ListSchemasRequest()
    : GlueRequest(new ListSchemasRequestPrivate(GlueRequest::ListSchemasAction, this))
{

}

/*!
 * \reimp
 */
bool ListSchemasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSchemasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSchemasRequest::response(QNetworkReply * const reply) const
{
    return new ListSchemasResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::ListSchemasRequestPrivate
 * \brief The ListSchemasRequestPrivate class provides private implementation for ListSchemasRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListSchemasRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
ListSchemasRequestPrivate::ListSchemasRequestPrivate(
    const GlueRequest::Action action, ListSchemasRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSchemasRequest
 * class' copy constructor.
 */
ListSchemasRequestPrivate::ListSchemasRequestPrivate(
    const ListSchemasRequestPrivate &other, ListSchemasRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
