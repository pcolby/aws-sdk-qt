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

#include "deleteschemarequest.h"
#include "deleteschemarequest_p.h"
#include "deleteschemaresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteSchemaRequest
 * \brief The DeleteSchemaRequest class provides an interface for Glue DeleteSchema requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteSchema
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSchemaRequest::DeleteSchemaRequest(const DeleteSchemaRequest &other)
    : GlueRequest(new DeleteSchemaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSchemaRequest object.
 */
DeleteSchemaRequest::DeleteSchemaRequest()
    : GlueRequest(new DeleteSchemaRequestPrivate(GlueRequest::DeleteSchemaAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSchemaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSchemaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSchemaRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSchemaResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::DeleteSchemaRequestPrivate
 * \brief The DeleteSchemaRequestPrivate class provides private implementation for DeleteSchemaRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteSchemaRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
DeleteSchemaRequestPrivate::DeleteSchemaRequestPrivate(
    const GlueRequest::Action action, DeleteSchemaRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSchemaRequest
 * class' copy constructor.
 */
DeleteSchemaRequestPrivate::DeleteSchemaRequestPrivate(
    const DeleteSchemaRequestPrivate &other, DeleteSchemaRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
