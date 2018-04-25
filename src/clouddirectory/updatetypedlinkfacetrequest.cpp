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

#include "updatetypedlinkfacetrequest.h"
#include "updatetypedlinkfacetrequest_p.h"
#include "updatetypedlinkfacetresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::UpdateTypedLinkFacetRequest
 * \brief The UpdateTypedLinkFacetRequest class provides an interface for CloudDirectory UpdateTypedLinkFacet requests.
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
 * \sa CloudDirectoryClient::updateTypedLinkFacet
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateTypedLinkFacetRequest::UpdateTypedLinkFacetRequest(const UpdateTypedLinkFacetRequest &other)
    : CloudDirectoryRequest(new UpdateTypedLinkFacetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateTypedLinkFacetRequest object.
 */
UpdateTypedLinkFacetRequest::UpdateTypedLinkFacetRequest()
    : CloudDirectoryRequest(new UpdateTypedLinkFacetRequestPrivate(CloudDirectoryRequest::UpdateTypedLinkFacetAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateTypedLinkFacetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateTypedLinkFacetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateTypedLinkFacetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTypedLinkFacetResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::UpdateTypedLinkFacetRequestPrivate
 * \brief The UpdateTypedLinkFacetRequestPrivate class provides private implementation for UpdateTypedLinkFacetRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a UpdateTypedLinkFacetRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
UpdateTypedLinkFacetRequestPrivate::UpdateTypedLinkFacetRequestPrivate(
    const CloudDirectoryRequest::Action action, UpdateTypedLinkFacetRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateTypedLinkFacetRequest
 * class' copy constructor.
 */
UpdateTypedLinkFacetRequestPrivate::UpdateTypedLinkFacetRequestPrivate(
    const UpdateTypedLinkFacetRequestPrivate &other, UpdateTypedLinkFacetRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
