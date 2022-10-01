// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtypedlinkfacetnamesrequest.h"
#include "listtypedlinkfacetnamesrequest_p.h"
#include "listtypedlinkfacetnamesresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ListTypedLinkFacetNamesRequest
 * \brief The ListTypedLinkFacetNamesRequest class provides an interface for CloudDirectory ListTypedLinkFacetNames requests.
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
 * \sa CloudDirectoryClient::listTypedLinkFacetNames
 */

/*!
 * Constructs a copy of \a other.
 */
ListTypedLinkFacetNamesRequest::ListTypedLinkFacetNamesRequest(const ListTypedLinkFacetNamesRequest &other)
    : CloudDirectoryRequest(new ListTypedLinkFacetNamesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTypedLinkFacetNamesRequest object.
 */
ListTypedLinkFacetNamesRequest::ListTypedLinkFacetNamesRequest()
    : CloudDirectoryRequest(new ListTypedLinkFacetNamesRequestPrivate(CloudDirectoryRequest::ListTypedLinkFacetNamesAction, this))
{

}

/*!
 * \reimp
 */
bool ListTypedLinkFacetNamesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTypedLinkFacetNamesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTypedLinkFacetNamesRequest::response(QNetworkReply * const reply) const
{
    return new ListTypedLinkFacetNamesResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::ListTypedLinkFacetNamesRequestPrivate
 * \brief The ListTypedLinkFacetNamesRequestPrivate class provides private implementation for ListTypedLinkFacetNamesRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a ListTypedLinkFacetNamesRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
ListTypedLinkFacetNamesRequestPrivate::ListTypedLinkFacetNamesRequestPrivate(
    const CloudDirectoryRequest::Action action, ListTypedLinkFacetNamesRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTypedLinkFacetNamesRequest
 * class' copy constructor.
 */
ListTypedLinkFacetNamesRequestPrivate::ListTypedLinkFacetNamesRequestPrivate(
    const ListTypedLinkFacetNamesRequestPrivate &other, ListTypedLinkFacetNamesRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
