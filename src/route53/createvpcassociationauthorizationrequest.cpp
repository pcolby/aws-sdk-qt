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

#include "createvpcassociationauthorizationrequest.h"
#include "createvpcassociationauthorizationrequest_p.h"
#include "createvpcassociationauthorizationresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::CreateVPCAssociationAuthorizationRequest
 * \brief The CreateVPCAssociationAuthorizationRequest class provides an interface for Route53 CreateVPCAssociationAuthorization requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::createVPCAssociationAuthorization
 */

/*!
 * Constructs a copy of \a other.
 */
CreateVPCAssociationAuthorizationRequest::CreateVPCAssociationAuthorizationRequest(const CreateVPCAssociationAuthorizationRequest &other)
    : Route53Request(new CreateVPCAssociationAuthorizationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateVPCAssociationAuthorizationRequest object.
 */
CreateVPCAssociationAuthorizationRequest::CreateVPCAssociationAuthorizationRequest()
    : Route53Request(new CreateVPCAssociationAuthorizationRequestPrivate(Route53Request::CreateVPCAssociationAuthorizationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateVPCAssociationAuthorizationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateVPCAssociationAuthorizationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateVPCAssociationAuthorizationRequest::response(QNetworkReply * const reply) const
{
    return new CreateVPCAssociationAuthorizationResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::CreateVPCAssociationAuthorizationRequestPrivate
 * \brief The CreateVPCAssociationAuthorizationRequestPrivate class provides private implementation for CreateVPCAssociationAuthorizationRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a CreateVPCAssociationAuthorizationRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
CreateVPCAssociationAuthorizationRequestPrivate::CreateVPCAssociationAuthorizationRequestPrivate(
    const Route53Request::Action action, CreateVPCAssociationAuthorizationRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateVPCAssociationAuthorizationRequest
 * class' copy constructor.
 */
CreateVPCAssociationAuthorizationRequestPrivate::CreateVPCAssociationAuthorizationRequestPrivate(
    const CreateVPCAssociationAuthorizationRequestPrivate &other, CreateVPCAssociationAuthorizationRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
