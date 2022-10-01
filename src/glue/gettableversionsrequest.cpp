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

#include "gettableversionsrequest.h"
#include "gettableversionsrequest_p.h"
#include "gettableversionsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetTableVersionsRequest
 * \brief The GetTableVersionsRequest class provides an interface for Glue GetTableVersions requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getTableVersions
 */

/*!
 * Constructs a copy of \a other.
 */
GetTableVersionsRequest::GetTableVersionsRequest(const GetTableVersionsRequest &other)
    : GlueRequest(new GetTableVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTableVersionsRequest object.
 */
GetTableVersionsRequest::GetTableVersionsRequest()
    : GlueRequest(new GetTableVersionsRequestPrivate(GlueRequest::GetTableVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetTableVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTableVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTableVersionsRequest::response(QNetworkReply * const reply) const
{
    return new GetTableVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetTableVersionsRequestPrivate
 * \brief The GetTableVersionsRequestPrivate class provides private implementation for GetTableVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetTableVersionsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetTableVersionsRequestPrivate::GetTableVersionsRequestPrivate(
    const GlueRequest::Action action, GetTableVersionsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTableVersionsRequest
 * class' copy constructor.
 */
GetTableVersionsRequestPrivate::GetTableVersionsRequestPrivate(
    const GetTableVersionsRequestPrivate &other, GetTableVersionsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
