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

#include "detachobjectrequest.h"
#include "detachobjectrequest_p.h"
#include "detachobjectresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::DetachObjectRequest
 * \brief The DetachObjectRequest class provides an interface for CloudDirectory DetachObject requests.
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
 * \sa CloudDirectoryClient::detachObject
 */

/*!
 * Constructs a copy of \a other.
 */
DetachObjectRequest::DetachObjectRequest(const DetachObjectRequest &other)
    : CloudDirectoryRequest(new DetachObjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DetachObjectRequest object.
 */
DetachObjectRequest::DetachObjectRequest()
    : CloudDirectoryRequest(new DetachObjectRequestPrivate(CloudDirectoryRequest::DetachObjectAction, this))
{

}

/*!
 * \reimp
 */
bool DetachObjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DetachObjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DetachObjectRequest::response(QNetworkReply * const reply) const
{
    return new DetachObjectResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::DetachObjectRequestPrivate
 * \brief The DetachObjectRequestPrivate class provides private implementation for DetachObjectRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a DetachObjectRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
DetachObjectRequestPrivate::DetachObjectRequestPrivate(
    const CloudDirectoryRequest::Action action, DetachObjectRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DetachObjectRequest
 * class' copy constructor.
 */
DetachObjectRequestPrivate::DetachObjectRequestPrivate(
    const DetachObjectRequestPrivate &other, DetachObjectRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
