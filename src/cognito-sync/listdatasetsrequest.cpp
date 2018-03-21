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

#include "listdatasetsrequest.h"
#include "listdatasetsrequest_p.h"
#include "listdatasetsresponse.h"
#include "cognitosyncrequest_p.h"

namespace AWS {
namespace CognitoSync {

/**
 * @class  ListDatasetsRequest
 *
 * @brief  Implements CognitoSync ListDatasets requests.
 *
 * @see    CognitoSyncClient::listDatasets
 */

/**
 * @brief  Constructs a new ListDatasetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListDatasetsRequest::ListDatasetsRequest(const ListDatasetsRequest &other)
    : CognitoSyncRequest(new ListDatasetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListDatasetsRequest object.
 */
ListDatasetsRequest::ListDatasetsRequest()
    : CognitoSyncRequest(new ListDatasetsRequestPrivate(CognitoSyncRequest::ListDatasetsAction, this))
{

}

bool ListDatasetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListDatasetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListDatasetsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoSyncClient::send
 */
AwsAbstractResponse * ListDatasetsRequest::response(QNetworkReply * const reply) const
{
    return new ListDatasetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListDatasetsRequestPrivate
 *
 * @brief  Private implementation for ListDatasetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDatasetsRequestPrivate object.
 *
 * @param  action  CognitoSync action being performed.
 * @param  q       Pointer to this object's public ListDatasetsRequest instance.
 */
ListDatasetsRequestPrivate::ListDatasetsRequestPrivate(
    const CognitoSyncRequest::Action action, ListDatasetsRequest * const q)
    : ListDatasetsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListDatasetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListDatasetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListDatasetsRequest instance.
 */
ListDatasetsRequestPrivate::ListDatasetsRequestPrivate(
    const ListDatasetsRequestPrivate &other, ListDatasetsRequest * const q)
    : ListDatasetsPrivate(other, q)
{

}

} // namespace CognitoSync
} // namespace AWS
