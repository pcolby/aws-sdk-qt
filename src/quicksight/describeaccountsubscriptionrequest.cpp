// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeaccountsubscriptionrequest.h"
#include "describeaccountsubscriptionrequest_p.h"
#include "describeaccountsubscriptionresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeAccountSubscriptionRequest
 * \brief The DescribeAccountSubscriptionRequest class provides an interface for QuickSight DescribeAccountSubscription requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeAccountSubscription
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAccountSubscriptionRequest::DescribeAccountSubscriptionRequest(const DescribeAccountSubscriptionRequest &other)
    : QuickSightRequest(new DescribeAccountSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAccountSubscriptionRequest object.
 */
DescribeAccountSubscriptionRequest::DescribeAccountSubscriptionRequest()
    : QuickSightRequest(new DescribeAccountSubscriptionRequestPrivate(QuickSightRequest::DescribeAccountSubscriptionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAccountSubscriptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAccountSubscriptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAccountSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAccountSubscriptionResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DescribeAccountSubscriptionRequestPrivate
 * \brief The DescribeAccountSubscriptionRequestPrivate class provides private implementation for DescribeAccountSubscriptionRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeAccountSubscriptionRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DescribeAccountSubscriptionRequestPrivate::DescribeAccountSubscriptionRequestPrivate(
    const QuickSightRequest::Action action, DescribeAccountSubscriptionRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAccountSubscriptionRequest
 * class' copy constructor.
 */
DescribeAccountSubscriptionRequestPrivate::DescribeAccountSubscriptionRequestPrivate(
    const DescribeAccountSubscriptionRequestPrivate &other, DescribeAccountSubscriptionRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
