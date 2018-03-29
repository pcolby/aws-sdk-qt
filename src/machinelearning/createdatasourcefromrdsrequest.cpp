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

#include "createdatasourcefromrdsrequest.h"
#include "createdatasourcefromrdsrequest_p.h"
#include "createdatasourcefromrdsresponse.h"
#include "machinelearningrequest_p.h"

namespace AWS {
namespace MachineLearning {

/**
 * @class  CreateDataSourceFromRDSRequest
 *
 * @brief  Implements MachineLearning CreateDataSourceFromRDS requests.
 *
 * @see    MachineLearningClient::createDataSourceFromRDS
 */

/**
 * @brief  Constructs a new CreateDataSourceFromRDSRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDataSourceFromRDSRequest::CreateDataSourceFromRDSRequest(const CreateDataSourceFromRDSRequest &other)
    : MachineLearningRequest(new CreateDataSourceFromRDSRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDataSourceFromRDSRequest object.
 */
CreateDataSourceFromRDSRequest::CreateDataSourceFromRDSRequest()
    : MachineLearningRequest(new CreateDataSourceFromRDSRequestPrivate(MachineLearningRequest::CreateDataSourceFromRDSAction, this))
{

}

bool CreateDataSourceFromRDSRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDataSourceFromRDSResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDataSourceFromRDSResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MachineLearningClient::send
 */
AwsAbstractResponse * CreateDataSourceFromRDSRequest::response(QNetworkReply * const reply) const
{
    return new CreateDataSourceFromRDSResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDataSourceFromRDSRequestPrivate
 *
 * @brief  Private implementation for CreateDataSourceFromRDSRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDataSourceFromRDSRequestPrivate object.
 *
 * @param  action  MachineLearning action being performed.
 * @param  q       Pointer to this object's public CreateDataSourceFromRDSRequest instance.
 */
CreateDataSourceFromRDSRequestPrivate::CreateDataSourceFromRDSRequestPrivate(
    const MachineLearningRequest::Action action, CreateDataSourceFromRDSRequest * const q)
    : CreateDataSourceFromRDSPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDataSourceFromRDSRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDataSourceFromRDSRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDataSourceFromRDSRequest instance.
 */
CreateDataSourceFromRDSRequestPrivate::CreateDataSourceFromRDSRequestPrivate(
    const CreateDataSourceFromRDSRequestPrivate &other, CreateDataSourceFromRDSRequest * const q)
    : CreateDataSourceFromRDSPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace AWS
