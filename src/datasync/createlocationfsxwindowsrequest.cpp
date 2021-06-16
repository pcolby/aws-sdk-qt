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

#include "createlocationfsxwindowsrequest.h"
#include "createlocationfsxwindowsrequest_p.h"
#include "createlocationfsxwindowsresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::CreateLocationFsxWindowsRequest
 * \brief The CreateLocationFsxWindowsRequest class provides an interface for DataSync CreateLocationFsxWindows requests.
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
 * \sa DataSyncClient::createLocationFsxWindows
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLocationFsxWindowsRequest::CreateLocationFsxWindowsRequest(const CreateLocationFsxWindowsRequest &other)
    : DataSyncRequest(new CreateLocationFsxWindowsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLocationFsxWindowsRequest object.
 */
CreateLocationFsxWindowsRequest::CreateLocationFsxWindowsRequest()
    : DataSyncRequest(new CreateLocationFsxWindowsRequestPrivate(DataSyncRequest::CreateLocationFsxWindowsAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLocationFsxWindowsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLocationFsxWindowsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLocationFsxWindowsRequest::response(QNetworkReply * const reply) const
{
    return new CreateLocationFsxWindowsResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::CreateLocationFsxWindowsRequestPrivate
 * \brief The CreateLocationFsxWindowsRequestPrivate class provides private implementation for CreateLocationFsxWindowsRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a CreateLocationFsxWindowsRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
CreateLocationFsxWindowsRequestPrivate::CreateLocationFsxWindowsRequestPrivate(
    const DataSyncRequest::Action action, CreateLocationFsxWindowsRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLocationFsxWindowsRequest
 * class' copy constructor.
 */
CreateLocationFsxWindowsRequestPrivate::CreateLocationFsxWindowsRequestPrivate(
    const CreateLocationFsxWindowsRequestPrivate &other, CreateLocationFsxWindowsRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws
