// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdatasetrequest.h"
#include "getdatasetrequest_p.h"
#include "getdatasetresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::GetDatasetRequest
 * \brief The GetDatasetRequest class provides an interface for FinspaceData GetDataset requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::getDataset
 */

/*!
 * Constructs a copy of \a other.
 */
GetDatasetRequest::GetDatasetRequest(const GetDatasetRequest &other)
    : FinspaceDataRequest(new GetDatasetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDatasetRequest object.
 */
GetDatasetRequest::GetDatasetRequest()
    : FinspaceDataRequest(new GetDatasetRequestPrivate(FinspaceDataRequest::GetDatasetAction, this))
{

}

/*!
 * \reimp
 */
bool GetDatasetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDatasetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDatasetRequest::response(QNetworkReply * const reply) const
{
    return new GetDatasetResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::GetDatasetRequestPrivate
 * \brief The GetDatasetRequestPrivate class provides private implementation for GetDatasetRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a GetDatasetRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
GetDatasetRequestPrivate::GetDatasetRequestPrivate(
    const FinspaceDataRequest::Action action, GetDatasetRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDatasetRequest
 * class' copy constructor.
 */
GetDatasetRequestPrivate::GetDatasetRequestPrivate(
    const GetDatasetRequestPrivate &other, GetDatasetRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
