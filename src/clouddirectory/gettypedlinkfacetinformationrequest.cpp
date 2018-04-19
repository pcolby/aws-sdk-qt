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

#include "gettypedlinkfacetinformationrequest.h"
#include "gettypedlinkfacetinformationrequest_p.h"
#include "gettypedlinkfacetinformationresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::GetTypedLinkFacetInformationRequest
 * \brief The GetTypedLinkFacetInformationRequest class provides an interface for CloudDirectory GetTypedLinkFacetInformation requests.
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
 * \sa CloudDirectoryClient::getTypedLinkFacetInformation
 */

/*!
 * Constructs a copy of \a other.
 */
GetTypedLinkFacetInformationRequest::GetTypedLinkFacetInformationRequest(const GetTypedLinkFacetInformationRequest &other)
    : CloudDirectoryRequest(new GetTypedLinkFacetInformationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTypedLinkFacetInformationRequest object.
 */
GetTypedLinkFacetInformationRequest::GetTypedLinkFacetInformationRequest()
    : CloudDirectoryRequest(new GetTypedLinkFacetInformationRequestPrivate(CloudDirectoryRequest::GetTypedLinkFacetInformationAction, this))
{

}

/*!
 * \reimp
 */
bool GetTypedLinkFacetInformationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTypedLinkFacetInformationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTypedLinkFacetInformationRequest::response(QNetworkReply * const reply) const
{
    return new GetTypedLinkFacetInformationResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::GetTypedLinkFacetInformationRequestPrivate
 * \brief The GetTypedLinkFacetInformationRequestPrivate class provides private implementation for GetTypedLinkFacetInformationRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a GetTypedLinkFacetInformationRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
GetTypedLinkFacetInformationRequestPrivate::GetTypedLinkFacetInformationRequestPrivate(
    const CloudDirectoryRequest::Action action, GetTypedLinkFacetInformationRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTypedLinkFacetInformationRequest
 * class' copy constructor.
 */
GetTypedLinkFacetInformationRequestPrivate::GetTypedLinkFacetInformationRequestPrivate(
    const GetTypedLinkFacetInformationRequestPrivate &other, GetTypedLinkFacetInformationRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
