// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedirectoryrequest.h"
#include "deletedirectoryrequest_p.h"
#include "deletedirectoryresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::DeleteDirectoryRequest
 * \brief The DeleteDirectoryRequest class provides an interface for CloudDirectory DeleteDirectory requests.
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
 * \sa CloudDirectoryClient::deleteDirectory
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDirectoryRequest::DeleteDirectoryRequest(const DeleteDirectoryRequest &other)
    : CloudDirectoryRequest(new DeleteDirectoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDirectoryRequest object.
 */
DeleteDirectoryRequest::DeleteDirectoryRequest()
    : CloudDirectoryRequest(new DeleteDirectoryRequestPrivate(CloudDirectoryRequest::DeleteDirectoryAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDirectoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDirectoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDirectoryRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDirectoryResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::DeleteDirectoryRequestPrivate
 * \brief The DeleteDirectoryRequestPrivate class provides private implementation for DeleteDirectoryRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a DeleteDirectoryRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
DeleteDirectoryRequestPrivate::DeleteDirectoryRequestPrivate(
    const CloudDirectoryRequest::Action action, DeleteDirectoryRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDirectoryRequest
 * class' copy constructor.
 */
DeleteDirectoryRequestPrivate::DeleteDirectoryRequestPrivate(
    const DeleteDirectoryRequestPrivate &other, DeleteDirectoryRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
