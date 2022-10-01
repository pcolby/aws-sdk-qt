// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelocationhdfsrequest.h"
#include "updatelocationhdfsrequest_p.h"
#include "updatelocationhdfsresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::UpdateLocationHdfsRequest
 * \brief The UpdateLocationHdfsRequest class provides an interface for DataSync UpdateLocationHdfs requests.
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
 * \sa DataSyncClient::updateLocationHdfs
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateLocationHdfsRequest::UpdateLocationHdfsRequest(const UpdateLocationHdfsRequest &other)
    : DataSyncRequest(new UpdateLocationHdfsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateLocationHdfsRequest object.
 */
UpdateLocationHdfsRequest::UpdateLocationHdfsRequest()
    : DataSyncRequest(new UpdateLocationHdfsRequestPrivate(DataSyncRequest::UpdateLocationHdfsAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateLocationHdfsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateLocationHdfsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateLocationHdfsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLocationHdfsResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::UpdateLocationHdfsRequestPrivate
 * \brief The UpdateLocationHdfsRequestPrivate class provides private implementation for UpdateLocationHdfsRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a UpdateLocationHdfsRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
UpdateLocationHdfsRequestPrivate::UpdateLocationHdfsRequestPrivate(
    const DataSyncRequest::Action action, UpdateLocationHdfsRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateLocationHdfsRequest
 * class' copy constructor.
 */
UpdateLocationHdfsRequestPrivate::UpdateLocationHdfsRequestPrivate(
    const UpdateLocationHdfsRequestPrivate &other, UpdateLocationHdfsRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws
