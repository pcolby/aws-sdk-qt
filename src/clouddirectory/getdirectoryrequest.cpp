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

#include "getdirectoryrequest.h"
#include "getdirectoryrequest_p.h"
#include "getdirectoryresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::GetDirectoryRequest
 * \brief The GetDirectoryRequest class provides an interface for CloudDirectory GetDirectory requests.
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
 * \sa CloudDirectoryClient::getDirectory
 */

/*!
 * Constructs a copy of \a other.
 */
GetDirectoryRequest::GetDirectoryRequest(const GetDirectoryRequest &other)
    : CloudDirectoryRequest(new GetDirectoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDirectoryRequest object.
 */
GetDirectoryRequest::GetDirectoryRequest()
    : CloudDirectoryRequest(new GetDirectoryRequestPrivate(CloudDirectoryRequest::GetDirectoryAction, this))
{

}

/*!
 * \reimp
 */
bool GetDirectoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDirectoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDirectoryRequest::response(QNetworkReply * const reply) const
{
    return new GetDirectoryResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::GetDirectoryRequestPrivate
 * \brief The GetDirectoryRequestPrivate class provides private implementation for GetDirectoryRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a GetDirectoryRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
GetDirectoryRequestPrivate::GetDirectoryRequestPrivate(
    const CloudDirectoryRequest::Action action, GetDirectoryRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDirectoryRequest
 * class' copy constructor.
 */
GetDirectoryRequestPrivate::GetDirectoryRequestPrivate(
    const GetDirectoryRequestPrivate &other, GetDirectoryRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
