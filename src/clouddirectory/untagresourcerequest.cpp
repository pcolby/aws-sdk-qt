// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "untagresourcerequest.h"
#include "untagresourcerequest_p.h"
#include "untagresourceresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::UntagResourceRequest
 * \brief The UntagResourceRequest class provides an interface for CloudDirectory UntagResource requests.
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
 * \sa CloudDirectoryClient::untagResource
 */

/*!
 * Constructs a copy of \a other.
 */
UntagResourceRequest::UntagResourceRequest(const UntagResourceRequest &other)
    : CloudDirectoryRequest(new UntagResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UntagResourceRequest object.
 */
UntagResourceRequest::UntagResourceRequest()
    : CloudDirectoryRequest(new UntagResourceRequestPrivate(CloudDirectoryRequest::UntagResourceAction, this))
{

}

/*!
 * \reimp
 */
bool UntagResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UntagResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UntagResourceRequest::response(QNetworkReply * const reply) const
{
    return new UntagResourceResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::UntagResourceRequestPrivate
 * \brief The UntagResourceRequestPrivate class provides private implementation for UntagResourceRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a UntagResourceRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
UntagResourceRequestPrivate::UntagResourceRequestPrivate(
    const CloudDirectoryRequest::Action action, UntagResourceRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UntagResourceRequest
 * class' copy constructor.
 */
UntagResourceRequestPrivate::UntagResourceRequestPrivate(
    const UntagResourceRequestPrivate &other, UntagResourceRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
