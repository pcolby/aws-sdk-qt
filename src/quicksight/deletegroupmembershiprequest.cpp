// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletegroupmembershiprequest.h"
#include "deletegroupmembershiprequest_p.h"
#include "deletegroupmembershipresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteGroupMembershipRequest
 * \brief The DeleteGroupMembershipRequest class provides an interface for QuickSight DeleteGroupMembership requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteGroupMembership
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteGroupMembershipRequest::DeleteGroupMembershipRequest(const DeleteGroupMembershipRequest &other)
    : QuickSightRequest(new DeleteGroupMembershipRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteGroupMembershipRequest object.
 */
DeleteGroupMembershipRequest::DeleteGroupMembershipRequest()
    : QuickSightRequest(new DeleteGroupMembershipRequestPrivate(QuickSightRequest::DeleteGroupMembershipAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteGroupMembershipRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteGroupMembershipResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteGroupMembershipRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGroupMembershipResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DeleteGroupMembershipRequestPrivate
 * \brief The DeleteGroupMembershipRequestPrivate class provides private implementation for DeleteGroupMembershipRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteGroupMembershipRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DeleteGroupMembershipRequestPrivate::DeleteGroupMembershipRequestPrivate(
    const QuickSightRequest::Action action, DeleteGroupMembershipRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteGroupMembershipRequest
 * class' copy constructor.
 */
DeleteGroupMembershipRequestPrivate::DeleteGroupMembershipRequestPrivate(
    const DeleteGroupMembershipRequestPrivate &other, DeleteGroupMembershipRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
