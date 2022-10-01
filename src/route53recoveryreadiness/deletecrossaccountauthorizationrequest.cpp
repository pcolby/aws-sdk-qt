// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecrossaccountauthorizationrequest.h"
#include "deletecrossaccountauthorizationrequest_p.h"
#include "deletecrossaccountauthorizationresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::DeleteCrossAccountAuthorizationRequest
 * \brief The DeleteCrossAccountAuthorizationRequest class provides an interface for Route53RecoveryReadiness DeleteCrossAccountAuthorization requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::deleteCrossAccountAuthorization
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCrossAccountAuthorizationRequest::DeleteCrossAccountAuthorizationRequest(const DeleteCrossAccountAuthorizationRequest &other)
    : Route53RecoveryReadinessRequest(new DeleteCrossAccountAuthorizationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCrossAccountAuthorizationRequest object.
 */
DeleteCrossAccountAuthorizationRequest::DeleteCrossAccountAuthorizationRequest()
    : Route53RecoveryReadinessRequest(new DeleteCrossAccountAuthorizationRequestPrivate(Route53RecoveryReadinessRequest::DeleteCrossAccountAuthorizationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCrossAccountAuthorizationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCrossAccountAuthorizationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCrossAccountAuthorizationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCrossAccountAuthorizationResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::DeleteCrossAccountAuthorizationRequestPrivate
 * \brief The DeleteCrossAccountAuthorizationRequestPrivate class provides private implementation for DeleteCrossAccountAuthorizationRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a DeleteCrossAccountAuthorizationRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
DeleteCrossAccountAuthorizationRequestPrivate::DeleteCrossAccountAuthorizationRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, DeleteCrossAccountAuthorizationRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCrossAccountAuthorizationRequest
 * class' copy constructor.
 */
DeleteCrossAccountAuthorizationRequestPrivate::DeleteCrossAccountAuthorizationRequestPrivate(
    const DeleteCrossAccountAuthorizationRequestPrivate &other, DeleteCrossAccountAuthorizationRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
