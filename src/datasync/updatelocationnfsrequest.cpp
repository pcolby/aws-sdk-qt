// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelocationnfsrequest.h"
#include "updatelocationnfsrequest_p.h"
#include "updatelocationnfsresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::UpdateLocationNfsRequest
 * \brief The UpdateLocationNfsRequest class provides an interface for DataSync UpdateLocationNfs requests.
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
 * \sa DataSyncClient::updateLocationNfs
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateLocationNfsRequest::UpdateLocationNfsRequest(const UpdateLocationNfsRequest &other)
    : DataSyncRequest(new UpdateLocationNfsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateLocationNfsRequest object.
 */
UpdateLocationNfsRequest::UpdateLocationNfsRequest()
    : DataSyncRequest(new UpdateLocationNfsRequestPrivate(DataSyncRequest::UpdateLocationNfsAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateLocationNfsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateLocationNfsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateLocationNfsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLocationNfsResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::UpdateLocationNfsRequestPrivate
 * \brief The UpdateLocationNfsRequestPrivate class provides private implementation for UpdateLocationNfsRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a UpdateLocationNfsRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
UpdateLocationNfsRequestPrivate::UpdateLocationNfsRequestPrivate(
    const DataSyncRequest::Action action, UpdateLocationNfsRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateLocationNfsRequest
 * class' copy constructor.
 */
UpdateLocationNfsRequestPrivate::UpdateLocationNfsRequestPrivate(
    const UpdateLocationNfsRequestPrivate &other, UpdateLocationNfsRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws
