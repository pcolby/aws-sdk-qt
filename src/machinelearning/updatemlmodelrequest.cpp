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

#include "updatemlmodelrequest.h"
#include "updatemlmodelrequest_p.h"
#include "updatemlmodelresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/**
 * @class  UpdateMLModelRequest
 *
 * @brief  Implements MachineLearning UpdateMLModel requests.
 *
 * @see    MachineLearningClient::updateMLModel
 */

/**
 * @brief  Constructs a new UpdateMLModelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateMLModelRequest::UpdateMLModelRequest(const UpdateMLModelRequest &other)
    : MachineLearningRequest(new UpdateMLModelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateMLModelRequest object.
 */
UpdateMLModelRequest::UpdateMLModelRequest()
    : MachineLearningRequest(new UpdateMLModelRequestPrivate(MachineLearningRequest::UpdateMLModelAction, this))
{

}

bool UpdateMLModelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateMLModelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateMLModelResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MachineLearningClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateMLModelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateMLModelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateMLModelRequestPrivate
 *
 * @brief  Private implementation for UpdateMLModelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateMLModelRequestPrivate object.
 *
 * @param  action  MachineLearning action being performed.
 * @param  q       Pointer to this object's public UpdateMLModelRequest instance.
 */
UpdateMLModelRequestPrivate::UpdateMLModelRequestPrivate(
    const MachineLearningRequest::Action action, UpdateMLModelRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateMLModelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateMLModelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateMLModelRequest instance.
 */
UpdateMLModelRequestPrivate::UpdateMLModelRequestPrivate(
    const UpdateMLModelRequestPrivate &other, UpdateMLModelRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
