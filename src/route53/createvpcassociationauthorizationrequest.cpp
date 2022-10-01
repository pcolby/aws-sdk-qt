// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
