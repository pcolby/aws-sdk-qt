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

#include "getdatasourcerequest.h"
#include "getdatasourcerequest_p.h"
#include "getdatasourceresponse.h"
#include "machinelearningrequest_p.h"

namespace AWS {
namespace MachineLearning {

/**
 * @class  GetDataSourceRequest
 *
 * @brief  Implements MachineLearning GetDataSource requests.
 *
 * @see    MachineLearningClient::getDataSource
 */

/**
 * @brief  Constructs a new GetDataSourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDataSourceRequest::GetDataSourceRequest(const GetDataSourceRequest &other)
    : MachineLearningRequest(new GetDataSourceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDataSourceRequest object.
 */
GetDataSourceRequest::GetDataSourceRequest()
    : MachineLearningRequest(new GetDataSourceRequestPrivate(MachineLearningRequest::GetDataSourceAction, this))
{

}

bool GetDataSourceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDataSourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDataSourceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MachineLearningClient::send
 */
AwsAbstractResponse * GetDataSourceRequest::response(QNetworkReply * const reply) const
{
    return new GetDataSourceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDataSourceRequestPrivate
 *
 * @brief  Private implementation for GetDataSourceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDataSourceRequestPrivate object.
 *
 * @param  action  MachineLearning action being performed.
 * @param  q       Pointer to this object's public GetDataSourceRequest instance.
 */
GetDataSourceRequestPrivate::GetDataSourceRequestPrivate(
    const MachineLearningRequest::Action action, GetDataSourceRequest * const q)
    : GetDataSourcePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDataSourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDataSourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDataSourceRequest instance.
 */
GetDataSourceRequestPrivate::GetDataSourceRequestPrivate(
    const GetDataSourceRequestPrivate &other, GetDataSourceRequest * const q)
    : GetDataSourcePrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace AWS
