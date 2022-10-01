// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletegrouprequest.h"
#include "deletegrouprequest_p.h"
#include "deletegroupresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteGroupRequest
 * \brief The DeleteGroupRequest class provides an interface for QuickSight DeleteGroup requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteGroupRequest::DeleteGroupRequest(const DeleteGroupRequest &other)
    : QuickSightRequest(new DeleteGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteGroupRequest object.
 */
DeleteGroupRequest::DeleteGroupRequest()
    : QuickSightRequest(new DeleteGroupRequestPrivate(QuickSightRequest::DeleteGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGroupResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DeleteGroupRequestPrivate
 * \brief The DeleteGroupRequestPrivate class provides private implementation for DeleteGroupRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteGroupRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DeleteGroupRequestPrivate::DeleteGroupRequestPrivate(
    const QuickSightRequest::Action action, DeleteGroupRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteGroupRequest
 * class' copy constructor.
 */
DeleteGroupRequestPrivate::DeleteGroupRequestPrivate(
    const DeleteGroupRequestPrivate &other, DeleteGroupRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
