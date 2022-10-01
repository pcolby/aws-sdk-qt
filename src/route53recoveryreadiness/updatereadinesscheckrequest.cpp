// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatereadinesscheckrequest.h"
#include "updatereadinesscheckrequest_p.h"
#include "updatereadinesscheckresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::UpdateReadinessCheckRequest
 * \brief The UpdateReadinessCheckRequest class provides an interface for Route53RecoveryReadiness UpdateReadinessCheck requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::updateReadinessCheck
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateReadinessCheckRequest::UpdateReadinessCheckRequest(const UpdateReadinessCheckRequest &other)
    : Route53RecoveryReadinessRequest(new UpdateReadinessCheckRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateReadinessCheckRequest object.
 */
UpdateReadinessCheckRequest::UpdateReadinessCheckRequest()
    : Route53RecoveryReadinessRequest(new UpdateReadinessCheckRequestPrivate(Route53RecoveryReadinessRequest::UpdateReadinessCheckAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateReadinessCheckRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateReadinessCheckResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateReadinessCheckRequest::response(QNetworkReply * const reply) const
{
    return new UpdateReadinessCheckResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::UpdateReadinessCheckRequestPrivate
 * \brief The UpdateReadinessCheckRequestPrivate class provides private implementation for UpdateReadinessCheckRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a UpdateReadinessCheckRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
UpdateReadinessCheckRequestPrivate::UpdateReadinessCheckRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, UpdateReadinessCheckRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateReadinessCheckRequest
 * class' copy constructor.
 */
UpdateReadinessCheckRequestPrivate::UpdateReadinessCheckRequestPrivate(
    const UpdateReadinessCheckRequestPrivate &other, UpdateReadinessCheckRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
