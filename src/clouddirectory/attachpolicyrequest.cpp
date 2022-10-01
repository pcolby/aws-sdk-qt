// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "attachpolicyrequest.h"
#include "attachpolicyrequest_p.h"
#include "attachpolicyresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::AttachPolicyRequest
 * \brief The AttachPolicyRequest class provides an interface for CloudDirectory AttachPolicy requests.
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
 * \sa CloudDirectoryClient::attachPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
AttachPolicyRequest::AttachPolicyRequest(const AttachPolicyRequest &other)
    : CloudDirectoryRequest(new AttachPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AttachPolicyRequest object.
 */
AttachPolicyRequest::AttachPolicyRequest()
    : CloudDirectoryRequest(new AttachPolicyRequestPrivate(CloudDirectoryRequest::AttachPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool AttachPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AttachPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AttachPolicyRequest::response(QNetworkReply * const reply) const
{
    return new AttachPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::AttachPolicyRequestPrivate
 * \brief The AttachPolicyRequestPrivate class provides private implementation for AttachPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a AttachPolicyRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
AttachPolicyRequestPrivate::AttachPolicyRequestPrivate(
    const CloudDirectoryRequest::Action action, AttachPolicyRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AttachPolicyRequest
 * class' copy constructor.
 */
AttachPolicyRequestPrivate::AttachPolicyRequestPrivate(
    const AttachPolicyRequestPrivate &other, AttachPolicyRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
