// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
