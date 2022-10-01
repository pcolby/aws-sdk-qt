// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfacetnamesrequest.h"
#include "listfacetnamesrequest_p.h"
#include "listfacetnamesresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ListFacetNamesRequest
 * \brief The ListFacetNamesRequest class provides an interface for CloudDirectory ListFacetNames requests.
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
 * \sa CloudDirectoryClient::listFacetNames
 */

/*!
 * Constructs a copy of \a other.
 */
ListFacetNamesRequest::ListFacetNamesRequest(const ListFacetNamesRequest &other)
    : CloudDirectoryRequest(new ListFacetNamesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFacetNamesRequest object.
 */
ListFacetNamesRequest::ListFacetNamesRequest()
    : CloudDirectoryRequest(new ListFacetNamesRequestPrivate(CloudDirectoryRequest::ListFacetNamesAction, this))
{

}

/*!
 * \reimp
 */
bool ListFacetNamesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFacetNamesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFacetNamesRequest::response(QNetworkReply * const reply) const
{
    return new ListFacetNamesResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::ListFacetNamesRequestPrivate
 * \brief The ListFacetNamesRequestPrivate class provides private implementation for ListFacetNamesRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a ListFacetNamesRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
ListFacetNamesRequestPrivate::ListFacetNamesRequestPrivate(
    const CloudDirectoryRequest::Action action, ListFacetNamesRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFacetNamesRequest
 * class' copy constructor.
 */
ListFacetNamesRequestPrivate::ListFacetNamesRequestPrivate(
    const ListFacetNamesRequestPrivate &other, ListFacetNamesRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
