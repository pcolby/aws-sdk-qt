// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcrossaccountauthorizationrequest.h"
#include "createcrossaccountauthorizationrequest_p.h"
#include "createcrossaccountauthorizationresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::CreateCrossAccountAuthorizationRequest
 * \brief The CreateCrossAccountAuthorizationRequest class provides an interface for Route53RecoveryReadiness CreateCrossAccountAuthorization requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::createCrossAccountAuthorization
 */

/*!
 * Constructs a copy of \a other.
 */
CreateCrossAccountAuthorizationRequest::CreateCrossAccountAuthorizationRequest(const CreateCrossAccountAuthorizationRequest &other)
    : Route53RecoveryReadinessRequest(new CreateCrossAccountAuthorizationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateCrossAccountAuthorizationRequest object.
 */
CreateCrossAccountAuthorizationRequest::CreateCrossAccountAuthorizationRequest()
    : Route53RecoveryReadinessRequest(new CreateCrossAccountAuthorizationRequestPrivate(Route53RecoveryReadinessRequest::CreateCrossAccountAuthorizationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateCrossAccountAuthorizationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateCrossAccountAuthorizationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCrossAccountAuthorizationRequest::response(QNetworkReply * const reply) const
{
    return new CreateCrossAccountAuthorizationResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::CreateCrossAccountAuthorizationRequestPrivate
 * \brief The CreateCrossAccountAuthorizationRequestPrivate class provides private implementation for CreateCrossAccountAuthorizationRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a CreateCrossAccountAuthorizationRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
CreateCrossAccountAuthorizationRequestPrivate::CreateCrossAccountAuthorizationRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, CreateCrossAccountAuthorizationRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateCrossAccountAuthorizationRequest
 * class' copy constructor.
 */
CreateCrossAccountAuthorizationRequestPrivate::CreateCrossAccountAuthorizationRequestPrivate(
    const CreateCrossAccountAuthorizationRequestPrivate &other, CreateCrossAccountAuthorizationRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
