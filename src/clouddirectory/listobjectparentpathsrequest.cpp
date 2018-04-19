/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listobjectparentpathsrequest.h"
#include "listobjectparentpathsrequest_p.h"
#include "listobjectparentpathsresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ListObjectParentPathsRequest
 * \brief The ListObjectParentPathsRequest class provides an interface for CloudDirectory ListObjectParentPaths requests.
 *
 * \inmodule QtAwsCloudDirectory
 *
 *  <fullname>Amazon Cloud Directory</fullname>
 * 
 *  Amazon Cloud Directory is a component of the AWS Directory Service that simplifies the development and management of
 *  cloud-scale web, mobile, and IoT applications. This guide describes the Cloud Directory operations that you can call
 *  programmatically and includes detailed information on data types and errors. For information about AWS Directory
 *  Services features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 *  href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/what_is.html">AWS Directory Service Administration
 *
 * \sa CloudDirectoryClient::listObjectParentPaths
 */

/*!
 * Constructs a copy of \a other.
 */
ListObjectParentPathsRequest::ListObjectParentPathsRequest(const ListObjectParentPathsRequest &other)
    : CloudDirectoryRequest(new ListObjectParentPathsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListObjectParentPathsRequest object.
 */
ListObjectParentPathsRequest::ListObjectParentPathsRequest()
    : CloudDirectoryRequest(new ListObjectParentPathsRequestPrivate(CloudDirectoryRequest::ListObjectParentPathsAction, this))
{

}

/*!
 * \reimp
 */
bool ListObjectParentPathsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListObjectParentPathsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListObjectParentPathsRequest::response(QNetworkReply * const reply) const
{
    return new ListObjectParentPathsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::ListObjectParentPathsRequestPrivate
 * \brief The ListObjectParentPathsRequestPrivate class provides private implementation for ListObjectParentPathsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a ListObjectParentPathsRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
ListObjectParentPathsRequestPrivate::ListObjectParentPathsRequestPrivate(
    const CloudDirectoryRequest::Action action, ListObjectParentPathsRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListObjectParentPathsRequest
 * class' copy constructor.
 */
ListObjectParentPathsRequestPrivate::ListObjectParentPathsRequestPrivate(
    const ListObjectParentPathsRequestPrivate &other, ListObjectParentPathsRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
