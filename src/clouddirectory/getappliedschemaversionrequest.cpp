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

#include "getappliedschemaversionrequest.h"
#include "getappliedschemaversionrequest_p.h"
#include "getappliedschemaversionresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::GetAppliedSchemaVersionRequest
 * \brief The GetAppliedSchemaVersionRequest class provides an interface for CloudDirectory GetAppliedSchemaVersion requests.
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
 * \sa CloudDirectoryClient::getAppliedSchemaVersion
 */

/*!
 * Constructs a copy of \a other.
 */
GetAppliedSchemaVersionRequest::GetAppliedSchemaVersionRequest(const GetAppliedSchemaVersionRequest &other)
    : CloudDirectoryRequest(new GetAppliedSchemaVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAppliedSchemaVersionRequest object.
 */
GetAppliedSchemaVersionRequest::GetAppliedSchemaVersionRequest()
    : CloudDirectoryRequest(new GetAppliedSchemaVersionRequestPrivate(CloudDirectoryRequest::GetAppliedSchemaVersionAction, this))
{

}

/*!
 * \reimp
 */
bool GetAppliedSchemaVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAppliedSchemaVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAppliedSchemaVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetAppliedSchemaVersionResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::GetAppliedSchemaVersionRequestPrivate
 * \brief The GetAppliedSchemaVersionRequestPrivate class provides private implementation for GetAppliedSchemaVersionRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a GetAppliedSchemaVersionRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
GetAppliedSchemaVersionRequestPrivate::GetAppliedSchemaVersionRequestPrivate(
    const CloudDirectoryRequest::Action action, GetAppliedSchemaVersionRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAppliedSchemaVersionRequest
 * class' copy constructor.
 */
GetAppliedSchemaVersionRequestPrivate::GetAppliedSchemaVersionRequestPrivate(
    const GetAppliedSchemaVersionRequestPrivate &other, GetAppliedSchemaVersionRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
