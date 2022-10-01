// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtagsforresourcesrequest.h"
#include "listtagsforresourcesrequest_p.h"
#include "listtagsforresourcesresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::ListTagsForResourcesRequest
 * \brief The ListTagsForResourcesRequest class provides an interface for Route53RecoveryReadiness ListTagsForResources requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::listTagsForResources
 */

/*!
 * Constructs a copy of \a other.
 */
ListTagsForResourcesRequest::ListTagsForResourcesRequest(const ListTagsForResourcesRequest &other)
    : Route53RecoveryReadinessRequest(new ListTagsForResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTagsForResourcesRequest object.
 */
ListTagsForResourcesRequest::ListTagsForResourcesRequest()
    : Route53RecoveryReadinessRequest(new ListTagsForResourcesRequestPrivate(Route53RecoveryReadinessRequest::ListTagsForResourcesAction, this))
{

}

/*!
 * \reimp
 */
bool ListTagsForResourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTagsForResourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTagsForResourcesRequest::response(QNetworkReply * const reply) const
{
    return new ListTagsForResourcesResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::ListTagsForResourcesRequestPrivate
 * \brief The ListTagsForResourcesRequestPrivate class provides private implementation for ListTagsForResourcesRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a ListTagsForResourcesRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
ListTagsForResourcesRequestPrivate::ListTagsForResourcesRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, ListTagsForResourcesRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTagsForResourcesRequest
 * class' copy constructor.
 */
ListTagsForResourcesRequestPrivate::ListTagsForResourcesRequestPrivate(
    const ListTagsForResourcesRequestPrivate &other, ListTagsForResourcesRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
