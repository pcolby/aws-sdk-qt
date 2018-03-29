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

#include "createdatasourcefromredshiftrequest.h"
#include "createdatasourcefromredshiftrequest_p.h"
#include "createdatasourcefromredshiftresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/**
 * @class  CreateDataSourceFromRedshiftRequest
 *
 * @brief  Implements MachineLearning CreateDataSourceFromRedshift requests.
 *
 * @see    MachineLearningClient::createDataSourceFromRedshift
 */

/**
 * @brief  Constructs a new CreateDataSourceFromRedshiftRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDataSourceFromRedshiftRequest::CreateDataSourceFromRedshiftRequest(const CreateDataSourceFromRedshiftRequest &other)
    : MachineLearningRequest(new CreateDataSourceFromRedshiftRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDataSourceFromRedshiftRequest object.
 */
CreateDataSourceFromRedshiftRequest::CreateDataSourceFromRedshiftRequest()
    : MachineLearningRequest(new CreateDataSourceFromRedshiftRequestPrivate(MachineLearningRequest::CreateDataSourceFromRedshiftAction, this))
{

}

bool CreateDataSourceFromRedshiftRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDataSourceFromRedshiftResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDataSourceFromRedshiftResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MachineLearningClient::send
 */
AwsAbstractResponse * CreateDataSourceFromRedshiftRequest::response(QNetworkReply * const reply) const
{
    return new CreateDataSourceFromRedshiftResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDataSourceFromRedshiftRequestPrivate
 *
 * @brief  Private implementation for CreateDataSourceFromRedshiftRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDataSourceFromRedshiftRequestPrivate object.
 *
 * @param  action  MachineLearning action being performed.
 * @param  q       Pointer to this object's public CreateDataSourceFromRedshiftRequest instance.
 */
CreateDataSourceFromRedshiftRequestPrivate::CreateDataSourceFromRedshiftRequestPrivate(
    const MachineLearningRequest::Action action, CreateDataSourceFromRedshiftRequest * const q)
    : CreateDataSourceFromRedshiftPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDataSourceFromRedshiftRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDataSourceFromRedshiftRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDataSourceFromRedshiftRequest instance.
 */
CreateDataSourceFromRedshiftRequestPrivate::CreateDataSourceFromRedshiftRequestPrivate(
    const CreateDataSourceFromRedshiftRequestPrivate &other, CreateDataSourceFromRedshiftRequest * const q)
    : CreateDataSourceFromRedshiftPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
