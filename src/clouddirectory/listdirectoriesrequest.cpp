// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdirectoriesrequest.h"
#include "listdirectoriesrequest_p.h"
#include "listdirectoriesresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ListDirectoriesRequest
 * \brief The ListDirectoriesRequest class provides an interface for CloudDirectory ListDirectories requests.
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
 * \sa CloudDirectoryClient::listDirectories
 */

/*!
 * Constructs a copy of \a other.
 */
ListDirectoriesRequest::ListDirectoriesRequest(const ListDirectoriesRequest &other)
    : CloudDirectoryRequest(new ListDirectoriesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDirectoriesRequest object.
 */
ListDirectoriesRequest::ListDirectoriesRequest()
    : CloudDirectoryRequest(new ListDirectoriesRequestPrivate(CloudDirectoryRequest::ListDirectoriesAction, this))
{

}

/*!
 * \reimp
 */
bool ListDirectoriesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDirectoriesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDirectoriesRequest::response(QNetworkReply * const reply) const
{
    return new ListDirectoriesResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::ListDirectoriesRequestPrivate
 * \brief The ListDirectoriesRequestPrivate class provides private implementation for ListDirectoriesRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a ListDirectoriesRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
ListDirectoriesRequestPrivate::ListDirectoriesRequestPrivate(
    const CloudDirectoryRequest::Action action, ListDirectoriesRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDirectoriesRequest
 * class' copy constructor.
 */
ListDirectoriesRequestPrivate::ListDirectoriesRequestPrivate(
    const ListDirectoriesRequestPrivate &other, ListDirectoriesRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
