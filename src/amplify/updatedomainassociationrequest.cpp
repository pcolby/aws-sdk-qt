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

#include "updatedomainassociationrequest.h"
#include "updatedomainassociationrequest_p.h"
#include "updatedomainassociationresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::UpdateDomainAssociationRequest
 * \brief The UpdateDomainAssociationRequest class provides an interface for Amplify UpdateDomainAssociation requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify is a fully managed continuous deployment and hosting service for modern web apps.
 *
 * \sa AmplifyClient::updateDomainAssociation
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDomainAssociationRequest::UpdateDomainAssociationRequest(const UpdateDomainAssociationRequest &other)
    : AmplifyRequest(new UpdateDomainAssociationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDomainAssociationRequest object.
 */
UpdateDomainAssociationRequest::UpdateDomainAssociationRequest()
    : AmplifyRequest(new UpdateDomainAssociationRequestPrivate(AmplifyRequest::UpdateDomainAssociationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDomainAssociationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDomainAssociationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDomainAssociationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDomainAssociationResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::UpdateDomainAssociationRequestPrivate
 * \brief The UpdateDomainAssociationRequestPrivate class provides private implementation for UpdateDomainAssociationRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a UpdateDomainAssociationRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
UpdateDomainAssociationRequestPrivate::UpdateDomainAssociationRequestPrivate(
    const AmplifyRequest::Action action, UpdateDomainAssociationRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDomainAssociationRequest
 * class' copy constructor.
 */
UpdateDomainAssociationRequestPrivate::UpdateDomainAssociationRequestPrivate(
    const UpdateDomainAssociationRequestPrivate &other, UpdateDomainAssociationRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
