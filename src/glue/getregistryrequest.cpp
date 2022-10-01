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

#include "getregistryrequest.h"
#include "getregistryrequest_p.h"
#include "getregistryresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetRegistryRequest
 * \brief The GetRegistryRequest class provides an interface for Glue GetRegistry requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getRegistry
 */

/*!
 * Constructs a copy of \a other.
 */
GetRegistryRequest::GetRegistryRequest(const GetRegistryRequest &other)
    : GlueRequest(new GetRegistryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRegistryRequest object.
 */
GetRegistryRequest::GetRegistryRequest()
    : GlueRequest(new GetRegistryRequestPrivate(GlueRequest::GetRegistryAction, this))
{

}

/*!
 * \reimp
 */
bool GetRegistryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRegistryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRegistryRequest::response(QNetworkReply * const reply) const
{
    return new GetRegistryResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetRegistryRequestPrivate
 * \brief The GetRegistryRequestPrivate class provides private implementation for GetRegistryRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetRegistryRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetRegistryRequestPrivate::GetRegistryRequestPrivate(
    const GlueRequest::Action action, GetRegistryRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRegistryRequest
 * class' copy constructor.
 */
GetRegistryRequestPrivate::GetRegistryRequestPrivate(
    const GetRegistryRequestPrivate &other, GetRegistryRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
