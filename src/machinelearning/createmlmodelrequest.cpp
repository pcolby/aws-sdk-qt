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

#include "createmlmodelrequest.h"
#include "createmlmodelrequest_p.h"
#include "createmlmodelresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::CreateMLModelRequest
 *
 * \brief The CreateMLModelRequest class encapsulates MachineLearning CreateMLModel requests.
 *
 * \ingroup MachineLearning
 *
 *
 * \sa MachineLearningClient::createMLModel
 */

/*!
 * @brief  Constructs a new CreateMLModelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateMLModelRequest::CreateMLModelRequest(const CreateMLModelRequest &other)
    : MachineLearningRequest(new CreateMLModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateMLModelRequest object.
 */
CreateMLModelRequest::CreateMLModelRequest()
    : MachineLearningRequest(new CreateMLModelRequestPrivate(MachineLearningRequest::CreateMLModelAction, this))
{

}

/*!
 * \reimp
 */
bool CreateMLModelRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateMLModelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateMLModelResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MachineLearningClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateMLModelRequest::response(QNetworkReply * const reply) const
{
    return new CreateMLModelResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateMLModelRequestPrivate
 *
 * @brief  Private implementation for CreateMLModelRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateMLModelRequestPrivate object.
 *
 * @param  action  MachineLearning action being performed.
 * @param  q       Pointer to this object's public CreateMLModelRequest instance.
 */
CreateMLModelRequestPrivate::CreateMLModelRequestPrivate(
    const MachineLearningRequest::Action action, CreateMLModelRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateMLModelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateMLModelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateMLModelRequest instance.
 */
CreateMLModelRequestPrivate::CreateMLModelRequestPrivate(
    const CreateMLModelRequestPrivate &other, CreateMLModelRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
