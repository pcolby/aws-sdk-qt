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

#include "createlocationfsxopenzfsrequest.h"
#include "createlocationfsxopenzfsrequest_p.h"
#include "createlocationfsxopenzfsresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::CreateLocationFsxOpenZfsRequest
 * \brief The CreateLocationFsxOpenZfsRequest class provides an interface for DataSync CreateLocationFsxOpenZfs requests.
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
 * \sa DataSyncClient::createLocationFsxOpenZfs
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLocationFsxOpenZfsRequest::CreateLocationFsxOpenZfsRequest(const CreateLocationFsxOpenZfsRequest &other)
    : DataSyncRequest(new CreateLocationFsxOpenZfsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLocationFsxOpenZfsRequest object.
 */
CreateLocationFsxOpenZfsRequest::CreateLocationFsxOpenZfsRequest()
    : DataSyncRequest(new CreateLocationFsxOpenZfsRequestPrivate(DataSyncRequest::CreateLocationFsxOpenZfsAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLocationFsxOpenZfsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLocationFsxOpenZfsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLocationFsxOpenZfsRequest::response(QNetworkReply * const reply) const
{
    return new CreateLocationFsxOpenZfsResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::CreateLocationFsxOpenZfsRequestPrivate
 * \brief The CreateLocationFsxOpenZfsRequestPrivate class provides private implementation for CreateLocationFsxOpenZfsRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a CreateLocationFsxOpenZfsRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
CreateLocationFsxOpenZfsRequestPrivate::CreateLocationFsxOpenZfsRequestPrivate(
    const DataSyncRequest::Action action, CreateLocationFsxOpenZfsRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLocationFsxOpenZfsRequest
 * class' copy constructor.
 */
CreateLocationFsxOpenZfsRequestPrivate::CreateLocationFsxOpenZfsRequestPrivate(
    const CreateLocationFsxOpenZfsRequestPrivate &other, CreateLocationFsxOpenZfsRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws
