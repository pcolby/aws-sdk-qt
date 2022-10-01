// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeiampolicyassignmentrequest.h"
#include "describeiampolicyassignmentrequest_p.h"
#include "describeiampolicyassignmentresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeIAMPolicyAssignmentRequest
 * \brief The DescribeIAMPolicyAssignmentRequest class provides an interface for QuickSight DescribeIAMPolicyAssignment requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeIAMPolicyAssignment
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeIAMPolicyAssignmentRequest::DescribeIAMPolicyAssignmentRequest(const DescribeIAMPolicyAssignmentRequest &other)
    : QuickSightRequest(new DescribeIAMPolicyAssignmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeIAMPolicyAssignmentRequest object.
 */
DescribeIAMPolicyAssignmentRequest::DescribeIAMPolicyAssignmentRequest()
    : QuickSightRequest(new DescribeIAMPolicyAssignmentRequestPrivate(QuickSightRequest::DescribeIAMPolicyAssignmentAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeIAMPolicyAssignmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeIAMPolicyAssignmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeIAMPolicyAssignmentRequest::response(QNetworkReply * const reply) const
{
    return new DescribeIAMPolicyAssignmentResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DescribeIAMPolicyAssignmentRequestPrivate
 * \brief The DescribeIAMPolicyAssignmentRequestPrivate class provides private implementation for DescribeIAMPolicyAssignmentRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeIAMPolicyAssignmentRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DescribeIAMPolicyAssignmentRequestPrivate::DescribeIAMPolicyAssignmentRequestPrivate(
    const QuickSightRequest::Action action, DescribeIAMPolicyAssignmentRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeIAMPolicyAssignmentRequest
 * class' copy constructor.
 */
DescribeIAMPolicyAssignmentRequestPrivate::DescribeIAMPolicyAssignmentRequestPrivate(
    const DescribeIAMPolicyAssignmentRequestPrivate &other, DescribeIAMPolicyAssignmentRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
