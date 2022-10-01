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

#include "getdataviewrequest.h"
#include "getdataviewrequest_p.h"
#include "getdataviewresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::GetDataViewRequest
 * \brief The GetDataViewRequest class provides an interface for FinspaceData GetDataView requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::getDataView
 */

/*!
 * Constructs a copy of \a other.
 */
GetDataViewRequest::GetDataViewRequest(const GetDataViewRequest &other)
    : FinspaceDataRequest(new GetDataViewRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDataViewRequest object.
 */
GetDataViewRequest::GetDataViewRequest()
    : FinspaceDataRequest(new GetDataViewRequestPrivate(FinspaceDataRequest::GetDataViewAction, this))
{

}

/*!
 * \reimp
 */
bool GetDataViewRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDataViewResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDataViewRequest::response(QNetworkReply * const reply) const
{
    return new GetDataViewResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::GetDataViewRequestPrivate
 * \brief The GetDataViewRequestPrivate class provides private implementation for GetDataViewRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a GetDataViewRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
GetDataViewRequestPrivate::GetDataViewRequestPrivate(
    const FinspaceDataRequest::Action action, GetDataViewRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDataViewRequest
 * class' copy constructor.
 */
GetDataViewRequestPrivate::GetDataViewRequestPrivate(
    const GetDataViewRequestPrivate &other, GetDataViewRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
