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

#include "updateiampolicyassignmentrequest.h"
#include "updateiampolicyassignmentrequest_p.h"
#include "updateiampolicyassignmentresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateIAMPolicyAssignmentRequest
 * \brief The UpdateIAMPolicyAssignmentRequest class provides an interface for QuickSight UpdateIAMPolicyAssignment requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateIAMPolicyAssignment
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateIAMPolicyAssignmentRequest::UpdateIAMPolicyAssignmentRequest(const UpdateIAMPolicyAssignmentRequest &other)
    : QuickSightRequest(new UpdateIAMPolicyAssignmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateIAMPolicyAssignmentRequest object.
 */
UpdateIAMPolicyAssignmentRequest::UpdateIAMPolicyAssignmentRequest()
    : QuickSightRequest(new UpdateIAMPolicyAssignmentRequestPrivate(QuickSightRequest::UpdateIAMPolicyAssignmentAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateIAMPolicyAssignmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateIAMPolicyAssignmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateIAMPolicyAssignmentRequest::response(QNetworkReply * const reply) const
{
    return new UpdateIAMPolicyAssignmentResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::UpdateIAMPolicyAssignmentRequestPrivate
 * \brief The UpdateIAMPolicyAssignmentRequestPrivate class provides private implementation for UpdateIAMPolicyAssignmentRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateIAMPolicyAssignmentRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
UpdateIAMPolicyAssignmentRequestPrivate::UpdateIAMPolicyAssignmentRequestPrivate(
    const QuickSightRequest::Action action, UpdateIAMPolicyAssignmentRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateIAMPolicyAssignmentRequest
 * class' copy constructor.
 */
UpdateIAMPolicyAssignmentRequestPrivate::UpdateIAMPolicyAssignmentRequestPrivate(
    const UpdateIAMPolicyAssignmentRequestPrivate &other, UpdateIAMPolicyAssignmentRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
