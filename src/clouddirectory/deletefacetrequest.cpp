/*
    Copyright 2013-2018 Paul Colby

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

#include "deletefacetrequest.h"
#include "deletefacetrequest_p.h"
#include "deletefacetresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::DeleteFacetRequest
 * \brief The DeleteFacetRequest class provides an interface for CloudDirectory DeleteFacet requests.
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
 * \sa CloudDirectoryClient::deleteFacet
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFacetRequest::DeleteFacetRequest(const DeleteFacetRequest &other)
    : CloudDirectoryRequest(new DeleteFacetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFacetRequest object.
 */
DeleteFacetRequest::DeleteFacetRequest()
    : CloudDirectoryRequest(new DeleteFacetRequestPrivate(CloudDirectoryRequest::DeleteFacetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFacetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFacetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFacetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFacetResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::DeleteFacetRequestPrivate
 * \brief The DeleteFacetRequestPrivate class provides private implementation for DeleteFacetRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a DeleteFacetRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
DeleteFacetRequestPrivate::DeleteFacetRequestPrivate(
    const CloudDirectoryRequest::Action action, DeleteFacetRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFacetRequest
 * class' copy constructor.
 */
DeleteFacetRequestPrivate::DeleteFacetRequestPrivate(
    const DeleteFacetRequestPrivate &other, DeleteFacetRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
