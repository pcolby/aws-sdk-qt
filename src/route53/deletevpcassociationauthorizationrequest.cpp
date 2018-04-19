/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletevpcassociationauthorizationrequest.h"
#include "deletevpcassociationauthorizationrequest_p.h"
#include "deletevpcassociationauthorizationresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DeleteVPCAssociationAuthorizationRequest
 * \brief The DeleteVPCAssociationAuthorizationRequest class provides an interface for Route53 DeleteVPCAssociationAuthorization requests.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::deleteVPCAssociationAuthorization
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteVPCAssociationAuthorizationRequest::DeleteVPCAssociationAuthorizationRequest(const DeleteVPCAssociationAuthorizationRequest &other)
    : Route53Request(new DeleteVPCAssociationAuthorizationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteVPCAssociationAuthorizationRequest object.
 */
DeleteVPCAssociationAuthorizationRequest::DeleteVPCAssociationAuthorizationRequest()
    : Route53Request(new DeleteVPCAssociationAuthorizationRequestPrivate(Route53Request::DeleteVPCAssociationAuthorizationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteVPCAssociationAuthorizationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteVPCAssociationAuthorizationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteVPCAssociationAuthorizationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVPCAssociationAuthorizationResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::DeleteVPCAssociationAuthorizationRequestPrivate
 * \brief The DeleteVPCAssociationAuthorizationRequestPrivate class provides private implementation for DeleteVPCAssociationAuthorizationRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 *
 * Constructs a DeleteVPCAssociationAuthorizationRequestPrivate object for Route53 \a action with,
 * public implementation \a q.
 */
DeleteVPCAssociationAuthorizationRequestPrivate::DeleteVPCAssociationAuthorizationRequestPrivate(
    const Route53Request::Action action, DeleteVPCAssociationAuthorizationRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteVPCAssociationAuthorizationRequest
 * class' copy constructor.
 */
DeleteVPCAssociationAuthorizationRequestPrivate::DeleteVPCAssociationAuthorizationRequestPrivate(
    const DeleteVPCAssociationAuthorizationRequestPrivate &other, DeleteVPCAssociationAuthorizationRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
