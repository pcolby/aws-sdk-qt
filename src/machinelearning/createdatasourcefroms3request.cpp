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

#include "createdatasourcefroms3request.h"
#include "createdatasourcefroms3request_p.h"
#include "createdatasourcefroms3response.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/**
 * @class  CreateDataSourceFromS3Request
 *
 * @brief  Implements MachineLearning CreateDataSourceFromS3 requests.
 *
 * @see    MachineLearningClient::createDataSourceFromS3
 */

/**
 * @brief  Constructs a new CreateDataSourceFromS3Request object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDataSourceFromS3Request::CreateDataSourceFromS3Request(const CreateDataSourceFromS3Request &other)
    : MachineLearningRequest(new CreateDataSourceFromS3RequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDataSourceFromS3Request object.
 */
CreateDataSourceFromS3Request::CreateDataSourceFromS3Request()
    : MachineLearningRequest(new CreateDataSourceFromS3RequestPrivate(MachineLearningRequest::CreateDataSourceFromS3Action, this))
{

}

bool CreateDataSourceFromS3Request::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDataSourceFromS3Response object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDataSourceFromS3Response instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MachineLearningClient::send
 */
AwsAbstractResponse * CreateDataSourceFromS3Request::response(QNetworkReply * const reply) const
{
    return new CreateDataSourceFromS3Response(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDataSourceFromS3RequestPrivate
 *
 * @brief  Private implementation for CreateDataSourceFromS3Request.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDataSourceFromS3RequestPrivate object.
 *
 * @param  action  MachineLearning action being performed.
 * @param  q       Pointer to this object's public CreateDataSourceFromS3Request instance.
 */
CreateDataSourceFromS3RequestPrivate::CreateDataSourceFromS3RequestPrivate(
    const MachineLearningRequest::Action action, CreateDataSourceFromS3Request * const q)
    : CreateDataSourceFromS3Private(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDataSourceFromS3RequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDataSourceFromS3Request
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDataSourceFromS3Request instance.
 */
CreateDataSourceFromS3RequestPrivate::CreateDataSourceFromS3RequestPrivate(
    const CreateDataSourceFromS3RequestPrivate &other, CreateDataSourceFromS3Request * const q)
    : CreateDataSourceFromS3Private(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
