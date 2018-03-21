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

#include "deletedatasourcerequest.h"
#include "deletedatasourcerequest_p.h"
#include "deletedatasourceresponse.h"
#include "machinelearningrequest_p.h"

namespace AWS {
namespace MachineLearning {

/**
 * @class  DeleteDataSourceRequest
 *
 * @brief  Implements MachineLearning DeleteDataSource requests.
 *
 * @see    MachineLearningClient::deleteDataSource
 */

/**
 * @brief  Constructs a new DeleteDataSourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDataSourceRequest::DeleteDataSourceRequest(const DeleteDataSourceRequest &other)
    : MachineLearningRequest(new DeleteDataSourceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteDataSourceRequest object.
 */
DeleteDataSourceRequest::DeleteDataSourceRequest()
    : MachineLearningRequest(new DeleteDataSourceRequestPrivate(MachineLearningRequest::DeleteDataSourceAction, this))
{

}

bool DeleteDataSourceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteDataSourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDataSourceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MachineLearningClient::send
 */
AwsAbstractResponse * DeleteDataSourceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDataSourceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteDataSourceRequestPrivate
 *
 * @brief  Private implementation for DeleteDataSourceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDataSourceRequestPrivate object.
 *
 * @param  action  MachineLearning action being performed.
 * @param  q       Pointer to this object's public DeleteDataSourceRequest instance.
 */
DeleteDataSourceRequestPrivate::DeleteDataSourceRequestPrivate(
    const MachineLearningRequest::Action action, DeleteDataSourceRequest * const q)
    : DeleteDataSourcePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDataSourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDataSourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDataSourceRequest instance.
 */
DeleteDataSourceRequestPrivate::DeleteDataSourceRequestPrivate(
    const DeleteDataSourceRequestPrivate &other, DeleteDataSourceRequest * const q)
    : DeleteDataSourcePrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace AWS
