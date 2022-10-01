// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listincomingtypedlinksrequest.h"
#include "listincomingtypedlinksrequest_p.h"
#include "listincomingtypedlinksresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ListIncomingTypedLinksRequest
 * \brief The ListIncomingTypedLinksRequest class provides an interface for CloudDirectory ListIncomingTypedLinks requests.
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
 * \sa CloudDirectoryClient::listIncomingTypedLinks
 */

/*!
 * Constructs a copy of \a other.
 */
ListIncomingTypedLinksRequest::ListIncomingTypedLinksRequest(const ListIncomingTypedLinksRequest &other)
    : CloudDirectoryRequest(new ListIncomingTypedLinksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListIncomingTypedLinksRequest object.
 */
ListIncomingTypedLinksRequest::ListIncomingTypedLinksRequest()
    : CloudDirectoryRequest(new ListIncomingTypedLinksRequestPrivate(CloudDirectoryRequest::ListIncomingTypedLinksAction, this))
{

}

/*!
 * \reimp
 */
bool ListIncomingTypedLinksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListIncomingTypedLinksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListIncomingTypedLinksRequest::response(QNetworkReply * const reply) const
{
    return new ListIncomingTypedLinksResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::ListIncomingTypedLinksRequestPrivate
 * \brief The ListIncomingTypedLinksRequestPrivate class provides private implementation for ListIncomingTypedLinksRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a ListIncomingTypedLinksRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
ListIncomingTypedLinksRequestPrivate::ListIncomingTypedLinksRequestPrivate(
    const CloudDirectoryRequest::Action action, ListIncomingTypedLinksRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListIncomingTypedLinksRequest
 * class' copy constructor.
 */
ListIncomingTypedLinksRequestPrivate::ListIncomingTypedLinksRequestPrivate(
    const ListIncomingTypedLinksRequestPrivate &other, ListIncomingTypedLinksRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
