// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listobjectattributesrequest.h"
#include "listobjectattributesrequest_p.h"
#include "listobjectattributesresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ListObjectAttributesRequest
 * \brief The ListObjectAttributesRequest class provides an interface for CloudDirectory ListObjectAttributes requests.
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
 * \sa CloudDirectoryClient::listObjectAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
ListObjectAttributesRequest::ListObjectAttributesRequest(const ListObjectAttributesRequest &other)
    : CloudDirectoryRequest(new ListObjectAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListObjectAttributesRequest object.
 */
ListObjectAttributesRequest::ListObjectAttributesRequest()
    : CloudDirectoryRequest(new ListObjectAttributesRequestPrivate(CloudDirectoryRequest::ListObjectAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool ListObjectAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListObjectAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListObjectAttributesRequest::response(QNetworkReply * const reply) const
{
    return new ListObjectAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::ListObjectAttributesRequestPrivate
 * \brief The ListObjectAttributesRequestPrivate class provides private implementation for ListObjectAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a ListObjectAttributesRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
ListObjectAttributesRequestPrivate::ListObjectAttributesRequestPrivate(
    const CloudDirectoryRequest::Action action, ListObjectAttributesRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListObjectAttributesRequest
 * class' copy constructor.
 */
ListObjectAttributesRequestPrivate::ListObjectAttributesRequestPrivate(
    const ListObjectAttributesRequestPrivate &other, ListObjectAttributesRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
