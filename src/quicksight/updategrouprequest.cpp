// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updategrouprequest.h"
#include "updategrouprequest_p.h"
#include "updategroupresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateGroupRequest
 * \brief The UpdateGroupRequest class provides an interface for QuickSight UpdateGroup requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateGroup
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateGroupRequest::UpdateGroupRequest(const UpdateGroupRequest &other)
    : QuickSightRequest(new UpdateGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateGroupRequest object.
 */
UpdateGroupRequest::UpdateGroupRequest()
    : QuickSightRequest(new UpdateGroupRequestPrivate(QuickSightRequest::UpdateGroupAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGroupResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::UpdateGroupRequestPrivate
 * \brief The UpdateGroupRequestPrivate class provides private implementation for UpdateGroupRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateGroupRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
UpdateGroupRequestPrivate::UpdateGroupRequestPrivate(
    const QuickSightRequest::Action action, UpdateGroupRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateGroupRequest
 * class' copy constructor.
 */
UpdateGroupRequestPrivate::UpdateGroupRequestPrivate(
    const UpdateGroupRequestPrivate &other, UpdateGroupRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
