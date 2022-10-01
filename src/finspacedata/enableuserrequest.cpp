// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "enableuserrequest.h"
#include "enableuserrequest_p.h"
#include "enableuserresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::EnableUserRequest
 * \brief The EnableUserRequest class provides an interface for FinspaceData EnableUser requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::enableUser
 */

/*!
 * Constructs a copy of \a other.
 */
EnableUserRequest::EnableUserRequest(const EnableUserRequest &other)
    : FinspaceDataRequest(new EnableUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a EnableUserRequest object.
 */
EnableUserRequest::EnableUserRequest()
    : FinspaceDataRequest(new EnableUserRequestPrivate(FinspaceDataRequest::EnableUserAction, this))
{

}

/*!
 * \reimp
 */
bool EnableUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a EnableUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableUserRequest::response(QNetworkReply * const reply) const
{
    return new EnableUserResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::EnableUserRequestPrivate
 * \brief The EnableUserRequestPrivate class provides private implementation for EnableUserRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a EnableUserRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
EnableUserRequestPrivate::EnableUserRequestPrivate(
    const FinspaceDataRequest::Action action, EnableUserRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the EnableUserRequest
 * class' copy constructor.
 */
EnableUserRequestPrivate::EnableUserRequestPrivate(
    const EnableUserRequestPrivate &other, EnableUserRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
