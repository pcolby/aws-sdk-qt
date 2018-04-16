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

#include "listfacetattributesrequest.h"
#include "listfacetattributesrequest_p.h"
#include "listfacetattributesresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ListFacetAttributesRequest
 *
 * \brief The ListFacetAttributesRequest class encapsulates CloudDirectory ListFacetAttributes requests.
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
 * \sa CloudDirectoryClient::listFacetAttributes
 */

/*!
 * @brief  Constructs a new ListFacetAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListFacetAttributesRequest::ListFacetAttributesRequest(const ListFacetAttributesRequest &other)
    : CloudDirectoryRequest(new ListFacetAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListFacetAttributesRequest object.
 */
ListFacetAttributesRequest::ListFacetAttributesRequest()
    : CloudDirectoryRequest(new ListFacetAttributesRequestPrivate(CloudDirectoryRequest::ListFacetAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool ListFacetAttributesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListFacetAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListFacetAttributesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFacetAttributesRequest::response(QNetworkReply * const reply) const
{
    return new ListFacetAttributesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListFacetAttributesRequestPrivate
 *
 * @brief  Private implementation for ListFacetAttributesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListFacetAttributesRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public ListFacetAttributesRequest instance.
 */
ListFacetAttributesRequestPrivate::ListFacetAttributesRequestPrivate(
    const CloudDirectoryRequest::Action action, ListFacetAttributesRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListFacetAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListFacetAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListFacetAttributesRequest instance.
 */
ListFacetAttributesRequestPrivate::ListFacetAttributesRequestPrivate(
    const ListFacetAttributesRequestPrivate &other, ListFacetAttributesRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
