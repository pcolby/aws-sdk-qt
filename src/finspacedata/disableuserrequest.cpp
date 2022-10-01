// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disableuserrequest.h"
#include "disableuserrequest_p.h"
#include "disableuserresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::DisableUserRequest
 * \brief The DisableUserRequest class provides an interface for FinspaceData DisableUser requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::disableUser
 */

/*!
 * Constructs a copy of \a other.
 */
DisableUserRequest::DisableUserRequest(const DisableUserRequest &other)
    : FinspaceDataRequest(new DisableUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisableUserRequest object.
 */
DisableUserRequest::DisableUserRequest()
    : FinspaceDataRequest(new DisableUserRequestPrivate(FinspaceDataRequest::DisableUserAction, this))
{

}

/*!
 * \reimp
 */
bool DisableUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisableUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisableUserRequest::response(QNetworkReply * const reply) const
{
    return new DisableUserResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::DisableUserRequestPrivate
 * \brief The DisableUserRequestPrivate class provides private implementation for DisableUserRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a DisableUserRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
DisableUserRequestPrivate::DisableUserRequestPrivate(
    const FinspaceDataRequest::Action action, DisableUserRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisableUserRequest
 * class' copy constructor.
 */
DisableUserRequestPrivate::DisableUserRequestPrivate(
    const DisableUserRequestPrivate &other, DisableUserRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
