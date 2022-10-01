// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeaccountcustomizationrequest.h"
#include "describeaccountcustomizationrequest_p.h"
#include "describeaccountcustomizationresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeAccountCustomizationRequest
 * \brief The DescribeAccountCustomizationRequest class provides an interface for QuickSight DescribeAccountCustomization requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeAccountCustomization
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAccountCustomizationRequest::DescribeAccountCustomizationRequest(const DescribeAccountCustomizationRequest &other)
    : QuickSightRequest(new DescribeAccountCustomizationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAccountCustomizationRequest object.
 */
DescribeAccountCustomizationRequest::DescribeAccountCustomizationRequest()
    : QuickSightRequest(new DescribeAccountCustomizationRequestPrivate(QuickSightRequest::DescribeAccountCustomizationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAccountCustomizationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAccountCustomizationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAccountCustomizationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAccountCustomizationResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DescribeAccountCustomizationRequestPrivate
 * \brief The DescribeAccountCustomizationRequestPrivate class provides private implementation for DescribeAccountCustomizationRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeAccountCustomizationRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DescribeAccountCustomizationRequestPrivate::DescribeAccountCustomizationRequestPrivate(
    const QuickSightRequest::Action action, DescribeAccountCustomizationRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAccountCustomizationRequest
 * class' copy constructor.
 */
DescribeAccountCustomizationRequestPrivate::DescribeAccountCustomizationRequestPrivate(
    const DescribeAccountCustomizationRequestPrivate &other, DescribeAccountCustomizationRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
