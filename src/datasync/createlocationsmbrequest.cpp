/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
