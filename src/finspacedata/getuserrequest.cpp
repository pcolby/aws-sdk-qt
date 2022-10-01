// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getuserrequest.h"
#include "getuserrequest_p.h"
#include "getuserresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::GetUserRequest
 * \brief The GetUserRequest class provides an interface for FinspaceData GetUser requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::getUser
 */

/*!
 * Constructs a copy of \a other.
 */
GetUserRequest::GetUserRequest(const GetUserRequest &other)
    : FinspaceDataRequest(new GetUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUserRequest object.
 */
GetUserRequest::GetUserRequest()
    : FinspaceDataRequest(new GetUserRequestPrivate(FinspaceDataRequest::GetUserAction, this))
{

}

/*!
 * \reimp
 */
bool GetUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUserRequest::response(QNetworkReply * const reply) const
{
    return new GetUserResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::GetUserRequestPrivate
 * \brief The GetUserRequestPrivate class provides private implementation for GetUserRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a GetUserRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
GetUserRequestPrivate::GetUserRequestPrivate(
    const FinspaceDataRequest::Action action, GetUserRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUserRequest
 * class' copy constructor.
 */
GetUserRequestPrivate::GetUserRequestPrivate(
    const GetUserRequestPrivate &other, GetUserRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
