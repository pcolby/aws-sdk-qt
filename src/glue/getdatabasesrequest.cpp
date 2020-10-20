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

#include "getdatabasesrequest.h"
#include "getdatabasesrequest_p.h"
#include "getdatabasesresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetDatabasesRequest
 * \brief The GetDatabasesRequest class provides an interface for Glue GetDatabases requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getDatabases
 */

/*!
 * Constructs a copy of \a other.
 */
GetDatabasesRequest::GetDatabasesRequest(const GetDatabasesRequest &other)
    : GlueRequest(new GetDatabasesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDatabasesRequest object.
 */
GetDatabasesRequest::GetDatabasesRequest()
    : GlueRequest(new GetDatabasesRequestPrivate(GlueRequest::GetDatabasesAction, this))
{

}

/*!
 * \reimp
 */
bool GetDatabasesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDatabasesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDatabasesRequest::response(QNetworkReply * const reply) const
{
    return new GetDatabasesResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetDatabasesRequestPrivate
 * \brief The GetDatabasesRequestPrivate class provides private implementation for GetDatabasesRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetDatabasesRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetDatabasesRequestPrivate::GetDatabasesRequestPrivate(
    const GlueRequest::Action action, GetDatabasesRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDatabasesRequest
 * class' copy constructor.
 */
GetDatabasesRequestPrivate::GetDatabasesRequestPrivate(
    const GetDatabasesRequestPrivate &other, GetDatabasesRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
