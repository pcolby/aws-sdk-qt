// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateresourcesetrequest.h"
#include "updateresourcesetrequest_p.h"
#include "updateresourcesetresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::UpdateResourceSetRequest
 * \brief The UpdateResourceSetRequest class provides an interface for Route53RecoveryReadiness UpdateResourceSet requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::updateResourceSet
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateResourceSetRequest::UpdateResourceSetRequest(const UpdateResourceSetRequest &other)
    : Route53RecoveryReadinessRequest(new UpdateResourceSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateResourceSetRequest object.
 */
UpdateResourceSetRequest::UpdateResourceSetRequest()
    : Route53RecoveryReadinessRequest(new UpdateResourceSetRequestPrivate(Route53RecoveryReadinessRequest::UpdateResourceSetAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateResourceSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateResourceSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateResourceSetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateResourceSetResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::UpdateResourceSetRequestPrivate
 * \brief The UpdateResourceSetRequestPrivate class provides private implementation for UpdateResourceSetRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a UpdateResourceSetRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
UpdateResourceSetRequestPrivate::UpdateResourceSetRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, UpdateResourceSetRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateResourceSetRequest
 * class' copy constructor.
 */
UpdateResourceSetRequestPrivate::UpdateResourceSetRequestPrivate(
    const UpdateResourceSetRequestPrivate &other, UpdateResourceSetRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
