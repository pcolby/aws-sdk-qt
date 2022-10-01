// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
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
 * Constructs a DeleteVPCAssociationAuthorizationRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
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
