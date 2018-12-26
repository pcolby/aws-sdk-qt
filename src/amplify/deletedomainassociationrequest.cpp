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

#include "deletedomainassociationrequest.h"
#include "deletedomainassociationrequest_p.h"
#include "deletedomainassociationresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::DeleteDomainAssociationRequest
 * \brief The DeleteDomainAssociationRequest class provides an interface for Amplify DeleteDomainAssociation requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify is a fully managed continuous deployment and hosting service for modern web apps.
 *
 * \sa AmplifyClient::deleteDomainAssociation
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDomainAssociationRequest::DeleteDomainAssociationRequest(const DeleteDomainAssociationRequest &other)
    : AmplifyRequest(new DeleteDomainAssociationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDomainAssociationRequest object.
 */
DeleteDomainAssociationRequest::DeleteDomainAssociationRequest()
    : AmplifyRequest(new DeleteDomainAssociationRequestPrivate(AmplifyRequest::DeleteDomainAssociationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDomainAssociationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDomainAssociationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDomainAssociationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDomainAssociationResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::DeleteDomainAssociationRequestPrivate
 * \brief The DeleteDomainAssociationRequestPrivate class provides private implementation for DeleteDomainAssociationRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a DeleteDomainAssociationRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
DeleteDomainAssociationRequestPrivate::DeleteDomainAssociationRequestPrivate(
    const AmplifyRequest::Action action, DeleteDomainAssociationRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDomainAssociationRequest
 * class' copy constructor.
 */
DeleteDomainAssociationRequestPrivate::DeleteDomainAssociationRequestPrivate(
    const DeleteDomainAssociationRequestPrivate &other, DeleteDomainAssociationRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
