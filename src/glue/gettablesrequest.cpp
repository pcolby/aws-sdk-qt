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

#include "gettablesrequest.h"
#include "gettablesrequest_p.h"
#include "gettablesresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetTablesRequest
 * \brief The GetTablesRequest class provides an interface for Glue GetTables requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getTables
 */

/*!
 * Constructs a copy of \a other.
 */
GetTablesRequest::GetTablesRequest(const GetTablesRequest &other)
    : GlueRequest(new GetTablesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTablesRequest object.
 */
GetTablesRequest::GetTablesRequest()
    : GlueRequest(new GetTablesRequestPrivate(GlueRequest::GetTablesAction, this))
{

}

/*!
 * \reimp
 */
bool GetTablesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTablesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTablesRequest::response(QNetworkReply * const reply) const
{
    return new GetTablesResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetTablesRequestPrivate
 * \brief The GetTablesRequestPrivate class provides private implementation for GetTablesRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetTablesRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetTablesRequestPrivate::GetTablesRequestPrivate(
    const GlueRequest::Action action, GetTablesRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTablesRequest
 * class' copy constructor.
 */
GetTablesRequestPrivate::GetTablesRequestPrivate(
    const GetTablesRequestPrivate &other, GetTablesRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
