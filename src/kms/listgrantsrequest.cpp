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

#include "listgrantsrequest.h"
#include "listgrantsrequest_p.h"
#include "listgrantsresponse.h"
#include "kmsrequest_p.h"

namespace AWS {
namespace KMS {

/**
 * @class  ListGrantsRequest
 *
 * @brief  Implements KMS ListGrants requests.
 *
 * @see    KMSClient::listGrants
 */

/**
 * @brief  Constructs a new ListGrantsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListGrantsResponse::ListGrantsResponse(

/**
 * @brief  Constructs a new ListGrantsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListGrantsRequest::ListGrantsRequest(const ListGrantsRequest &other)
    : KMSRequest(new ListGrantsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListGrantsRequest object.
 */
ListGrantsRequest::ListGrantsRequest()
    : KMSRequest(new ListGrantsRequestPrivate(KMSRequest::ListGrantsAction, this))
{

}

bool ListGrantsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListGrantsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListGrantsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KMSClient::send
 */
AwsAbstractResponse * ListGrantsRequest::response(QNetworkReply * const reply) const
{
    return new ListGrantsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListGrantsRequestPrivate
 *
 * @brief  Private implementation for ListGrantsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListGrantsRequestPrivate object.
 *
 * @param  action  KMS action being performed.
 * @param  q       Pointer to this object's public ListGrantsRequest instance.
 */
ListGrantsRequestPrivate::ListGrantsRequestPrivate(
    const KMSRequest::Action action, ListGrantsRequest * const q)
    : ListGrantsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListGrantsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListGrantsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListGrantsRequest instance.
 */
ListGrantsRequestPrivate::ListGrantsRequestPrivate(
    const ListGrantsRequestPrivate &other, ListGrantsRequest * const q)
    : ListGrantsPrivate(other, q)
{

}

} // namespace KMS
} // namespace AWS
