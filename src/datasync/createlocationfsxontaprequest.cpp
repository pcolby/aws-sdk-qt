// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlocationfsxontaprequest.h"
#include "createlocationfsxontaprequest_p.h"
#include "createlocationfsxontapresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::CreateLocationFsxOntapRequest
 * \brief The CreateLocationFsxOntapRequest class provides an interface for DataSync CreateLocationFsxOntap requests.
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
 * \sa DataSyncClient::createLocationFsxOntap
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLocationFsxOntapRequest::CreateLocationFsxOntapRequest(const CreateLocationFsxOntapRequest &other)
    : DataSyncRequest(new CreateLocationFsxOntapRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLocationFsxOntapRequest object.
 */
CreateLocationFsxOntapRequest::CreateLocationFsxOntapRequest()
    : DataSyncRequest(new CreateLocationFsxOntapRequestPrivate(DataSyncRequest::CreateLocationFsxOntapAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLocationFsxOntapRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLocationFsxOntapResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLocationFsxOntapRequest::response(QNetworkReply * const reply) const
{
    return new CreateLocationFsxOntapResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::CreateLocationFsxOntapRequestPrivate
 * \brief The CreateLocationFsxOntapRequestPrivate class provides private implementation for CreateLocationFsxOntapRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a CreateLocationFsxOntapRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
CreateLocationFsxOntapRequestPrivate::CreateLocationFsxOntapRequestPrivate(
    const DataSyncRequest::Action action, CreateLocationFsxOntapRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLocationFsxOntapRequest
 * class' copy constructor.
 */
CreateLocationFsxOntapRequestPrivate::CreateLocationFsxOntapRequestPrivate(
    const CreateLocationFsxOntapRequestPrivate &other, CreateLocationFsxOntapRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws
