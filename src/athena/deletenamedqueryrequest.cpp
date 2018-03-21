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

#include "deletenamedqueryrequest.h"
#include "deletenamedqueryrequest_p.h"
#include "deletenamedqueryresponse.h"
#include "athenarequest_p.h"

namespace AWS {
namespace Athena {

/**
 * @class  DeleteNamedQueryRequest
 *
 * @brief  Implements Athena DeleteNamedQuery requests.
 *
 * @see    AthenaClient::deleteNamedQuery
 */

/**
 * @brief  Constructs a new DeleteNamedQueryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteNamedQueryRequest::DeleteNamedQueryRequest(const DeleteNamedQueryRequest &other)
    : AthenaRequest(new DeleteNamedQueryRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteNamedQueryRequest object.
 */
DeleteNamedQueryRequest::DeleteNamedQueryRequest()
    : AthenaRequest(new DeleteNamedQueryRequestPrivate(AthenaRequest::DeleteNamedQueryAction, this))
{

}

bool DeleteNamedQueryRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteNamedQueryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteNamedQueryResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AthenaClient::send
 */
AwsAbstractResponse * DeleteNamedQueryRequest::response(QNetworkReply * const reply) const
{
    return new DeleteNamedQueryResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteNamedQueryRequestPrivate
 *
 * @brief  Private implementation for DeleteNamedQueryRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteNamedQueryRequestPrivate object.
 *
 * @param  action  Athena action being performed.
 * @param  q       Pointer to this object's public DeleteNamedQueryRequest instance.
 */
DeleteNamedQueryRequestPrivate::DeleteNamedQueryRequestPrivate(
    const AthenaRequest::Action action, DeleteNamedQueryRequest * const q)
    : DeleteNamedQueryPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteNamedQueryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteNamedQueryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteNamedQueryRequest instance.
 */
DeleteNamedQueryRequestPrivate::DeleteNamedQueryRequestPrivate(
    const DeleteNamedQueryRequestPrivate &other, DeleteNamedQueryRequest * const q)
    : DeleteNamedQueryPrivate(other, q)
{

}

} // namespace Athena
} // namespace AWS
