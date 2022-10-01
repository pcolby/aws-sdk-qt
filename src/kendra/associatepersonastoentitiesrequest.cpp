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

#include "associatepersonastoentitiesrequest.h"
#include "associatepersonastoentitiesrequest_p.h"
#include "associatepersonastoentitiesresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::AssociatePersonasToEntitiesRequest
 * \brief The AssociatePersonasToEntitiesRequest class provides an interface for Kendra AssociatePersonasToEntities requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::associatePersonasToEntities
 */

/*!
 * Constructs a copy of \a other.
 */
AssociatePersonasToEntitiesRequest::AssociatePersonasToEntitiesRequest(const AssociatePersonasToEntitiesRequest &other)
    : KendraRequest(new AssociatePersonasToEntitiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociatePersonasToEntitiesRequest object.
 */
AssociatePersonasToEntitiesRequest::AssociatePersonasToEntitiesRequest()
    : KendraRequest(new AssociatePersonasToEntitiesRequestPrivate(KendraRequest::AssociatePersonasToEntitiesAction, this))
{

}

/*!
 * \reimp
 */
bool AssociatePersonasToEntitiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociatePersonasToEntitiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociatePersonasToEntitiesRequest::response(QNetworkReply * const reply) const
{
    return new AssociatePersonasToEntitiesResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::AssociatePersonasToEntitiesRequestPrivate
 * \brief The AssociatePersonasToEntitiesRequestPrivate class provides private implementation for AssociatePersonasToEntitiesRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a AssociatePersonasToEntitiesRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
AssociatePersonasToEntitiesRequestPrivate::AssociatePersonasToEntitiesRequestPrivate(
    const KendraRequest::Action action, AssociatePersonasToEntitiesRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociatePersonasToEntitiesRequest
 * class' copy constructor.
 */
AssociatePersonasToEntitiesRequestPrivate::AssociatePersonasToEntitiesRequestPrivate(
    const AssociatePersonasToEntitiesRequestPrivate &other, AssociatePersonasToEntitiesRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
