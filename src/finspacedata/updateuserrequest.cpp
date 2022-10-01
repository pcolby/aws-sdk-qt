// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateuserrequest.h"
#include "updateuserrequest_p.h"
#include "updateuserresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::UpdateUserRequest
 * \brief The UpdateUserRequest class provides an interface for FinspaceData UpdateUser requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::updateUser
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateUserRequest::UpdateUserRequest(const UpdateUserRequest &other)
    : FinspaceDataRequest(new UpdateUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateUserRequest object.
 */
UpdateUserRequest::UpdateUserRequest()
    : FinspaceDataRequest(new UpdateUserRequestPrivate(FinspaceDataRequest::UpdateUserAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateUserRequest::response(QNetworkReply * const reply) const
{
    return new UpdateUserResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::UpdateUserRequestPrivate
 * \brief The UpdateUserRequestPrivate class provides private implementation for UpdateUserRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a UpdateUserRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
UpdateUserRequestPrivate::UpdateUserRequestPrivate(
    const FinspaceDataRequest::Action action, UpdateUserRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateUserRequest
 * class' copy constructor.
 */
UpdateUserRequestPrivate::UpdateUserRequestPrivate(
    const UpdateUserRequestPrivate &other, UpdateUserRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
