// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "attachtoindexrequest.h"
#include "attachtoindexrequest_p.h"
#include "attachtoindexresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::AttachToIndexRequest
 * \brief The AttachToIndexRequest class provides an interface for CloudDirectory AttachToIndex requests.
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
 * \sa CloudDirectoryClient::attachToIndex
 */

/*!
 * Constructs a copy of \a other.
 */
AttachToIndexRequest::AttachToIndexRequest(const AttachToIndexRequest &other)
    : CloudDirectoryRequest(new AttachToIndexRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AttachToIndexRequest object.
 */
AttachToIndexRequest::AttachToIndexRequest()
    : CloudDirectoryRequest(new AttachToIndexRequestPrivate(CloudDirectoryRequest::AttachToIndexAction, this))
{

}

/*!
 * \reimp
 */
bool AttachToIndexRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AttachToIndexResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AttachToIndexRequest::response(QNetworkReply * const reply) const
{
    return new AttachToIndexResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::AttachToIndexRequestPrivate
 * \brief The AttachToIndexRequestPrivate class provides private implementation for AttachToIndexRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a AttachToIndexRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
AttachToIndexRequestPrivate::AttachToIndexRequestPrivate(
    const CloudDirectoryRequest::Action action, AttachToIndexRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AttachToIndexRequest
 * class' copy constructor.
 */
AttachToIndexRequestPrivate::AttachToIndexRequestPrivate(
    const AttachToIndexRequestPrivate &other, AttachToIndexRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
