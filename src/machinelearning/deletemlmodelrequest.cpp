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

#include "deletemlmodelrequest.h"
#include "deletemlmodelrequest_p.h"
#include "deletemlmodelresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/**
 * @class  DeleteMLModelRequest
 *
 * @brief  Implements MachineLearning DeleteMLModel requests.
 *
 * @see    MachineLearningClient::deleteMLModel
 */

/**
 * @brief  Constructs a new DeleteMLModelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteMLModelRequest::DeleteMLModelRequest(const DeleteMLModelRequest &other)
    : MachineLearningRequest(new DeleteMLModelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteMLModelRequest object.
 */
DeleteMLModelRequest::DeleteMLModelRequest()
    : MachineLearningRequest(new DeleteMLModelRequestPrivate(MachineLearningRequest::DeleteMLModelAction, this))
{

}

bool DeleteMLModelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteMLModelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteMLModelResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MachineLearningClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteMLModelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMLModelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteMLModelRequestPrivate
 *
 * @brief  Private implementation for DeleteMLModelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteMLModelRequestPrivate object.
 *
 * @param  action  MachineLearning action being performed.
 * @param  q       Pointer to this object's public DeleteMLModelRequest instance.
 */
DeleteMLModelRequestPrivate::DeleteMLModelRequestPrivate(
    const MachineLearningRequest::Action action, DeleteMLModelRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteMLModelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteMLModelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteMLModelRequest instance.
 */
DeleteMLModelRequestPrivate::DeleteMLModelRequestPrivate(
    const DeleteMLModelRequestPrivate &other, DeleteMLModelRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
