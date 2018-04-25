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

#include "getobjectattributesrequest.h"
#include "getobjectattributesrequest_p.h"
#include "getobjectattributesresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::GetObjectAttributesRequest
 * \brief The GetObjectAttributesRequest class provides an interface for CloudDirectory GetObjectAttributes requests.
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
 * \sa CloudDirectoryClient::getObjectAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
GetObjectAttributesRequest::GetObjectAttributesRequest(const GetObjectAttributesRequest &other)
    : CloudDirectoryRequest(new GetObjectAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetObjectAttributesRequest object.
 */
GetObjectAttributesRequest::GetObjectAttributesRequest()
    : CloudDirectoryRequest(new GetObjectAttributesRequestPrivate(CloudDirectoryRequest::GetObjectAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool GetObjectAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetObjectAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetObjectAttributesRequest::response(QNetworkReply * const reply) const
{
    return new GetObjectAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::GetObjectAttributesRequestPrivate
 * \brief The GetObjectAttributesRequestPrivate class provides private implementation for GetObjectAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a GetObjectAttributesRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
GetObjectAttributesRequestPrivate::GetObjectAttributesRequestPrivate(
    const CloudDirectoryRequest::Action action, GetObjectAttributesRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetObjectAttributesRequest
 * class' copy constructor.
 */
GetObjectAttributesRequestPrivate::GetObjectAttributesRequestPrivate(
    const GetObjectAttributesRequestPrivate &other, GetObjectAttributesRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
