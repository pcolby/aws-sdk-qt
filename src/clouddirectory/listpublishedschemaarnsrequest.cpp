// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpublishedschemaarnsrequest.h"
#include "listpublishedschemaarnsrequest_p.h"
#include "listpublishedschemaarnsresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ListPublishedSchemaArnsRequest
 * \brief The ListPublishedSchemaArnsRequest class provides an interface for CloudDirectory ListPublishedSchemaArns requests.
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
 * \sa CloudDirectoryClient::listPublishedSchemaArns
 */

/*!
 * Constructs a copy of \a other.
 */
ListPublishedSchemaArnsRequest::ListPublishedSchemaArnsRequest(const ListPublishedSchemaArnsRequest &other)
    : CloudDirectoryRequest(new ListPublishedSchemaArnsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPublishedSchemaArnsRequest object.
 */
ListPublishedSchemaArnsRequest::ListPublishedSchemaArnsRequest()
    : CloudDirectoryRequest(new ListPublishedSchemaArnsRequestPrivate(CloudDirectoryRequest::ListPublishedSchemaArnsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPublishedSchemaArnsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPublishedSchemaArnsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPublishedSchemaArnsRequest::response(QNetworkReply * const reply) const
{
    return new ListPublishedSchemaArnsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::ListPublishedSchemaArnsRequestPrivate
 * \brief The ListPublishedSchemaArnsRequestPrivate class provides private implementation for ListPublishedSchemaArnsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a ListPublishedSchemaArnsRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
ListPublishedSchemaArnsRequestPrivate::ListPublishedSchemaArnsRequestPrivate(
    const CloudDirectoryRequest::Action action, ListPublishedSchemaArnsRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPublishedSchemaArnsRequest
 * class' copy constructor.
 */
ListPublishedSchemaArnsRequestPrivate::ListPublishedSchemaArnsRequestPrivate(
    const ListPublishedSchemaArnsRequestPrivate &other, ListPublishedSchemaArnsRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
