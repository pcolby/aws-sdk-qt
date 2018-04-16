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

#include "listobjectparentsrequest.h"
#include "listobjectparentsrequest_p.h"
#include "listobjectparentsresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ListObjectParentsRequest
 *
 * \brief The ListObjectParentsRequest class provides an interface for CloudDirectory ListObjectParents requests.
 *
 * \ingroup CloudDirectory
 *
 *  <fullname>Amazon Cloud Directory</fullname>
 * 
 *  Amazon Cloud Directory is a component of the AWS Directory Service that simplifies the development and management of
 *  cloud-scale web, mobile, and IoT applications. This guide describes the Cloud Directory operations that you can call
 *  programmatically and includes detailed information on data types and errors. For information about AWS Directory
 *  Services features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 *  href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/what_is.html">AWS Directory Service Administration
 *
 * \sa CloudDirectoryClient::listObjectParents
 */

/*!
 * @brief  Constructs a new ListObjectParentsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListObjectParentsRequest::ListObjectParentsRequest(const ListObjectParentsRequest &other)
    : CloudDirectoryRequest(new ListObjectParentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListObjectParentsRequest object.
 */
ListObjectParentsRequest::ListObjectParentsRequest()
    : CloudDirectoryRequest(new ListObjectParentsRequestPrivate(CloudDirectoryRequest::ListObjectParentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListObjectParentsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListObjectParentsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListObjectParentsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
QtAws::Core::AwsAbstractResponse * ListObjectParentsRequest::response(QNetworkReply * const reply) const
{
    return new ListObjectParentsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListObjectParentsRequestPrivate
 *
 * @brief  Private implementation for ListObjectParentsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListObjectParentsRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public ListObjectParentsRequest instance.
 */
ListObjectParentsRequestPrivate::ListObjectParentsRequestPrivate(
    const CloudDirectoryRequest::Action action, ListObjectParentsRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListObjectParentsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListObjectParentsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListObjectParentsRequest instance.
 */
ListObjectParentsRequestPrivate::ListObjectParentsRequestPrivate(
    const ListObjectParentsRequestPrivate &other, ListObjectParentsRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
