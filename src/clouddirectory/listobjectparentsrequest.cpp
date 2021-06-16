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

#include "listobjectparentsrequest.h"
#include "listobjectparentsrequest_p.h"
#include "listobjectparentsresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ListObjectParentsRequest
 * \brief The ListObjectParentsRequest class provides an interface for CloudDirectory ListObjectParents requests.
 *
 * \inmodule QtAwsCloudDirectory
 *
 *  <fullname>Amazon Cloud Directory</fullname>
 * 
 *  Amazon Cloud Directory is a component of the AWS Directory Service that simplifies the development and management of
 *  cloud-scale web, mobile, and IoT applications. This guide describes the Cloud Directory operations that you can call
 *  programmatically and includes detailed information on data types and errors. For information about Cloud Directory
 *  features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 *  href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/what_is_cloud_directory.html">Amazon Cloud
 *  Directory Developer
 *
 * \sa CloudDirectoryClient::listObjectParents
 */

/*!
 * Constructs a copy of \a other.
 */
ListObjectParentsRequest::ListObjectParentsRequest(const ListObjectParentsRequest &other)
    : CloudDirectoryRequest(new ListObjectParentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListObjectParentsRequest object.
 */
ListObjectParentsRequest::ListObjectParentsRequest()
    : CloudDirectoryRequest(new ListObjectParentsRequestPrivate(CloudDirectoryRequest::ListObjectParentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListObjectParentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListObjectParentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListObjectParentsRequest::response(QNetworkReply * const reply) const
{
    return new ListObjectParentsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::ListObjectParentsRequestPrivate
 * \brief The ListObjectParentsRequestPrivate class provides private implementation for ListObjectParentsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a ListObjectParentsRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
ListObjectParentsRequestPrivate::ListObjectParentsRequestPrivate(
    const CloudDirectoryRequest::Action action, ListObjectParentsRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListObjectParentsRequest
 * class' copy constructor.
 */
ListObjectParentsRequestPrivate::ListObjectParentsRequestPrivate(
    const ListObjectParentsRequestPrivate &other, ListObjectParentsRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
