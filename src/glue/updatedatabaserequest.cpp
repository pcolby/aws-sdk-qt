/*
    Copyright 2013-2018 Paul Colby

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

#include "updatedatabaserequest.h"
#include "updatedatabaserequest_p.h"
#include "updatedatabaseresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateDatabaseRequest
 * \brief The UpdateDatabaseRequest class provides an interface for Glue UpdateDatabase requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::updateDatabase
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDatabaseRequest::UpdateDatabaseRequest(const UpdateDatabaseRequest &other)
    : GlueRequest(new UpdateDatabaseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDatabaseRequest object.
 */
UpdateDatabaseRequest::UpdateDatabaseRequest()
    : GlueRequest(new UpdateDatabaseRequestPrivate(GlueRequest::UpdateDatabaseAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDatabaseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDatabaseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDatabaseRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDatabaseResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::UpdateDatabaseRequestPrivate
 * \brief The UpdateDatabaseRequestPrivate class provides private implementation for UpdateDatabaseRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateDatabaseRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
UpdateDatabaseRequestPrivate::UpdateDatabaseRequestPrivate(
    const GlueRequest::Action action, UpdateDatabaseRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDatabaseRequest
 * class' copy constructor.
 */
UpdateDatabaseRequestPrivate::UpdateDatabaseRequestPrivate(
    const UpdateDatabaseRequestPrivate &other, UpdateDatabaseRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
