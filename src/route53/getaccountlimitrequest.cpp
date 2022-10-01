// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccountlimitrequest.h"
#include "getaccountlimitrequest_p.h"
#include "getaccountlimitresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetAccountLimitRequest
 * \brief The GetAccountLimitRequest class provides an interface for Route53 GetAccountLimit requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getAccountLimit
 */

/*!
 * Constructs a copy of \a other.
 */
GetAccountLimitRequest::GetAccountLimitRequest(const GetAccountLimitRequest &other)
    : Route53Request(new GetAccountLimitRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAccountLimitRequest object.
 */
GetAccountLimitRequest::GetAccountLimitRequest()
    : Route53Request(new GetAccountLimitRequestPrivate(Route53Request::GetAccountLimitAction, this))
{

}

/*!
 * \reimp
 */
bool GetAccountLimitRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAccountLimitResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAccountLimitRequest::response(QNetworkReply * const reply) const
{
    return new GetAccountLimitResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::GetAccountLimitRequestPrivate
 * \brief The GetAccountLimitRequestPrivate class provides private implementation for GetAccountLimitRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetAccountLimitRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
GetAccountLimitRequestPrivate::GetAccountLimitRequestPrivate(
    const Route53Request::Action action, GetAccountLimitRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAccountLimitRequest
 * class' copy constructor.
 */
GetAccountLimitRequestPrivate::GetAccountLimitRequestPrivate(
    const GetAccountLimitRequestPrivate &other, GetAccountLimitRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
