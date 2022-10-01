// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
