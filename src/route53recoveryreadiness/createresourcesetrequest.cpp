// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createresourcesetrequest.h"
#include "createresourcesetrequest_p.h"
#include "createresourcesetresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::CreateResourceSetRequest
 * \brief The CreateResourceSetRequest class provides an interface for Route53RecoveryReadiness CreateResourceSet requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::createResourceSet
 */

/*!
 * Constructs a copy of \a other.
 */
CreateResourceSetRequest::CreateResourceSetRequest(const CreateResourceSetRequest &other)
    : Route53RecoveryReadinessRequest(new CreateResourceSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateResourceSetRequest object.
 */
CreateResourceSetRequest::CreateResourceSetRequest()
    : Route53RecoveryReadinessRequest(new CreateResourceSetRequestPrivate(Route53RecoveryReadinessRequest::CreateResourceSetAction, this))
{

}

/*!
 * \reimp
 */
bool CreateResourceSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateResourceSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateResourceSetRequest::response(QNetworkReply * const reply) const
{
    return new CreateResourceSetResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::CreateResourceSetRequestPrivate
 * \brief The CreateResourceSetRequestPrivate class provides private implementation for CreateResourceSetRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a CreateResourceSetRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
CreateResourceSetRequestPrivate::CreateResourceSetRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, CreateResourceSetRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateResourceSetRequest
 * class' copy constructor.
 */
CreateResourceSetRequestPrivate::CreateResourceSetRequestPrivate(
    const CreateResourceSetRequestPrivate &other, CreateResourceSetRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
