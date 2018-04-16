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

#include "getevaluationrequest.h"
#include "getevaluationrequest_p.h"
#include "getevaluationresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::GetEvaluationRequest
 *
 * \brief The GetEvaluationRequest class provides an interface for MachineLearning GetEvaluation requests.
 *
 * \ingroup MachineLearning
 *
 *
 * \sa MachineLearningClient::getEvaluation
 */

/*!
 * @brief  Constructs a new GetEvaluationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetEvaluationRequest::GetEvaluationRequest(const GetEvaluationRequest &other)
    : MachineLearningRequest(new GetEvaluationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetEvaluationRequest object.
 */
GetEvaluationRequest::GetEvaluationRequest()
    : MachineLearningRequest(new GetEvaluationRequestPrivate(MachineLearningRequest::GetEvaluationAction, this))
{

}

/*!
 * \reimp
 */
bool GetEvaluationRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetEvaluationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetEvaluationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MachineLearningClient::send
 */
QtAws::Core::AwsAbstractResponse * GetEvaluationRequest::response(QNetworkReply * const reply) const
{
    return new GetEvaluationResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetEvaluationRequestPrivate
 *
 * @brief  Private implementation for GetEvaluationRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetEvaluationRequestPrivate object.
 *
 * @param  action  MachineLearning action being performed.
 * @param  q       Pointer to this object's public GetEvaluationRequest instance.
 */
GetEvaluationRequestPrivate::GetEvaluationRequestPrivate(
    const MachineLearningRequest::Action action, GetEvaluationRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetEvaluationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetEvaluationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetEvaluationRequest instance.
 */
GetEvaluationRequestPrivate::GetEvaluationRequestPrivate(
    const GetEvaluationRequestPrivate &other, GetEvaluationRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
