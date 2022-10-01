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

#include "getresourcepoliciesrequest.h"
#include "getresourcepoliciesrequest_p.h"
#include "getresourcepoliciesresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetResourcePoliciesRequest
 * \brief The GetResourcePoliciesRequest class provides an interface for Glue GetResourcePolicies requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getResourcePolicies
 */

/*!
 * Constructs a copy of \a other.
 */
GetResourcePoliciesRequest::GetResourcePoliciesRequest(const GetResourcePoliciesRequest &other)
    : GlueRequest(new GetResourcePoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetResourcePoliciesRequest object.
 */
GetResourcePoliciesRequest::GetResourcePoliciesRequest()
    : GlueRequest(new GetResourcePoliciesRequestPrivate(GlueRequest::GetResourcePoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool GetResourcePoliciesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetResourcePoliciesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResourcePoliciesRequest::response(QNetworkReply * const reply) const
{
    return new GetResourcePoliciesResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetResourcePoliciesRequestPrivate
 * \brief The GetResourcePoliciesRequestPrivate class provides private implementation for GetResourcePoliciesRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetResourcePoliciesRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetResourcePoliciesRequestPrivate::GetResourcePoliciesRequestPrivate(
    const GlueRequest::Action action, GetResourcePoliciesRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetResourcePoliciesRequest
 * class' copy constructor.
 */
GetResourcePoliciesRequestPrivate::GetResourcePoliciesRequestPrivate(
    const GetResourcePoliciesRequestPrivate &other, GetResourcePoliciesRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
