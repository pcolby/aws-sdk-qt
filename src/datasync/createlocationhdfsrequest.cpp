// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlocationhdfsrequest.h"
#include "createlocationhdfsrequest_p.h"
#include "createlocationhdfsresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::CreateLocationHdfsRequest
 * \brief The CreateLocationHdfsRequest class provides an interface for DataSync CreateLocationHdfs requests.
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
 * \sa DataSyncClient::createLocationHdfs
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLocationHdfsRequest::CreateLocationHdfsRequest(const CreateLocationHdfsRequest &other)
    : DataSyncRequest(new CreateLocationHdfsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLocationHdfsRequest object.
 */
CreateLocationHdfsRequest::CreateLocationHdfsRequest()
    : DataSyncRequest(new CreateLocationHdfsRequestPrivate(DataSyncRequest::CreateLocationHdfsAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLocationHdfsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLocationHdfsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLocationHdfsRequest::response(QNetworkReply * const reply) const
{
    return new CreateLocationHdfsResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::CreateLocationHdfsRequestPrivate
 * \brief The CreateLocationHdfsRequestPrivate class provides private implementation for CreateLocationHdfsRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a CreateLocationHdfsRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
CreateLocationHdfsRequestPrivate::CreateLocationHdfsRequestPrivate(
    const DataSyncRequest::Action action, CreateLocationHdfsRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLocationHdfsRequest
 * class' copy constructor.
 */
CreateLocationHdfsRequestPrivate::CreateLocationHdfsRequestPrivate(
    const CreateLocationHdfsRequestPrivate &other, CreateLocationHdfsRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws
