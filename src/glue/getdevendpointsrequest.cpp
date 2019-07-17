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

#include "getdevendpointsrequest.h"
#include "getdevendpointsrequest_p.h"
#include "getdevendpointsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetDevEndpointsRequest
 * \brief The GetDevEndpointsRequest class provides an interface for Glue GetDevEndpoints requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getDevEndpoints
 */

/*!
 * Constructs a copy of \a other.
 */
GetDevEndpointsRequest::GetDevEndpointsRequest(const GetDevEndpointsRequest &other)
    : GlueRequest(new GetDevEndpointsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDevEndpointsRequest object.
 */
GetDevEndpointsRequest::GetDevEndpointsRequest()
    : GlueRequest(new GetDevEndpointsRequestPrivate(GlueRequest::GetDevEndpointsAction, this))
{

}

/*!
 * \reimp
 */
bool GetDevEndpointsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDevEndpointsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDevEndpointsRequest::response(QNetworkReply * const reply) const
{
    return new GetDevEndpointsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetDevEndpointsRequestPrivate
 * \brief The GetDevEndpointsRequestPrivate class provides private implementation for GetDevEndpointsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetDevEndpointsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetDevEndpointsRequestPrivate::GetDevEndpointsRequestPrivate(
    const GlueRequest::Action action, GetDevEndpointsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDevEndpointsRequest
 * class' copy constructor.
 */
GetDevEndpointsRequestPrivate::GetDevEndpointsRequestPrivate(
    const GetDevEndpointsRequestPrivate &other, GetDevEndpointsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
