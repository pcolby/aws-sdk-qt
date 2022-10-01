// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteresourcesetrequest.h"
#include "deleteresourcesetrequest_p.h"
#include "deleteresourcesetresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::DeleteResourceSetRequest
 * \brief The DeleteResourceSetRequest class provides an interface for Route53RecoveryReadiness DeleteResourceSet requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::deleteResourceSet
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteResourceSetRequest::DeleteResourceSetRequest(const DeleteResourceSetRequest &other)
    : Route53RecoveryReadinessRequest(new DeleteResourceSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteResourceSetRequest object.
 */
DeleteResourceSetRequest::DeleteResourceSetRequest()
    : Route53RecoveryReadinessRequest(new DeleteResourceSetRequestPrivate(Route53RecoveryReadinessRequest::DeleteResourceSetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteResourceSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteResourceSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteResourceSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteResourceSetResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::DeleteResourceSetRequestPrivate
 * \brief The DeleteResourceSetRequestPrivate class provides private implementation for DeleteResourceSetRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a DeleteResourceSetRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
DeleteResourceSetRequestPrivate::DeleteResourceSetRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, DeleteResourceSetRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteResourceSetRequest
 * class' copy constructor.
 */
DeleteResourceSetRequestPrivate::DeleteResourceSetRequestPrivate(
    const DeleteResourceSetRequestPrivate &other, DeleteResourceSetRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
