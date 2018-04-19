/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  programmatically and includes detailed information on data types and errors. For information about AWS Directory
 *  Services features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 *  href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/what_is.html">AWS Directory Service Administration
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
