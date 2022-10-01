/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
