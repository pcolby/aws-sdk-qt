/*
    Copyright 2013-2020 Paul Colby

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

#include "createlocationefsrequest.h"
#include "createlocationefsrequest_p.h"
#include "createlocationefsresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::CreateLocationEfsRequest
 * \brief The CreateLocationEfsRequest class provides an interface for DataSync CreateLocationEfs requests.
 *
 * \inmodule QtAwsDataSync
 *
 *  <fullname>AWS DataSync</fullname>
 * 
 *  AWS DataSync is a managed data transfer service that makes it simpler for you to automate moving data between
 *  on-premises storage and Amazon Simple Storage Service (Amazon S3) or Amazon Elastic File System (Amazon EFS).
 * 
 *  </p
 * 
 *  This API interface reference for AWS DataSync contains documentation for a programming interface that you can use to
 *  manage AWS
 *
 * \sa DataSyncClient::createLocationEfs
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLocationEfsRequest::CreateLocationEfsRequest(const CreateLocationEfsRequest &other)
    : DataSyncRequest(new CreateLocationEfsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLocationEfsRequest object.
 */
CreateLocationEfsRequest::CreateLocationEfsRequest()
    : DataSyncRequest(new CreateLocationEfsRequestPrivate(DataSyncRequest::CreateLocationEfsAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLocationEfsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLocationEfsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLocationEfsRequest::response(QNetworkReply * const reply) const
{
    return new CreateLocationEfsResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::CreateLocationEfsRequestPrivate
 * \brief The CreateLocationEfsRequestPrivate class provides private implementation for CreateLocationEfsRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a CreateLocationEfsRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
CreateLocationEfsRequestPrivate::CreateLocationEfsRequestPrivate(
    const DataSyncRequest::Action action, CreateLocationEfsRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLocationEfsRequest
 * class' copy constructor.
 */
CreateLocationEfsRequestPrivate::CreateLocationEfsRequestPrivate(
    const CreateLocationEfsRequestPrivate &other, CreateLocationEfsRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws
