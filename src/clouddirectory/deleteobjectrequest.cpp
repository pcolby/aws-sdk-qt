// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteobjectrequest.h"
#include "deleteobjectrequest_p.h"
#include "deleteobjectresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::DeleteObjectRequest
 * \brief The DeleteObjectRequest class provides an interface for CloudDirectory DeleteObject requests.
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
 * \sa CloudDirectoryClient::deleteObject
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteObjectRequest::DeleteObjectRequest(const DeleteObjectRequest &other)
    : CloudDirectoryRequest(new DeleteObjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteObjectRequest object.
 */
DeleteObjectRequest::DeleteObjectRequest()
    : CloudDirectoryRequest(new DeleteObjectRequestPrivate(CloudDirectoryRequest::DeleteObjectAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteObjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteObjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteObjectRequest::response(QNetworkReply * const reply) const
{
    return new DeleteObjectResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::DeleteObjectRequestPrivate
 * \brief The DeleteObjectRequestPrivate class provides private implementation for DeleteObjectRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a DeleteObjectRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
DeleteObjectRequestPrivate::DeleteObjectRequestPrivate(
    const CloudDirectoryRequest::Action action, DeleteObjectRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteObjectRequest
 * class' copy constructor.
 */
DeleteObjectRequestPrivate::DeleteObjectRequestPrivate(
    const DeleteObjectRequestPrivate &other, DeleteObjectRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
