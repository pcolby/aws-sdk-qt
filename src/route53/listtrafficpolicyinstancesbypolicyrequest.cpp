// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtrafficpolicyinstancesbypolicyrequest.h"
#include "listtrafficpolicyinstancesbypolicyrequest_p.h"
#include "listtrafficpolicyinstancesbypolicyresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListTrafficPolicyInstancesByPolicyRequest
 * \brief The ListTrafficPolicyInstancesByPolicyRequest class provides an interface for Route53 ListTrafficPolicyInstancesByPolicy requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::listTrafficPolicyInstancesByPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
ListTrafficPolicyInstancesByPolicyRequest::ListTrafficPolicyInstancesByPolicyRequest(const ListTrafficPolicyInstancesByPolicyRequest &other)
    : Route53Request(new ListTrafficPolicyInstancesByPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTrafficPolicyInstancesByPolicyRequest object.
 */
ListTrafficPolicyInstancesByPolicyRequest::ListTrafficPolicyInstancesByPolicyRequest()
    : Route53Request(new ListTrafficPolicyInstancesByPolicyRequestPrivate(Route53Request::ListTrafficPolicyInstancesByPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool ListTrafficPolicyInstancesByPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTrafficPolicyInstancesByPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTrafficPolicyInstancesByPolicyRequest::response(QNetworkReply * const reply) const
{
    return new ListTrafficPolicyInstancesByPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::ListTrafficPolicyInstancesByPolicyRequestPrivate
 * \brief The ListTrafficPolicyInstancesByPolicyRequestPrivate class provides private implementation for ListTrafficPolicyInstancesByPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListTrafficPolicyInstancesByPolicyRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
ListTrafficPolicyInstancesByPolicyRequestPrivate::ListTrafficPolicyInstancesByPolicyRequestPrivate(
    const Route53Request::Action action, ListTrafficPolicyInstancesByPolicyRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTrafficPolicyInstancesByPolicyRequest
 * class' copy constructor.
 */
ListTrafficPolicyInstancesByPolicyRequestPrivate::ListTrafficPolicyInstancesByPolicyRequestPrivate(
    const ListTrafficPolicyInstancesByPolicyRequestPrivate &other, ListTrafficPolicyInstancesByPolicyRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
