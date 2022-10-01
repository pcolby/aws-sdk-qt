// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteuserrequest.h"
#include "deleteuserrequest_p.h"
#include "deleteuserresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteUserRequest
 * \brief The DeleteUserRequest class provides an interface for QuickSight DeleteUser requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteUser
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteUserRequest::DeleteUserRequest(const DeleteUserRequest &other)
    : QuickSightRequest(new DeleteUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteUserRequest object.
 */
DeleteUserRequest::DeleteUserRequest()
    : QuickSightRequest(new DeleteUserRequestPrivate(QuickSightRequest::DeleteUserAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteUserRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUserResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DeleteUserRequestPrivate
 * \brief The DeleteUserRequestPrivate class provides private implementation for DeleteUserRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteUserRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DeleteUserRequestPrivate::DeleteUserRequestPrivate(
    const QuickSightRequest::Action action, DeleteUserRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteUserRequest
 * class' copy constructor.
 */
DeleteUserRequestPrivate::DeleteUserRequestPrivate(
    const DeleteUserRequestPrivate &other, DeleteUserRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
