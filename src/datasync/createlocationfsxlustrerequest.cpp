// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlocationfsxlustrerequest.h"
#include "createlocationfsxlustrerequest_p.h"
#include "createlocationfsxlustreresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::CreateLocationFsxLustreRequest
 * \brief The CreateLocationFsxLustreRequest class provides an interface for DataSync CreateLocationFsxLustre requests.
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
 * \sa DataSyncClient::createLocationFsxLustre
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLocationFsxLustreRequest::CreateLocationFsxLustreRequest(const CreateLocationFsxLustreRequest &other)
    : DataSyncRequest(new CreateLocationFsxLustreRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLocationFsxLustreRequest object.
 */
CreateLocationFsxLustreRequest::CreateLocationFsxLustreRequest()
    : DataSyncRequest(new CreateLocationFsxLustreRequestPrivate(DataSyncRequest::CreateLocationFsxLustreAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLocationFsxLustreRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLocationFsxLustreResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLocationFsxLustreRequest::response(QNetworkReply * const reply) const
{
    return new CreateLocationFsxLustreResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::CreateLocationFsxLustreRequestPrivate
 * \brief The CreateLocationFsxLustreRequestPrivate class provides private implementation for CreateLocationFsxLustreRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a CreateLocationFsxLustreRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
CreateLocationFsxLustreRequestPrivate::CreateLocationFsxLustreRequestPrivate(
    const DataSyncRequest::Action action, CreateLocationFsxLustreRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLocationFsxLustreRequest
 * class' copy constructor.
 */
CreateLocationFsxLustreRequestPrivate::CreateLocationFsxLustreRequestPrivate(
    const CreateLocationFsxLustreRequestPrivate &other, CreateLocationFsxLustreRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws
