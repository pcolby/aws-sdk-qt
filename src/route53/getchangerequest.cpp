// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getchangerequest.h"
#include "getchangerequest_p.h"
#include "getchangeresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetChangeRequest
 * \brief The GetChangeRequest class provides an interface for Route53 GetChange requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getChange
 */

/*!
 * Constructs a copy of \a other.
 */
GetChangeRequest::GetChangeRequest(const GetChangeRequest &other)
    : Route53Request(new GetChangeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetChangeRequest object.
 */
GetChangeRequest::GetChangeRequest()
    : Route53Request(new GetChangeRequestPrivate(Route53Request::GetChangeAction, this))
{

}

/*!
 * \reimp
 */
bool GetChangeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetChangeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetChangeRequest::response(QNetworkReply * const reply) const
{
    return new GetChangeResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::GetChangeRequestPrivate
 * \brief The GetChangeRequestPrivate class provides private implementation for GetChangeRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetChangeRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
GetChangeRequestPrivate::GetChangeRequestPrivate(
    const Route53Request::Action action, GetChangeRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetChangeRequest
 * class' copy constructor.
 */
GetChangeRequestPrivate::GetChangeRequestPrivate(
    const GetChangeRequestPrivate &other, GetChangeRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
