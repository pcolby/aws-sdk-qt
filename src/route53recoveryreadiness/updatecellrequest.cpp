// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecellrequest.h"
#include "updatecellrequest_p.h"
#include "updatecellresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::UpdateCellRequest
 * \brief The UpdateCellRequest class provides an interface for Route53RecoveryReadiness UpdateCell requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::updateCell
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateCellRequest::UpdateCellRequest(const UpdateCellRequest &other)
    : Route53RecoveryReadinessRequest(new UpdateCellRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateCellRequest object.
 */
UpdateCellRequest::UpdateCellRequest()
    : Route53RecoveryReadinessRequest(new UpdateCellRequestPrivate(Route53RecoveryReadinessRequest::UpdateCellAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateCellRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateCellResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateCellRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCellResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::UpdateCellRequestPrivate
 * \brief The UpdateCellRequestPrivate class provides private implementation for UpdateCellRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a UpdateCellRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
UpdateCellRequestPrivate::UpdateCellRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, UpdateCellRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateCellRequest
 * class' copy constructor.
 */
UpdateCellRequestPrivate::UpdateCellRequestPrivate(
    const UpdateCellRequestPrivate &other, UpdateCellRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
