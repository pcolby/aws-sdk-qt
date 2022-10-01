// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "attachtypedlinkrequest.h"
#include "attachtypedlinkrequest_p.h"
#include "attachtypedlinkresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::AttachTypedLinkRequest
 * \brief The AttachTypedLinkRequest class provides an interface for CloudDirectory AttachTypedLink requests.
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
 * \sa CloudDirectoryClient::attachTypedLink
 */

/*!
 * Constructs a copy of \a other.
 */
AttachTypedLinkRequest::AttachTypedLinkRequest(const AttachTypedLinkRequest &other)
    : CloudDirectoryRequest(new AttachTypedLinkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AttachTypedLinkRequest object.
 */
AttachTypedLinkRequest::AttachTypedLinkRequest()
    : CloudDirectoryRequest(new AttachTypedLinkRequestPrivate(CloudDirectoryRequest::AttachTypedLinkAction, this))
{

}

/*!
 * \reimp
 */
bool AttachTypedLinkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AttachTypedLinkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AttachTypedLinkRequest::response(QNetworkReply * const reply) const
{
    return new AttachTypedLinkResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::AttachTypedLinkRequestPrivate
 * \brief The AttachTypedLinkRequestPrivate class provides private implementation for AttachTypedLinkRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a AttachTypedLinkRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
AttachTypedLinkRequestPrivate::AttachTypedLinkRequestPrivate(
    const CloudDirectoryRequest::Action action, AttachTypedLinkRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AttachTypedLinkRequest
 * class' copy constructor.
 */
AttachTypedLinkRequestPrivate::AttachTypedLinkRequestPrivate(
    const AttachTypedLinkRequestPrivate &other, AttachTypedLinkRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
