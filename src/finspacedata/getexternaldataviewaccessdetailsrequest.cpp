/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getexternaldataviewaccessdetailsrequest.h"
#include "getexternaldataviewaccessdetailsrequest_p.h"
#include "getexternaldataviewaccessdetailsresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::GetExternalDataViewAccessDetailsRequest
 * \brief The GetExternalDataViewAccessDetailsRequest class provides an interface for FinspaceData GetExternalDataViewAccessDetails requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::getExternalDataViewAccessDetails
 */

/*!
 * Constructs a copy of \a other.
 */
GetExternalDataViewAccessDetailsRequest::GetExternalDataViewAccessDetailsRequest(const GetExternalDataViewAccessDetailsRequest &other)
    : FinspaceDataRequest(new GetExternalDataViewAccessDetailsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetExternalDataViewAccessDetailsRequest object.
 */
GetExternalDataViewAccessDetailsRequest::GetExternalDataViewAccessDetailsRequest()
    : FinspaceDataRequest(new GetExternalDataViewAccessDetailsRequestPrivate(FinspaceDataRequest::GetExternalDataViewAccessDetailsAction, this))
{

}

/*!
 * \reimp
 */
bool GetExternalDataViewAccessDetailsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetExternalDataViewAccessDetailsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetExternalDataViewAccessDetailsRequest::response(QNetworkReply * const reply) const
{
    return new GetExternalDataViewAccessDetailsResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::GetExternalDataViewAccessDetailsRequestPrivate
 * \brief The GetExternalDataViewAccessDetailsRequestPrivate class provides private implementation for GetExternalDataViewAccessDetailsRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a GetExternalDataViewAccessDetailsRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
GetExternalDataViewAccessDetailsRequestPrivate::GetExternalDataViewAccessDetailsRequestPrivate(
    const FinspaceDataRequest::Action action, GetExternalDataViewAccessDetailsRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetExternalDataViewAccessDetailsRequest
 * class' copy constructor.
 */
GetExternalDataViewAccessDetailsRequestPrivate::GetExternalDataViewAccessDetailsRequestPrivate(
    const GetExternalDataViewAccessDetailsRequestPrivate &other, GetExternalDataViewAccessDetailsRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
