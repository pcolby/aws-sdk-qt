// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettrafficpolicyinstancecountrequest.h"
#include "gettrafficpolicyinstancecountrequest_p.h"
#include "gettrafficpolicyinstancecountresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetTrafficPolicyInstanceCountRequest
 * \brief The GetTrafficPolicyInstanceCountRequest class provides an interface for Route53 GetTrafficPolicyInstanceCount requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getTrafficPolicyInstanceCount
 */

/*!
 * Constructs a copy of \a other.
 */
GetTrafficPolicyInstanceCountRequest::GetTrafficPolicyInstanceCountRequest(const GetTrafficPolicyInstanceCountRequest &other)
    : Route53Request(new GetTrafficPolicyInstanceCountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTrafficPolicyInstanceCountRequest object.
 */
GetTrafficPolicyInstanceCountRequest::GetTrafficPolicyInstanceCountRequest()
    : Route53Request(new GetTrafficPolicyInstanceCountRequestPrivate(Route53Request::GetTrafficPolicyInstanceCountAction, this))
{

}

/*!
 * \reimp
 */
bool GetTrafficPolicyInstanceCountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTrafficPolicyInstanceCountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTrafficPolicyInstanceCountRequest::response(QNetworkReply * const reply) const
{
    return new GetTrafficPolicyInstanceCountResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::GetTrafficPolicyInstanceCountRequestPrivate
 * \brief The GetTrafficPolicyInstanceCountRequestPrivate class provides private implementation for GetTrafficPolicyInstanceCountRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetTrafficPolicyInstanceCountRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
GetTrafficPolicyInstanceCountRequestPrivate::GetTrafficPolicyInstanceCountRequestPrivate(
    const Route53Request::Action action, GetTrafficPolicyInstanceCountRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTrafficPolicyInstanceCountRequest
 * class' copy constructor.
 */
GetTrafficPolicyInstanceCountRequestPrivate::GetTrafficPolicyInstanceCountRequestPrivate(
    const GetTrafficPolicyInstanceCountRequestPrivate &other, GetTrafficPolicyInstanceCountRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
