// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelorderrequest.h"
#include "cancelorderrequest_p.h"
#include "cancelorderresponse.h"
#include "outpostsrequest_p.h"

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::CancelOrderRequest
 * \brief The CancelOrderRequest class provides an interface for Outposts CancelOrder requests.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::cancelOrder
 */

/*!
 * Constructs a copy of \a other.
 */
CancelOrderRequest::CancelOrderRequest(const CancelOrderRequest &other)
    : OutpostsRequest(new CancelOrderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelOrderRequest object.
 */
CancelOrderRequest::CancelOrderRequest()
    : OutpostsRequest(new CancelOrderRequestPrivate(OutpostsRequest::CancelOrderAction, this))
{

}

/*!
 * \reimp
 */
bool CancelOrderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelOrderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelOrderRequest::response(QNetworkReply * const reply) const
{
    return new CancelOrderResponse(*this, reply);
}

/*!
 * \class QtAws::Outposts::CancelOrderRequestPrivate
 * \brief The CancelOrderRequestPrivate class provides private implementation for CancelOrderRequest.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a CancelOrderRequestPrivate object for Outposts \a action,
 * with public implementation \a q.
 */
CancelOrderRequestPrivate::CancelOrderRequestPrivate(
    const OutpostsRequest::Action action, CancelOrderRequest * const q)
    : OutpostsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelOrderRequest
 * class' copy constructor.
 */
CancelOrderRequestPrivate::CancelOrderRequestPrivate(
    const CancelOrderRequestPrivate &other, CancelOrderRequest * const q)
    : OutpostsRequestPrivate(other, q)
{

}

} // namespace Outposts
} // namespace QtAws
