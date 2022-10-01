// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlocationnfsrequest.h"
#include "createlocationnfsrequest_p.h"
#include "createlocationnfsresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::CreateLocationNfsRequest
 * \brief The CreateLocationNfsRequest class provides an interface for DataSync CreateLocationNfs requests.
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
 * \sa DataSyncClient::createLocationNfs
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLocationNfsRequest::CreateLocationNfsRequest(const CreateLocationNfsRequest &other)
    : DataSyncRequest(new CreateLocationNfsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLocationNfsRequest object.
 */
CreateLocationNfsRequest::CreateLocationNfsRequest()
    : DataSyncRequest(new CreateLocationNfsRequestPrivate(DataSyncRequest::CreateLocationNfsAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLocationNfsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLocationNfsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLocationNfsRequest::response(QNetworkReply * const reply) const
{
    return new CreateLocationNfsResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::CreateLocationNfsRequestPrivate
 * \brief The CreateLocationNfsRequestPrivate class provides private implementation for CreateLocationNfsRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a CreateLocationNfsRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
CreateLocationNfsRequestPrivate::CreateLocationNfsRequestPrivate(
    const DataSyncRequest::Action action, CreateLocationNfsRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLocationNfsRequest
 * class' copy constructor.
 */
CreateLocationNfsRequestPrivate::CreateLocationNfsRequestPrivate(
    const CreateLocationNfsRequestPrivate &other, CreateLocationNfsRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws
