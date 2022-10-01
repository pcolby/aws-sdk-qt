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
