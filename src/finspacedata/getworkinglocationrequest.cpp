// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getworkinglocationrequest.h"
#include "getworkinglocationrequest_p.h"
#include "getworkinglocationresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::GetWorkingLocationRequest
 * \brief The GetWorkingLocationRequest class provides an interface for FinspaceData GetWorkingLocation requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::getWorkingLocation
 */

/*!
 * Constructs a copy of \a other.
 */
GetWorkingLocationRequest::GetWorkingLocationRequest(const GetWorkingLocationRequest &other)
    : FinspaceDataRequest(new GetWorkingLocationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetWorkingLocationRequest object.
 */
GetWorkingLocationRequest::GetWorkingLocationRequest()
    : FinspaceDataRequest(new GetWorkingLocationRequestPrivate(FinspaceDataRequest::GetWorkingLocationAction, this))
{

}

/*!
 * \reimp
 */
bool GetWorkingLocationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetWorkingLocationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetWorkingLocationRequest::response(QNetworkReply * const reply) const
{
    return new GetWorkingLocationResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::GetWorkingLocationRequestPrivate
 * \brief The GetWorkingLocationRequestPrivate class provides private implementation for GetWorkingLocationRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a GetWorkingLocationRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
GetWorkingLocationRequestPrivate::GetWorkingLocationRequestPrivate(
    const FinspaceDataRequest::Action action, GetWorkingLocationRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetWorkingLocationRequest
 * class' copy constructor.
 */
GetWorkingLocationRequestPrivate::GetWorkingLocationRequestPrivate(
    const GetWorkingLocationRequestPrivate &other, GetWorkingLocationRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
