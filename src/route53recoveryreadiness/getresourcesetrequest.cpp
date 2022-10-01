// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresourcesetrequest.h"
#include "getresourcesetrequest_p.h"
#include "getresourcesetresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::GetResourceSetRequest
 * \brief The GetResourceSetRequest class provides an interface for Route53RecoveryReadiness GetResourceSet requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::getResourceSet
 */

/*!
 * Constructs a copy of \a other.
 */
GetResourceSetRequest::GetResourceSetRequest(const GetResourceSetRequest &other)
    : Route53RecoveryReadinessRequest(new GetResourceSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetResourceSetRequest object.
 */
GetResourceSetRequest::GetResourceSetRequest()
    : Route53RecoveryReadinessRequest(new GetResourceSetRequestPrivate(Route53RecoveryReadinessRequest::GetResourceSetAction, this))
{

}

/*!
 * \reimp
 */
bool GetResourceSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetResourceSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResourceSetRequest::response(QNetworkReply * const reply) const
{
    return new GetResourceSetResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::GetResourceSetRequestPrivate
 * \brief The GetResourceSetRequestPrivate class provides private implementation for GetResourceSetRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a GetResourceSetRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
GetResourceSetRequestPrivate::GetResourceSetRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, GetResourceSetRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetResourceSetRequest
 * class' copy constructor.
 */
GetResourceSetRequestPrivate::GetResourceSetRequestPrivate(
    const GetResourceSetRequestPrivate &other, GetResourceSetRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
