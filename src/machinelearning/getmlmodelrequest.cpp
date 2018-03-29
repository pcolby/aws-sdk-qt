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

#include "getmlmodelrequest.h"
#include "getmlmodelrequest_p.h"
#include "getmlmodelresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/**
 * @class  GetMLModelRequest
 *
 * @brief  Implements MachineLearning GetMLModel requests.
 *
 * @see    MachineLearningClient::getMLModel
 */

/**
 * @brief  Constructs a new GetMLModelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetMLModelRequest::GetMLModelRequest(const GetMLModelRequest &other)
    : MachineLearningRequest(new GetMLModelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetMLModelRequest object.
 */
GetMLModelRequest::GetMLModelRequest()
    : MachineLearningRequest(new GetMLModelRequestPrivate(MachineLearningRequest::GetMLModelAction, this))
{

}

bool GetMLModelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetMLModelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetMLModelResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MachineLearningClient::send
 */
AwsAbstractResponse * GetMLModelRequest::response(QNetworkReply * const reply) const
{
    return new GetMLModelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetMLModelRequestPrivate
 *
 * @brief  Private implementation for GetMLModelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetMLModelRequestPrivate object.
 *
 * @param  action  MachineLearning action being performed.
 * @param  q       Pointer to this object's public GetMLModelRequest instance.
 */
GetMLModelRequestPrivate::GetMLModelRequestPrivate(
    const MachineLearningRequest::Action action, GetMLModelRequest * const q)
    : GetMLModelPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetMLModelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetMLModelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetMLModelRequest instance.
 */
GetMLModelRequestPrivate::GetMLModelRequestPrivate(
    const GetMLModelRequestPrivate &other, GetMLModelRequest * const q)
    : GetMLModelPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
