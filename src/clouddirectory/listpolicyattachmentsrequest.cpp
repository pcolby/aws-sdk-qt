// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpolicyattachmentsrequest.h"
#include "listpolicyattachmentsrequest_p.h"
#include "listpolicyattachmentsresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ListPolicyAttachmentsRequest
 * \brief The ListPolicyAttachmentsRequest class provides an interface for CloudDirectory ListPolicyAttachments requests.
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
 * \sa CloudDirectoryClient::listPolicyAttachments
 */

/*!
 * Constructs a copy of \a other.
 */
ListPolicyAttachmentsRequest::ListPolicyAttachmentsRequest(const ListPolicyAttachmentsRequest &other)
    : CloudDirectoryRequest(new ListPolicyAttachmentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPolicyAttachmentsRequest object.
 */
ListPolicyAttachmentsRequest::ListPolicyAttachmentsRequest()
    : CloudDirectoryRequest(new ListPolicyAttachmentsRequestPrivate(CloudDirectoryRequest::ListPolicyAttachmentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPolicyAttachmentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPolicyAttachmentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPolicyAttachmentsRequest::response(QNetworkReply * const reply) const
{
    return new ListPolicyAttachmentsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::ListPolicyAttachmentsRequestPrivate
 * \brief The ListPolicyAttachmentsRequestPrivate class provides private implementation for ListPolicyAttachmentsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a ListPolicyAttachmentsRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
ListPolicyAttachmentsRequestPrivate::ListPolicyAttachmentsRequestPrivate(
    const CloudDirectoryRequest::Action action, ListPolicyAttachmentsRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPolicyAttachmentsRequest
 * class' copy constructor.
 */
ListPolicyAttachmentsRequestPrivate::ListPolicyAttachmentsRequestPrivate(
    const ListPolicyAttachmentsRequestPrivate &other, ListPolicyAttachmentsRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
