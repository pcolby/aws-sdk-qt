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

#include "publishschemarequest.h"
#include "publishschemarequest_p.h"
#include "publishschemaresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::PublishSchemaRequest
 * \brief The PublishSchemaRequest class provides an interface for CloudDirectory PublishSchema requests.
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
 * \sa CloudDirectoryClient::publishSchema
 */

/*!
 * Constructs a copy of \a other.
 */
PublishSchemaRequest::PublishSchemaRequest(const PublishSchemaRequest &other)
    : CloudDirectoryRequest(new PublishSchemaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PublishSchemaRequest object.
 */
PublishSchemaRequest::PublishSchemaRequest()
    : CloudDirectoryRequest(new PublishSchemaRequestPrivate(CloudDirectoryRequest::PublishSchemaAction, this))
{

}

/*!
 * \reimp
 */
bool PublishSchemaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PublishSchemaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PublishSchemaRequest::response(QNetworkReply * const reply) const
{
    return new PublishSchemaResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::PublishSchemaRequestPrivate
 * \brief The PublishSchemaRequestPrivate class provides private implementation for PublishSchemaRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a PublishSchemaRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
PublishSchemaRequestPrivate::PublishSchemaRequestPrivate(
    const CloudDirectoryRequest::Action action, PublishSchemaRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PublishSchemaRequest
 * class' copy constructor.
 */
PublishSchemaRequestPrivate::PublishSchemaRequestPrivate(
    const PublishSchemaRequestPrivate &other, PublishSchemaRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
