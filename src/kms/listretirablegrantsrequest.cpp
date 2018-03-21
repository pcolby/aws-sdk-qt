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

#include "listretirablegrantsrequest.h"
#include "listretirablegrantsrequest_p.h"
#include "listretirablegrantsresponse.h"
#include "kmsrequest_p.h"

namespace AWS {
namespace KMS {

/**
 * @class  ListRetirableGrantsRequest
 *
 * @brief  Implements KMS ListRetirableGrants requests.
 *
 * @see    KMSClient::listRetirableGrants
 */

/**
 * @brief  Constructs a new ListRetirableGrantsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListRetirableGrantsResponse::ListRetirableGrantsResponse(

/**
 * @brief  Constructs a new ListRetirableGrantsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListRetirableGrantsRequest::ListRetirableGrantsRequest(const ListRetirableGrantsRequest &other)
    : KMSRequest(new ListRetirableGrantsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListRetirableGrantsRequest object.
 */
ListRetirableGrantsRequest::ListRetirableGrantsRequest()
    : KMSRequest(new ListRetirableGrantsRequestPrivate(KMSRequest::ListRetirableGrantsAction, this))
{

}

bool ListRetirableGrantsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListRetirableGrantsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListRetirableGrantsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KMSClient::send
 */
AwsAbstractResponse * ListRetirableGrantsRequest::response(QNetworkReply * const reply) const
{
    return new ListRetirableGrantsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListRetirableGrantsRequestPrivate
 *
 * @brief  Private implementation for ListRetirableGrantsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRetirableGrantsRequestPrivate object.
 *
 * @param  action  KMS action being performed.
 * @param  q       Pointer to this object's public ListRetirableGrantsRequest instance.
 */
ListRetirableGrantsRequestPrivate::ListRetirableGrantsRequestPrivate(
    const KMSRequest::Action action, ListRetirableGrantsRequest * const q)
    : ListRetirableGrantsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListRetirableGrantsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListRetirableGrantsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListRetirableGrantsRequest instance.
 */
ListRetirableGrantsRequestPrivate::ListRetirableGrantsRequestPrivate(
    const ListRetirableGrantsRequestPrivate &other, ListRetirableGrantsRequest * const q)
    : ListRetirableGrantsPrivate(other, q)
{

}

} // namespace KMS
} // namespace AWS
