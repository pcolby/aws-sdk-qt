// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelocationsmbrequest.h"
#include "updatelocationsmbrequest_p.h"
#include "updatelocationsmbresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::UpdateLocationSmbRequest
 * \brief The UpdateLocationSmbRequest class provides an interface for DataSync UpdateLocationSmb requests.
 *
 * \inmodule QtAwsDataSync
 *
 *  <fullname>DataSync</fullname>
 * 
 *  DataSync is a managed data transfer service that makes it simpler for you to automate moving data between on-premises
 *  storage and Amazon Simple Storage Service (Amazon S3) or Amazon Elastic File System (Amazon EFS).
 * 
 *  </p
 * 
 *  This API interface reference for DataSync contains documentation for a programming interface that you can use to manage
 *
 * \sa DataSyncClient::updateLocationSmb
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateLocationSmbRequest::UpdateLocationSmbRequest(const UpdateLocationSmbRequest &other)
    : DataSyncRequest(new UpdateLocationSmbRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateLocationSmbRequest object.
 */
UpdateLocationSmbRequest::UpdateLocationSmbRequest()
    : DataSyncRequest(new UpdateLocationSmbRequestPrivate(DataSyncRequest::UpdateLocationSmbAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateLocationSmbRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateLocationSmbResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateLocationSmbRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLocationSmbResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::UpdateLocationSmbRequestPrivate
 * \brief The UpdateLocationSmbRequestPrivate class provides private implementation for UpdateLocationSmbRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a UpdateLocationSmbRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
UpdateLocationSmbRequestPrivate::UpdateLocationSmbRequestPrivate(
    const DataSyncRequest::Action action, UpdateLocationSmbRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateLocationSmbRequest
 * class' copy constructor.
 */
UpdateLocationSmbRequestPrivate::UpdateLocationSmbRequestPrivate(
    const UpdateLocationSmbRequestPrivate &other, UpdateLocationSmbRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws
