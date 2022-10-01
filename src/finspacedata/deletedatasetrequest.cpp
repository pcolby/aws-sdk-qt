// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedatasetrequest.h"
#include "deletedatasetrequest_p.h"
#include "deletedatasetresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::DeleteDatasetRequest
 * \brief The DeleteDatasetRequest class provides an interface for FinspaceData DeleteDataset requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::deleteDataset
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDatasetRequest::DeleteDatasetRequest(const DeleteDatasetRequest &other)
    : FinspaceDataRequest(new DeleteDatasetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDatasetRequest object.
 */
DeleteDatasetRequest::DeleteDatasetRequest()
    : FinspaceDataRequest(new DeleteDatasetRequestPrivate(FinspaceDataRequest::DeleteDatasetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDatasetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDatasetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDatasetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDatasetResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::DeleteDatasetRequestPrivate
 * \brief The DeleteDatasetRequestPrivate class provides private implementation for DeleteDatasetRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a DeleteDatasetRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
DeleteDatasetRequestPrivate::DeleteDatasetRequestPrivate(
    const FinspaceDataRequest::Action action, DeleteDatasetRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDatasetRequest
 * class' copy constructor.
 */
DeleteDatasetRequestPrivate::DeleteDatasetRequestPrivate(
    const DeleteDatasetRequestPrivate &other, DeleteDatasetRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
