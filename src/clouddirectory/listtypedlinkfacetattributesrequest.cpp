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

#include "listtypedlinkfacetattributesrequest.h"
#include "listtypedlinkfacetattributesrequest_p.h"
#include "listtypedlinkfacetattributesresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ListTypedLinkFacetAttributesRequest
 *
 * \brief The ListTypedLinkFacetAttributesRequest class provides an interface for CloudDirectory ListTypedLinkFacetAttributes requests.
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
 * \sa CloudDirectoryClient::listTypedLinkFacetAttributes
 */

/*!
 * @brief  Constructs a new ListTypedLinkFacetAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTypedLinkFacetAttributesRequest::ListTypedLinkFacetAttributesRequest(const ListTypedLinkFacetAttributesRequest &other)
    : CloudDirectoryRequest(new ListTypedLinkFacetAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListTypedLinkFacetAttributesRequest object.
 */
ListTypedLinkFacetAttributesRequest::ListTypedLinkFacetAttributesRequest()
    : CloudDirectoryRequest(new ListTypedLinkFacetAttributesRequestPrivate(CloudDirectoryRequest::ListTypedLinkFacetAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool ListTypedLinkFacetAttributesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListTypedLinkFacetAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTypedLinkFacetAttributesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTypedLinkFacetAttributesRequest::response(QNetworkReply * const reply) const
{
    return new ListTypedLinkFacetAttributesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListTypedLinkFacetAttributesRequestPrivate
 *
 * @brief  Private implementation for ListTypedLinkFacetAttributesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListTypedLinkFacetAttributesRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public ListTypedLinkFacetAttributesRequest instance.
 */
ListTypedLinkFacetAttributesRequestPrivate::ListTypedLinkFacetAttributesRequestPrivate(
    const CloudDirectoryRequest::Action action, ListTypedLinkFacetAttributesRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListTypedLinkFacetAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTypedLinkFacetAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTypedLinkFacetAttributesRequest instance.
 */
ListTypedLinkFacetAttributesRequestPrivate::ListTypedLinkFacetAttributesRequestPrivate(
    const ListTypedLinkFacetAttributesRequestPrivate &other, ListTypedLinkFacetAttributesRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
