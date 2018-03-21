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

#include "listclustersrequest.h"
#include "listclustersrequest_p.h"
#include "listclustersresponse.h"
#include "emrrequest_p.h"

namespace AWS {
namespace EMR {

/**
 * @class  ListClustersRequest
 *
 * @brief  Implements EMR ListClusters requests.
 *
 * @see    EMRClient::listClusters
 */

/**
 * @brief  Constructs a new ListClustersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListClustersResponse::ListClustersResponse(

/**
 * @brief  Constructs a new ListClustersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListClustersRequest::ListClustersRequest(const ListClustersRequest &other)
    : EMRRequest(new ListClustersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListClustersRequest object.
 */
ListClustersRequest::ListClustersRequest()
    : EMRRequest(new ListClustersRequestPrivate(EMRRequest::ListClustersAction, this))
{

}

bool ListClustersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListClustersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListClustersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EMRClient::send
 */
AwsAbstractResponse * ListClustersRequest::response(QNetworkReply * const reply) const
{
    return new ListClustersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListClustersRequestPrivate
 *
 * @brief  Private implementation for ListClustersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListClustersRequestPrivate object.
 *
 * @param  action  EMR action being performed.
 * @param  q       Pointer to this object's public ListClustersRequest instance.
 */
ListClustersRequestPrivate::ListClustersRequestPrivate(
    const EMRRequest::Action action, ListClustersRequest * const q)
    : ListClustersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListClustersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListClustersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListClustersRequest instance.
 */
ListClustersRequestPrivate::ListClustersRequestPrivate(
    const ListClustersRequestPrivate &other, ListClustersRequest * const q)
    : ListClustersPrivate(other, q)
{

}

} // namespace EMR
} // namespace AWS
