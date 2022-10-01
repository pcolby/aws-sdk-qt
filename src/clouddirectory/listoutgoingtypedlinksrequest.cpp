// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listoutgoingtypedlinksrequest.h"
#include "listoutgoingtypedlinksrequest_p.h"
#include "listoutgoingtypedlinksresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ListOutgoingTypedLinksRequest
 * \brief The ListOutgoingTypedLinksRequest class provides an interface for CloudDirectory ListOutgoingTypedLinks requests.
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
 * \sa CloudDirectoryClient::listOutgoingTypedLinks
 */

/*!
 * Constructs a copy of \a other.
 */
ListOutgoingTypedLinksRequest::ListOutgoingTypedLinksRequest(const ListOutgoingTypedLinksRequest &other)
    : CloudDirectoryRequest(new ListOutgoingTypedLinksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListOutgoingTypedLinksRequest object.
 */
ListOutgoingTypedLinksRequest::ListOutgoingTypedLinksRequest()
    : CloudDirectoryRequest(new ListOutgoingTypedLinksRequestPrivate(CloudDirectoryRequest::ListOutgoingTypedLinksAction, this))
{

}

/*!
 * \reimp
 */
bool ListOutgoingTypedLinksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListOutgoingTypedLinksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListOutgoingTypedLinksRequest::response(QNetworkReply * const reply) const
{
    return new ListOutgoingTypedLinksResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::ListOutgoingTypedLinksRequestPrivate
 * \brief The ListOutgoingTypedLinksRequestPrivate class provides private implementation for ListOutgoingTypedLinksRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a ListOutgoingTypedLinksRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
ListOutgoingTypedLinksRequestPrivate::ListOutgoingTypedLinksRequestPrivate(
    const CloudDirectoryRequest::Action action, ListOutgoingTypedLinksRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListOutgoingTypedLinksRequest
 * class' copy constructor.
 */
ListOutgoingTypedLinksRequestPrivate::ListOutgoingTypedLinksRequestPrivate(
    const ListOutgoingTypedLinksRequestPrivate &other, ListOutgoingTypedLinksRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
