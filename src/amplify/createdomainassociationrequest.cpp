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

#include "createdomainassociationrequest.h"
#include "createdomainassociationrequest_p.h"
#include "createdomainassociationresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::CreateDomainAssociationRequest
 * \brief The CreateDomainAssociationRequest class provides an interface for Amplify CreateDomainAssociation requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify is a fully managed continuous deployment and hosting service for modern web apps.
 *
 * \sa AmplifyClient::createDomainAssociation
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDomainAssociationRequest::CreateDomainAssociationRequest(const CreateDomainAssociationRequest &other)
    : AmplifyRequest(new CreateDomainAssociationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDomainAssociationRequest object.
 */
CreateDomainAssociationRequest::CreateDomainAssociationRequest()
    : AmplifyRequest(new CreateDomainAssociationRequestPrivate(AmplifyRequest::CreateDomainAssociationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDomainAssociationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDomainAssociationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDomainAssociationRequest::response(QNetworkReply * const reply) const
{
    return new CreateDomainAssociationResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::CreateDomainAssociationRequestPrivate
 * \brief The CreateDomainAssociationRequestPrivate class provides private implementation for CreateDomainAssociationRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a CreateDomainAssociationRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
CreateDomainAssociationRequestPrivate::CreateDomainAssociationRequestPrivate(
    const AmplifyRequest::Action action, CreateDomainAssociationRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDomainAssociationRequest
 * class' copy constructor.
 */
CreateDomainAssociationRequestPrivate::CreateDomainAssociationRequestPrivate(
    const CreateDomainAssociationRequestPrivate &other, CreateDomainAssociationRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
