// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcellrequest.h"
#include "getcellrequest_p.h"
#include "getcellresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::GetCellRequest
 * \brief The GetCellRequest class provides an interface for Route53RecoveryReadiness GetCell requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::getCell
 */

/*!
 * Constructs a copy of \a other.
 */
GetCellRequest::GetCellRequest(const GetCellRequest &other)
    : Route53RecoveryReadinessRequest(new GetCellRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCellRequest object.
 */
GetCellRequest::GetCellRequest()
    : Route53RecoveryReadinessRequest(new GetCellRequestPrivate(Route53RecoveryReadinessRequest::GetCellAction, this))
{

}

/*!
 * \reimp
 */
bool GetCellRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCellResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCellRequest::response(QNetworkReply * const reply) const
{
    return new GetCellResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::GetCellRequestPrivate
 * \brief The GetCellRequestPrivate class provides private implementation for GetCellRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a GetCellRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
GetCellRequestPrivate::GetCellRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, GetCellRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCellRequest
 * class' copy constructor.
 */
GetCellRequestPrivate::GetCellRequestPrivate(
    const GetCellRequestPrivate &other, GetCellRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
