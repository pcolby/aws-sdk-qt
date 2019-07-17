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

#include "getdatabaserequest.h"
#include "getdatabaserequest_p.h"
#include "getdatabaseresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetDatabaseRequest
 * \brief The GetDatabaseRequest class provides an interface for Glue GetDatabase requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getDatabase
 */

/*!
 * Constructs a copy of \a other.
 */
GetDatabaseRequest::GetDatabaseRequest(const GetDatabaseRequest &other)
    : GlueRequest(new GetDatabaseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDatabaseRequest object.
 */
GetDatabaseRequest::GetDatabaseRequest()
    : GlueRequest(new GetDatabaseRequestPrivate(GlueRequest::GetDatabaseAction, this))
{

}

/*!
 * \reimp
 */
bool GetDatabaseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDatabaseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDatabaseRequest::response(QNetworkReply * const reply) const
{
    return new GetDatabaseResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetDatabaseRequestPrivate
 * \brief The GetDatabaseRequestPrivate class provides private implementation for GetDatabaseRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetDatabaseRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetDatabaseRequestPrivate::GetDatabaseRequestPrivate(
    const GlueRequest::Action action, GetDatabaseRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDatabaseRequest
 * class' copy constructor.
 */
GetDatabaseRequestPrivate::GetDatabaseRequestPrivate(
    const GetDatabaseRequestPrivate &other, GetDatabaseRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
