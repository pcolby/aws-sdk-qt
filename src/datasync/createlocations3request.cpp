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

#include "createlocations3request.h"
#include "createlocations3request_p.h"
#include "createlocations3response.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::CreateLocationS3Request
 * \brief The CreateLocationS3Request class provides an interface for DataSync CreateLocationS3 requests.
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
 * \sa DataSyncClient::createLocationS3
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLocationS3Request::CreateLocationS3Request(const CreateLocationS3Request &other)
    : DataSyncRequest(new CreateLocationS3RequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLocationS3Request object.
 */
CreateLocationS3Request::CreateLocationS3Request()
    : DataSyncRequest(new CreateLocationS3RequestPrivate(DataSyncRequest::CreateLocationS3Action, this))
{

}

/*!
 * \reimp
 */
bool CreateLocationS3Request::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLocationS3Response object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLocationS3Request::response(QNetworkReply * const reply) const
{
    return new CreateLocationS3Response(*this, reply);
}

/*!
 * \class QtAws::DataSync::CreateLocationS3RequestPrivate
 * \brief The CreateLocationS3RequestPrivate class provides private implementation for CreateLocationS3Request.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a CreateLocationS3RequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
CreateLocationS3RequestPrivate::CreateLocationS3RequestPrivate(
    const DataSyncRequest::Action action, CreateLocationS3Request * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLocationS3Request
 * class' copy constructor.
 */
CreateLocationS3RequestPrivate::CreateLocationS3RequestPrivate(
    const CreateLocationS3RequestPrivate &other, CreateLocationS3Request * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws
