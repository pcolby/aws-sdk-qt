// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtypedlinkfacetattributesrequest.h"
#include "listtypedlinkfacetattributesrequest_p.h"
#include "listtypedlinkfacetattributesresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ListTypedLinkFacetAttributesRequest
 * \brief The ListTypedLinkFacetAttributesRequest class provides an interface for CloudDirectory ListTypedLinkFacetAttributes requests.
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
 * \sa CloudDirectoryClient::listTypedLinkFacetAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
ListTypedLinkFacetAttributesRequest::ListTypedLinkFacetAttributesRequest(const ListTypedLinkFacetAttributesRequest &other)
    : CloudDirectoryRequest(new ListTypedLinkFacetAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTypedLinkFacetAttributesRequest object.
 */
ListTypedLinkFacetAttributesRequest::ListTypedLinkFacetAttributesRequest()
    : CloudDirectoryRequest(new ListTypedLinkFacetAttributesRequestPrivate(CloudDirectoryRequest::ListTypedLinkFacetAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool ListTypedLinkFacetAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTypedLinkFacetAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTypedLinkFacetAttributesRequest::response(QNetworkReply * const reply) const
{
    return new ListTypedLinkFacetAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::ListTypedLinkFacetAttributesRequestPrivate
 * \brief The ListTypedLinkFacetAttributesRequestPrivate class provides private implementation for ListTypedLinkFacetAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a ListTypedLinkFacetAttributesRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
ListTypedLinkFacetAttributesRequestPrivate::ListTypedLinkFacetAttributesRequestPrivate(
    const CloudDirectoryRequest::Action action, ListTypedLinkFacetAttributesRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTypedLinkFacetAttributesRequest
 * class' copy constructor.
 */
ListTypedLinkFacetAttributesRequestPrivate::ListTypedLinkFacetAttributesRequestPrivate(
    const ListTypedLinkFacetAttributesRequestPrivate &other, ListTypedLinkFacetAttributesRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
