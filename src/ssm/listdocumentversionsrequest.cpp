/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listdocumentversionsrequest.h"
#include "listdocumentversionsrequest_p.h"
#include "listdocumentversionsresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  ListDocumentVersionsRequest
 *
 * @brief  Implements SSM ListDocumentVersions requests.
 *
 * @see    SSMClient::listDocumentVersions
 */

/**
 * @brief  Constructs a new ListDocumentVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDocumentVersionsResponse::ListDocumentVersionsResponse(

/**
 * @brief  Constructs a new ListDocumentVersionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListDocumentVersionsRequest::ListDocumentVersionsRequest(const ListDocumentVersionsRequest &other)
    : SSMRequest(new ListDocumentVersionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListDocumentVersionsRequest object.
 */
ListDocumentVersionsRequest::ListDocumentVersionsRequest()
    : SSMRequest(new ListDocumentVersionsRequestPrivate(SSMRequest::ListDocumentVersionsAction, this))
{

}

bool ListDocumentVersionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListDocumentVersionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListDocumentVersionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * ListDocumentVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListDocumentVersionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListDocumentVersionsRequestPrivate
 *
 * @brief  Private implementation for ListDocumentVersionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDocumentVersionsRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public ListDocumentVersionsRequest instance.
 */
ListDocumentVersionsRequestPrivate::ListDocumentVersionsRequestPrivate(
    const SSMRequest::Action action, ListDocumentVersionsRequest * const q)
    : ListDocumentVersionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListDocumentVersionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListDocumentVersionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListDocumentVersionsRequest instance.
 */
ListDocumentVersionsRequestPrivate::ListDocumentVersionsRequestPrivate(
    const ListDocumentVersionsRequestPrivate &other, ListDocumentVersionsRequest * const q)
    : ListDocumentVersionsPrivate(other, q)
{

}

} // namespace SSM
} // namespace AWS
