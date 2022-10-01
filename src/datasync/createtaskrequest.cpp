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

#include "createtaskrequest.h"
#include "createtaskrequest_p.h"
#include "createtaskresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::CreateTaskRequest
 * \brief The CreateTaskRequest class provides an interface for DataSync CreateTask requests.
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
 * \sa DataSyncClient::createTask
 */

/*!
 * Constructs a copy of \a other.
 */
CreateTaskRequest::CreateTaskRequest(const CreateTaskRequest &other)
    : DataSyncRequest(new CreateTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateTaskRequest object.
 */
CreateTaskRequest::CreateTaskRequest()
    : DataSyncRequest(new CreateTaskRequestPrivate(DataSyncRequest::CreateTaskAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTaskRequest::response(QNetworkReply * const reply) const
{
    return new CreateTaskResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::CreateTaskRequestPrivate
 * \brief The CreateTaskRequestPrivate class provides private implementation for CreateTaskRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a CreateTaskRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
CreateTaskRequestPrivate::CreateTaskRequestPrivate(
    const DataSyncRequest::Action action, CreateTaskRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateTaskRequest
 * class' copy constructor.
 */
CreateTaskRequestPrivate::CreateTaskRequestPrivate(
    const CreateTaskRequestPrivate &other, CreateTaskRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws
