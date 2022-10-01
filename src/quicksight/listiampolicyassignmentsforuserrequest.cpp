// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listiampolicyassignmentsforuserrequest.h"
#include "listiampolicyassignmentsforuserrequest_p.h"
#include "listiampolicyassignmentsforuserresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListIAMPolicyAssignmentsForUserRequest
 * \brief The ListIAMPolicyAssignmentsForUserRequest class provides an interface for QuickSight ListIAMPolicyAssignmentsForUser requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listIAMPolicyAssignmentsForUser
 */

/*!
 * Constructs a copy of \a other.
 */
ListIAMPolicyAssignmentsForUserRequest::ListIAMPolicyAssignmentsForUserRequest(const ListIAMPolicyAssignmentsForUserRequest &other)
    : QuickSightRequest(new ListIAMPolicyAssignmentsForUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListIAMPolicyAssignmentsForUserRequest object.
 */
ListIAMPolicyAssignmentsForUserRequest::ListIAMPolicyAssignmentsForUserRequest()
    : QuickSightRequest(new ListIAMPolicyAssignmentsForUserRequestPrivate(QuickSightRequest::ListIAMPolicyAssignmentsForUserAction, this))
{

}

/*!
 * \reimp
 */
bool ListIAMPolicyAssignmentsForUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListIAMPolicyAssignmentsForUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListIAMPolicyAssignmentsForUserRequest::response(QNetworkReply * const reply) const
{
    return new ListIAMPolicyAssignmentsForUserResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::ListIAMPolicyAssignmentsForUserRequestPrivate
 * \brief The ListIAMPolicyAssignmentsForUserRequestPrivate class provides private implementation for ListIAMPolicyAssignmentsForUserRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListIAMPolicyAssignmentsForUserRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
ListIAMPolicyAssignmentsForUserRequestPrivate::ListIAMPolicyAssignmentsForUserRequestPrivate(
    const QuickSightRequest::Action action, ListIAMPolicyAssignmentsForUserRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListIAMPolicyAssignmentsForUserRequest
 * class' copy constructor.
 */
ListIAMPolicyAssignmentsForUserRequestPrivate::ListIAMPolicyAssignmentsForUserRequestPrivate(
    const ListIAMPolicyAssignmentsForUserRequestPrivate &other, ListIAMPolicyAssignmentsForUserRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
