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

#include "getmappingrequest.h"
#include "getmappingrequest_p.h"
#include "getmappingresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetMappingRequest
 * \brief The GetMappingRequest class provides an interface for Glue GetMapping requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getMapping
 */

/*!
 * Constructs a copy of \a other.
 */
GetMappingRequest::GetMappingRequest(const GetMappingRequest &other)
    : GlueRequest(new GetMappingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMappingRequest object.
 */
GetMappingRequest::GetMappingRequest()
    : GlueRequest(new GetMappingRequestPrivate(GlueRequest::GetMappingAction, this))
{

}

/*!
 * \reimp
 */
bool GetMappingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMappingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMappingRequest::response(QNetworkReply * const reply) const
{
    return new GetMappingResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetMappingRequestPrivate
 * \brief The GetMappingRequestPrivate class provides private implementation for GetMappingRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetMappingRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetMappingRequestPrivate::GetMappingRequestPrivate(
    const GlueRequest::Action action, GetMappingRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMappingRequest
 * class' copy constructor.
 */
GetMappingRequestPrivate::GetMappingRequestPrivate(
    const GetMappingRequestPrivate &other, GetMappingRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
