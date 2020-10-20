/*
    Copyright 2013-2020 Paul Colby

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

#include "disabledirectoryrequest.h"
#include "disabledirectoryrequest_p.h"
#include "disabledirectoryresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::DisableDirectoryRequest
 * \brief The DisableDirectoryRequest class provides an interface for CloudDirectory DisableDirectory requests.
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
 * \sa CloudDirectoryClient::disableDirectory
 */

/*!
 * Constructs a copy of \a other.
 */
DisableDirectoryRequest::DisableDirectoryRequest(const DisableDirectoryRequest &other)
    : CloudDirectoryRequest(new DisableDirectoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisableDirectoryRequest object.
 */
DisableDirectoryRequest::DisableDirectoryRequest()
    : CloudDirectoryRequest(new DisableDirectoryRequestPrivate(CloudDirectoryRequest::DisableDirectoryAction, this))
{

}

/*!
 * \reimp
 */
bool DisableDirectoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisableDirectoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisableDirectoryRequest::response(QNetworkReply * const reply) const
{
    return new DisableDirectoryResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::DisableDirectoryRequestPrivate
 * \brief The DisableDirectoryRequestPrivate class provides private implementation for DisableDirectoryRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a DisableDirectoryRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
DisableDirectoryRequestPrivate::DisableDirectoryRequestPrivate(
    const CloudDirectoryRequest::Action action, DisableDirectoryRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisableDirectoryRequest
 * class' copy constructor.
 */
DisableDirectoryRequestPrivate::DisableDirectoryRequestPrivate(
    const DisableDirectoryRequestPrivate &other, DisableDirectoryRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
