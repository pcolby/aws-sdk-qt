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

#include "deletedatabaserequest.h"
#include "deletedatabaserequest_p.h"
#include "deletedatabaseresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteDatabaseRequest
 * \brief The DeleteDatabaseRequest class provides an interface for Glue DeleteDatabase requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::deleteDatabase
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDatabaseRequest::DeleteDatabaseRequest(const DeleteDatabaseRequest &other)
    : GlueRequest(new DeleteDatabaseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDatabaseRequest object.
 */
DeleteDatabaseRequest::DeleteDatabaseRequest()
    : GlueRequest(new DeleteDatabaseRequestPrivate(GlueRequest::DeleteDatabaseAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDatabaseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDatabaseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDatabaseRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDatabaseResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::DeleteDatabaseRequestPrivate
 * \brief The DeleteDatabaseRequestPrivate class provides private implementation for DeleteDatabaseRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteDatabaseRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
DeleteDatabaseRequestPrivate::DeleteDatabaseRequestPrivate(
    const GlueRequest::Action action, DeleteDatabaseRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDatabaseRequest
 * class' copy constructor.
 */
DeleteDatabaseRequestPrivate::DeleteDatabaseRequestPrivate(
    const DeleteDatabaseRequestPrivate &other, DeleteDatabaseRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
