// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateobjectattributesrequest.h"
#include "updateobjectattributesrequest_p.h"
#include "updateobjectattributesresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::UpdateObjectAttributesRequest
 * \brief The UpdateObjectAttributesRequest class provides an interface for CloudDirectory UpdateObjectAttributes requests.
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
 * \sa CloudDirectoryClient::updateObjectAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateObjectAttributesRequest::UpdateObjectAttributesRequest(const UpdateObjectAttributesRequest &other)
    : CloudDirectoryRequest(new UpdateObjectAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateObjectAttributesRequest object.
 */
UpdateObjectAttributesRequest::UpdateObjectAttributesRequest()
    : CloudDirectoryRequest(new UpdateObjectAttributesRequestPrivate(CloudDirectoryRequest::UpdateObjectAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateObjectAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateObjectAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateObjectAttributesRequest::response(QNetworkReply * const reply) const
{
    return new UpdateObjectAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::UpdateObjectAttributesRequestPrivate
 * \brief The UpdateObjectAttributesRequestPrivate class provides private implementation for UpdateObjectAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a UpdateObjectAttributesRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
UpdateObjectAttributesRequestPrivate::UpdateObjectAttributesRequestPrivate(
    const CloudDirectoryRequest::Action action, UpdateObjectAttributesRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateObjectAttributesRequest
 * class' copy constructor.
 */
UpdateObjectAttributesRequestPrivate::UpdateObjectAttributesRequestPrivate(
    const UpdateObjectAttributesRequestPrivate &other, UpdateObjectAttributesRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
