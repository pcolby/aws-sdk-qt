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

#include "deleteiampolicyassignmentrequest.h"
#include "deleteiampolicyassignmentrequest_p.h"
#include "deleteiampolicyassignmentresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteIAMPolicyAssignmentRequest
 * \brief The DeleteIAMPolicyAssignmentRequest class provides an interface for QuickSight DeleteIAMPolicyAssignment requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteIAMPolicyAssignment
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteIAMPolicyAssignmentRequest::DeleteIAMPolicyAssignmentRequest(const DeleteIAMPolicyAssignmentRequest &other)
    : QuickSightRequest(new DeleteIAMPolicyAssignmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteIAMPolicyAssignmentRequest object.
 */
DeleteIAMPolicyAssignmentRequest::DeleteIAMPolicyAssignmentRequest()
    : QuickSightRequest(new DeleteIAMPolicyAssignmentRequestPrivate(QuickSightRequest::DeleteIAMPolicyAssignmentAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteIAMPolicyAssignmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteIAMPolicyAssignmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteIAMPolicyAssignmentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIAMPolicyAssignmentResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DeleteIAMPolicyAssignmentRequestPrivate
 * \brief The DeleteIAMPolicyAssignmentRequestPrivate class provides private implementation for DeleteIAMPolicyAssignmentRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteIAMPolicyAssignmentRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DeleteIAMPolicyAssignmentRequestPrivate::DeleteIAMPolicyAssignmentRequestPrivate(
    const QuickSightRequest::Action action, DeleteIAMPolicyAssignmentRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteIAMPolicyAssignmentRequest
 * class' copy constructor.
 */
DeleteIAMPolicyAssignmentRequestPrivate::DeleteIAMPolicyAssignmentRequestPrivate(
    const DeleteIAMPolicyAssignmentRequestPrivate &other, DeleteIAMPolicyAssignmentRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
