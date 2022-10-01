// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatefacetrequest.h"
#include "updatefacetrequest_p.h"
#include "updatefacetresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::UpdateFacetRequest
 * \brief The UpdateFacetRequest class provides an interface for CloudDirectory UpdateFacet requests.
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
 * \sa CloudDirectoryClient::updateFacet
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFacetRequest::UpdateFacetRequest(const UpdateFacetRequest &other)
    : CloudDirectoryRequest(new UpdateFacetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFacetRequest object.
 */
UpdateFacetRequest::UpdateFacetRequest()
    : CloudDirectoryRequest(new UpdateFacetRequestPrivate(CloudDirectoryRequest::UpdateFacetAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFacetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFacetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFacetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFacetResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::UpdateFacetRequestPrivate
 * \brief The UpdateFacetRequestPrivate class provides private implementation for UpdateFacetRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a UpdateFacetRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
UpdateFacetRequestPrivate::UpdateFacetRequestPrivate(
    const CloudDirectoryRequest::Action action, UpdateFacetRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFacetRequest
 * class' copy constructor.
 */
UpdateFacetRequestPrivate::UpdateFacetRequestPrivate(
    const UpdateFacetRequestPrivate &other, UpdateFacetRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
