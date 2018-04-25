/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  programmatically and includes detailed information on data types and errors. For information about AWS Directory
 *  Services features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 *  href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/what_is.html">AWS Directory Service Administration
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
