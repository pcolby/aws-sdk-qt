// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "attachobjectrequest.h"
#include "attachobjectrequest_p.h"
#include "attachobjectresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::AttachObjectRequest
 * \brief The AttachObjectRequest class provides an interface for CloudDirectory AttachObject requests.
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
 * \sa CloudDirectoryClient::attachObject
 */

/*!
 * Constructs a copy of \a other.
 */
AttachObjectRequest::AttachObjectRequest(const AttachObjectRequest &other)
    : CloudDirectoryRequest(new AttachObjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AttachObjectRequest object.
 */
AttachObjectRequest::AttachObjectRequest()
    : CloudDirectoryRequest(new AttachObjectRequestPrivate(CloudDirectoryRequest::AttachObjectAction, this))
{

}

/*!
 * \reimp
 */
bool AttachObjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AttachObjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AttachObjectRequest::response(QNetworkReply * const reply) const
{
    return new AttachObjectResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::AttachObjectRequestPrivate
 * \brief The AttachObjectRequestPrivate class provides private implementation for AttachObjectRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a AttachObjectRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
AttachObjectRequestPrivate::AttachObjectRequestPrivate(
    const CloudDirectoryRequest::Action action, AttachObjectRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AttachObjectRequest
 * class' copy constructor.
 */
AttachObjectRequestPrivate::AttachObjectRequestPrivate(
    const AttachObjectRequestPrivate &other, AttachObjectRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
