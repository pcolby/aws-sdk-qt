// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtypedlinkfacetrequest.h"
#include "createtypedlinkfacetrequest_p.h"
#include "createtypedlinkfacetresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::CreateTypedLinkFacetRequest
 * \brief The CreateTypedLinkFacetRequest class provides an interface for CloudDirectory CreateTypedLinkFacet requests.
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
 * \sa CloudDirectoryClient::createTypedLinkFacet
 */

/*!
 * Constructs a copy of \a other.
 */
CreateTypedLinkFacetRequest::CreateTypedLinkFacetRequest(const CreateTypedLinkFacetRequest &other)
    : CloudDirectoryRequest(new CreateTypedLinkFacetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateTypedLinkFacetRequest object.
 */
CreateTypedLinkFacetRequest::CreateTypedLinkFacetRequest()
    : CloudDirectoryRequest(new CreateTypedLinkFacetRequestPrivate(CloudDirectoryRequest::CreateTypedLinkFacetAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTypedLinkFacetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateTypedLinkFacetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTypedLinkFacetRequest::response(QNetworkReply * const reply) const
{
    return new CreateTypedLinkFacetResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::CreateTypedLinkFacetRequestPrivate
 * \brief The CreateTypedLinkFacetRequestPrivate class provides private implementation for CreateTypedLinkFacetRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a CreateTypedLinkFacetRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
CreateTypedLinkFacetRequestPrivate::CreateTypedLinkFacetRequestPrivate(
    const CloudDirectoryRequest::Action action, CreateTypedLinkFacetRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateTypedLinkFacetRequest
 * class' copy constructor.
 */
CreateTypedLinkFacetRequestPrivate::CreateTypedLinkFacetRequestPrivate(
    const CreateTypedLinkFacetRequestPrivate &other, CreateTypedLinkFacetRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
