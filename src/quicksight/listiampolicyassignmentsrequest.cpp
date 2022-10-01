// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listiampolicyassignmentsrequest.h"
#include "listiampolicyassignmentsrequest_p.h"
#include "listiampolicyassignmentsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListIAMPolicyAssignmentsRequest
 * \brief The ListIAMPolicyAssignmentsRequest class provides an interface for QuickSight ListIAMPolicyAssignments requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listIAMPolicyAssignments
 */

/*!
 * Constructs a copy of \a other.
 */
ListIAMPolicyAssignmentsRequest::ListIAMPolicyAssignmentsRequest(const ListIAMPolicyAssignmentsRequest &other)
    : QuickSightRequest(new ListIAMPolicyAssignmentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListIAMPolicyAssignmentsRequest object.
 */
ListIAMPolicyAssignmentsRequest::ListIAMPolicyAssignmentsRequest()
    : QuickSightRequest(new ListIAMPolicyAssignmentsRequestPrivate(QuickSightRequest::ListIAMPolicyAssignmentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListIAMPolicyAssignmentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListIAMPolicyAssignmentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListIAMPolicyAssignmentsRequest::response(QNetworkReply * const reply) const
{
    return new ListIAMPolicyAssignmentsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::ListIAMPolicyAssignmentsRequestPrivate
 * \brief The ListIAMPolicyAssignmentsRequestPrivate class provides private implementation for ListIAMPolicyAssignmentsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListIAMPolicyAssignmentsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
ListIAMPolicyAssignmentsRequestPrivate::ListIAMPolicyAssignmentsRequestPrivate(
    const QuickSightRequest::Action action, ListIAMPolicyAssignmentsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListIAMPolicyAssignmentsRequest
 * class' copy constructor.
 */
ListIAMPolicyAssignmentsRequestPrivate::ListIAMPolicyAssignmentsRequestPrivate(
    const ListIAMPolicyAssignmentsRequestPrivate &other, ListIAMPolicyAssignmentsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
