// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettrafficpolicyrequest.h"
#include "gettrafficpolicyrequest_p.h"
#include "gettrafficpolicyresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetTrafficPolicyRequest
 * \brief The GetTrafficPolicyRequest class provides an interface for Route53 GetTrafficPolicy requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getTrafficPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetTrafficPolicyRequest::GetTrafficPolicyRequest(const GetTrafficPolicyRequest &other)
    : Route53Request(new GetTrafficPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTrafficPolicyRequest object.
 */
GetTrafficPolicyRequest::GetTrafficPolicyRequest()
    : Route53Request(new GetTrafficPolicyRequestPrivate(Route53Request::GetTrafficPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetTrafficPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTrafficPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTrafficPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetTrafficPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::GetTrafficPolicyRequestPrivate
 * \brief The GetTrafficPolicyRequestPrivate class provides private implementation for GetTrafficPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetTrafficPolicyRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
GetTrafficPolicyRequestPrivate::GetTrafficPolicyRequestPrivate(
    const Route53Request::Action action, GetTrafficPolicyRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTrafficPolicyRequest
 * class' copy constructor.
 */
GetTrafficPolicyRequestPrivate::GetTrafficPolicyRequestPrivate(
    const GetTrafficPolicyRequestPrivate &other, GetTrafficPolicyRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
