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

#include "deletelocationrequest.h"
#include "deletelocationrequest_p.h"
#include "deletelocationresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DeleteLocationRequest
 * \brief The DeleteLocationRequest class provides an interface for DataSync DeleteLocation requests.
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
 * \sa DataSyncClient::deleteLocation
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLocationRequest::DeleteLocationRequest(const DeleteLocationRequest &other)
    : DataSyncRequest(new DeleteLocationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLocationRequest object.
 */
DeleteLocationRequest::DeleteLocationRequest()
    : DataSyncRequest(new DeleteLocationRequestPrivate(DataSyncRequest::DeleteLocationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLocationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLocationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLocationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLocationResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::DeleteLocationRequestPrivate
 * \brief The DeleteLocationRequestPrivate class provides private implementation for DeleteLocationRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DeleteLocationRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
DeleteLocationRequestPrivate::DeleteLocationRequestPrivate(
    const DataSyncRequest::Action action, DeleteLocationRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLocationRequest
 * class' copy constructor.
 */
DeleteLocationRequestPrivate::DeleteLocationRequestPrivate(
    const DeleteLocationRequestPrivate &other, DeleteLocationRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws
