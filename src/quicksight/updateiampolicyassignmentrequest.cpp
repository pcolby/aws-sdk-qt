// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
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
