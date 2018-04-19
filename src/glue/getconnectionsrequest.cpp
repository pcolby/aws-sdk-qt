/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getconnectionsrequest.h"
#include "getconnectionsrequest_p.h"
#include "getconnectionsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetConnectionsRequest
 * \brief The GetConnectionsRequest class provides an interface for Glue GetConnections requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getConnections
 */

/*!
 * Constructs a copy of \a other.
 */
GetConnectionsRequest::GetConnectionsRequest(const GetConnectionsRequest &other)
    : GlueRequest(new GetConnectionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetConnectionsRequest object.
 */
GetConnectionsRequest::GetConnectionsRequest()
    : GlueRequest(new GetConnectionsRequestPrivate(GlueRequest::GetConnectionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetConnectionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetConnectionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetConnectionsRequest::response(QNetworkReply * const reply) const
{
    return new GetConnectionsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetConnectionsRequestPrivate
 * \brief The GetConnectionsRequestPrivate class provides private implementation for GetConnectionsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 *
 * Constructs a GetConnectionsRequestPrivate object for Glue \a action with,
 * public implementation \a q.
 */
GetConnectionsRequestPrivate::GetConnectionsRequestPrivate(
    const GlueRequest::Action action, GetConnectionsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetConnectionsRequest
 * class' copy constructor.
 */
GetConnectionsRequestPrivate::GetConnectionsRequestPrivate(
    const GetConnectionsRequestPrivate &other, GetConnectionsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
