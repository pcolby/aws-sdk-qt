// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  programmatically and includes detailed information on data types and errors. For information about Cloud Directory
 *  features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 *  href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/what_is_cloud_directory.html">Amazon Cloud
 *  Directory Developer
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
