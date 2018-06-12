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

#include "getlinkattributesrequest.h"
#include "getlinkattributesrequest_p.h"
#include "getlinkattributesresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::GetLinkAttributesRequest
 * \brief The GetLinkAttributesRequest class provides an interface for CloudDirectory GetLinkAttributes requests.
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
 * \sa CloudDirectoryClient::getLinkAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
GetLinkAttributesRequest::GetLinkAttributesRequest(const GetLinkAttributesRequest &other)
    : CloudDirectoryRequest(new GetLinkAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLinkAttributesRequest object.
 */
GetLinkAttributesRequest::GetLinkAttributesRequest()
    : CloudDirectoryRequest(new GetLinkAttributesRequestPrivate(CloudDirectoryRequest::GetLinkAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool GetLinkAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLinkAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLinkAttributesRequest::response(QNetworkReply * const reply) const
{
    return new GetLinkAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::GetLinkAttributesRequestPrivate
 * \brief The GetLinkAttributesRequestPrivate class provides private implementation for GetLinkAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a GetLinkAttributesRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
GetLinkAttributesRequestPrivate::GetLinkAttributesRequestPrivate(
    const CloudDirectoryRequest::Action action, GetLinkAttributesRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLinkAttributesRequest
 * class' copy constructor.
 */
GetLinkAttributesRequestPrivate::GetLinkAttributesRequestPrivate(
    const GetLinkAttributesRequestPrivate &other, GetLinkAttributesRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
