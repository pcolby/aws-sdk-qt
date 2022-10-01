// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resetuserpasswordrequest.h"
#include "resetuserpasswordrequest_p.h"
#include "resetuserpasswordresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::ResetUserPasswordRequest
 * \brief The ResetUserPasswordRequest class provides an interface for FinspaceData ResetUserPassword requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::resetUserPassword
 */

/*!
 * Constructs a copy of \a other.
 */
ResetUserPasswordRequest::ResetUserPasswordRequest(const ResetUserPasswordRequest &other)
    : FinspaceDataRequest(new ResetUserPasswordRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ResetUserPasswordRequest object.
 */
ResetUserPasswordRequest::ResetUserPasswordRequest()
    : FinspaceDataRequest(new ResetUserPasswordRequestPrivate(FinspaceDataRequest::ResetUserPasswordAction, this))
{

}

/*!
 * \reimp
 */
bool ResetUserPasswordRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ResetUserPasswordResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ResetUserPasswordRequest::response(QNetworkReply * const reply) const
{
    return new ResetUserPasswordResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::ResetUserPasswordRequestPrivate
 * \brief The ResetUserPasswordRequestPrivate class provides private implementation for ResetUserPasswordRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a ResetUserPasswordRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
ResetUserPasswordRequestPrivate::ResetUserPasswordRequestPrivate(
    const FinspaceDataRequest::Action action, ResetUserPasswordRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ResetUserPasswordRequest
 * class' copy constructor.
 */
ResetUserPasswordRequestPrivate::ResetUserPasswordRequestPrivate(
    const ResetUserPasswordRequestPrivate &other, ResetUserPasswordRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
