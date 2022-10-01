// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlocationsmbrequest.h"
#include "createlocationsmbrequest_p.h"
#include "createlocationsmbresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::CreateLocationSmbRequest
 * \brief The CreateLocationSmbRequest class provides an interface for DataSync CreateLocationSmb requests.
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
 * \sa DataSyncClient::createLocationSmb
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLocationSmbRequest::CreateLocationSmbRequest(const CreateLocationSmbRequest &other)
    : DataSyncRequest(new CreateLocationSmbRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLocationSmbRequest object.
 */
CreateLocationSmbRequest::CreateLocationSmbRequest()
    : DataSyncRequest(new CreateLocationSmbRequestPrivate(DataSyncRequest::CreateLocationSmbAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLocationSmbRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLocationSmbResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLocationSmbRequest::response(QNetworkReply * const reply) const
{
    return new CreateLocationSmbResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::CreateLocationSmbRequestPrivate
 * \brief The CreateLocationSmbRequestPrivate class provides private implementation for CreateLocationSmbRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a CreateLocationSmbRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
CreateLocationSmbRequestPrivate::CreateLocationSmbRequestPrivate(
    const DataSyncRequest::Action action, CreateLocationSmbRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLocationSmbRequest
 * class' copy constructor.
 */
CreateLocationSmbRequestPrivate::CreateLocationSmbRequestPrivate(
    const CreateLocationSmbRequestPrivate &other, CreateLocationSmbRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws
