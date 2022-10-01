// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getreusabledelegationsetrequest.h"
#include "getreusabledelegationsetrequest_p.h"
#include "getreusabledelegationsetresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetReusableDelegationSetRequest
 * \brief The GetReusableDelegationSetRequest class provides an interface for Route53 GetReusableDelegationSet requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getReusableDelegationSet
 */

/*!
 * Constructs a copy of \a other.
 */
GetReusableDelegationSetRequest::GetReusableDelegationSetRequest(const GetReusableDelegationSetRequest &other)
    : Route53Request(new GetReusableDelegationSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetReusableDelegationSetRequest object.
 */
GetReusableDelegationSetRequest::GetReusableDelegationSetRequest()
    : Route53Request(new GetReusableDelegationSetRequestPrivate(Route53Request::GetReusableDelegationSetAction, this))
{

}

/*!
 * \reimp
 */
bool GetReusableDelegationSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetReusableDelegationSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetReusableDelegationSetRequest::response(QNetworkReply * const reply) const
{
    return new GetReusableDelegationSetResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::GetReusableDelegationSetRequestPrivate
 * \brief The GetReusableDelegationSetRequestPrivate class provides private implementation for GetReusableDelegationSetRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetReusableDelegationSetRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
GetReusableDelegationSetRequestPrivate::GetReusableDelegationSetRequestPrivate(
    const Route53Request::Action action, GetReusableDelegationSetRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetReusableDelegationSetRequest
 * class' copy constructor.
 */
GetReusableDelegationSetRequestPrivate::GetReusableDelegationSetRequestPrivate(
    const GetReusableDelegationSetRequestPrivate &other, GetReusableDelegationSetRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
