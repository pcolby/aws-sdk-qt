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

#include "deleteregistryrequest.h"
#include "deleteregistryrequest_p.h"
#include "deleteregistryresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteRegistryRequest
 * \brief The DeleteRegistryRequest class provides an interface for Glue DeleteRegistry requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteRegistry
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRegistryRequest::DeleteRegistryRequest(const DeleteRegistryRequest &other)
    : GlueRequest(new DeleteRegistryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRegistryRequest object.
 */
DeleteRegistryRequest::DeleteRegistryRequest()
    : GlueRequest(new DeleteRegistryRequestPrivate(GlueRequest::DeleteRegistryAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRegistryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRegistryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRegistryRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRegistryResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::DeleteRegistryRequestPrivate
 * \brief The DeleteRegistryRequestPrivate class provides private implementation for DeleteRegistryRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteRegistryRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
DeleteRegistryRequestPrivate::DeleteRegistryRequestPrivate(
    const GlueRequest::Action action, DeleteRegistryRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRegistryRequest
 * class' copy constructor.
 */
DeleteRegistryRequestPrivate::DeleteRegistryRequestPrivate(
    const DeleteRegistryRequestPrivate &other, DeleteRegistryRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
