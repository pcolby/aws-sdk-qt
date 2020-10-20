/*
    Copyright 2013-2020 Paul Colby

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

#include "getdomainassociationrequest.h"
#include "getdomainassociationrequest_p.h"
#include "getdomainassociationresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::GetDomainAssociationRequest
 * \brief The GetDomainAssociationRequest class provides an interface for Amplify GetDomainAssociation requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify is a fully managed continuous deployment and hosting service for modern web apps.
 *
 * \sa AmplifyClient::getDomainAssociation
 */

/*!
 * Constructs a copy of \a other.
 */
GetDomainAssociationRequest::GetDomainAssociationRequest(const GetDomainAssociationRequest &other)
    : AmplifyRequest(new GetDomainAssociationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDomainAssociationRequest object.
 */
GetDomainAssociationRequest::GetDomainAssociationRequest()
    : AmplifyRequest(new GetDomainAssociationRequestPrivate(AmplifyRequest::GetDomainAssociationAction, this))
{

}

/*!
 * \reimp
 */
bool GetDomainAssociationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDomainAssociationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDomainAssociationRequest::response(QNetworkReply * const reply) const
{
    return new GetDomainAssociationResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::GetDomainAssociationRequestPrivate
 * \brief The GetDomainAssociationRequestPrivate class provides private implementation for GetDomainAssociationRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a GetDomainAssociationRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
GetDomainAssociationRequestPrivate::GetDomainAssociationRequestPrivate(
    const AmplifyRequest::Action action, GetDomainAssociationRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDomainAssociationRequest
 * class' copy constructor.
 */
GetDomainAssociationRequestPrivate::GetDomainAssociationRequestPrivate(
    const GetDomainAssociationRequestPrivate &other, GetDomainAssociationRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
