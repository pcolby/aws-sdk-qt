// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcrossaccountauthorizationsrequest.h"
#include "listcrossaccountauthorizationsrequest_p.h"
#include "listcrossaccountauthorizationsresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::ListCrossAccountAuthorizationsRequest
 * \brief The ListCrossAccountAuthorizationsRequest class provides an interface for Route53RecoveryReadiness ListCrossAccountAuthorizations requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::listCrossAccountAuthorizations
 */

/*!
 * Constructs a copy of \a other.
 */
ListCrossAccountAuthorizationsRequest::ListCrossAccountAuthorizationsRequest(const ListCrossAccountAuthorizationsRequest &other)
    : Route53RecoveryReadinessRequest(new ListCrossAccountAuthorizationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCrossAccountAuthorizationsRequest object.
 */
ListCrossAccountAuthorizationsRequest::ListCrossAccountAuthorizationsRequest()
    : Route53RecoveryReadinessRequest(new ListCrossAccountAuthorizationsRequestPrivate(Route53RecoveryReadinessRequest::ListCrossAccountAuthorizationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListCrossAccountAuthorizationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCrossAccountAuthorizationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCrossAccountAuthorizationsRequest::response(QNetworkReply * const reply) const
{
    return new ListCrossAccountAuthorizationsResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::ListCrossAccountAuthorizationsRequestPrivate
 * \brief The ListCrossAccountAuthorizationsRequestPrivate class provides private implementation for ListCrossAccountAuthorizationsRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a ListCrossAccountAuthorizationsRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
ListCrossAccountAuthorizationsRequestPrivate::ListCrossAccountAuthorizationsRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, ListCrossAccountAuthorizationsRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCrossAccountAuthorizationsRequest
 * class' copy constructor.
 */
ListCrossAccountAuthorizationsRequestPrivate::ListCrossAccountAuthorizationsRequestPrivate(
    const ListCrossAccountAuthorizationsRequestPrivate &other, ListCrossAccountAuthorizationsRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
