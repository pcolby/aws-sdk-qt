// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getreusabledelegationsetlimitrequest.h"
#include "getreusabledelegationsetlimitrequest_p.h"
#include "getreusabledelegationsetlimitresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetReusableDelegationSetLimitRequest
 * \brief The GetReusableDelegationSetLimitRequest class provides an interface for Route53 GetReusableDelegationSetLimit requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getReusableDelegationSetLimit
 */

/*!
 * Constructs a copy of \a other.
 */
GetReusableDelegationSetLimitRequest::GetReusableDelegationSetLimitRequest(const GetReusableDelegationSetLimitRequest &other)
    : Route53Request(new GetReusableDelegationSetLimitRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetReusableDelegationSetLimitRequest object.
 */
GetReusableDelegationSetLimitRequest::GetReusableDelegationSetLimitRequest()
    : Route53Request(new GetReusableDelegationSetLimitRequestPrivate(Route53Request::GetReusableDelegationSetLimitAction, this))
{

}

/*!
 * \reimp
 */
bool GetReusableDelegationSetLimitRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetReusableDelegationSetLimitResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetReusableDelegationSetLimitRequest::response(QNetworkReply * const reply) const
{
    return new GetReusableDelegationSetLimitResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::GetReusableDelegationSetLimitRequestPrivate
 * \brief The GetReusableDelegationSetLimitRequestPrivate class provides private implementation for GetReusableDelegationSetLimitRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetReusableDelegationSetLimitRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
GetReusableDelegationSetLimitRequestPrivate::GetReusableDelegationSetLimitRequestPrivate(
    const Route53Request::Action action, GetReusableDelegationSetLimitRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetReusableDelegationSetLimitRequest
 * class' copy constructor.
 */
GetReusableDelegationSetLimitRequestPrivate::GetReusableDelegationSetLimitRequestPrivate(
    const GetReusableDelegationSetLimitRequestPrivate &other, GetReusableDelegationSetLimitRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
