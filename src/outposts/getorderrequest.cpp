// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getorderrequest.h"
#include "getorderrequest_p.h"
#include "getorderresponse.h"
#include "outpostsrequest_p.h"

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::GetOrderRequest
 * \brief The GetOrderRequest class provides an interface for Outposts GetOrder requests.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::getOrder
 */

/*!
 * Constructs a copy of \a other.
 */
GetOrderRequest::GetOrderRequest(const GetOrderRequest &other)
    : OutpostsRequest(new GetOrderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetOrderRequest object.
 */
GetOrderRequest::GetOrderRequest()
    : OutpostsRequest(new GetOrderRequestPrivate(OutpostsRequest::GetOrderAction, this))
{

}

/*!
 * \reimp
 */
bool GetOrderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetOrderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetOrderRequest::response(QNetworkReply * const reply) const
{
    return new GetOrderResponse(*this, reply);
}

/*!
 * \class QtAws::Outposts::GetOrderRequestPrivate
 * \brief The GetOrderRequestPrivate class provides private implementation for GetOrderRequest.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a GetOrderRequestPrivate object for Outposts \a action,
 * with public implementation \a q.
 */
GetOrderRequestPrivate::GetOrderRequestPrivate(
    const OutpostsRequest::Action action, GetOrderRequest * const q)
    : OutpostsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetOrderRequest
 * class' copy constructor.
 */
GetOrderRequestPrivate::GetOrderRequestPrivate(
    const GetOrderRequestPrivate &other, GetOrderRequest * const q)
    : OutpostsRequestPrivate(other, q)
{

}

} // namespace Outposts
} // namespace QtAws
