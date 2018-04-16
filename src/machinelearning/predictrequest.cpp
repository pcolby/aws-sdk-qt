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

#include "predictrequest.h"
#include "predictrequest_p.h"
#include "predictresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::PredictRequest
 *
 * \brief The PredictRequest class provides an interface for MachineLearning Predict requests.
 *
 * \ingroup MachineLearning
 *
 *
 * \sa MachineLearningClient::predict
 */

/*!
 * @brief  Constructs a new PredictRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PredictRequest::PredictRequest(const PredictRequest &other)
    : MachineLearningRequest(new PredictRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new PredictRequest object.
 */
PredictRequest::PredictRequest()
    : MachineLearningRequest(new PredictRequestPrivate(MachineLearningRequest::PredictAction, this))
{

}

/*!
 * \reimp
 */
bool PredictRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an PredictResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PredictResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MachineLearningClient::send
 */
QtAws::Core::AwsAbstractResponse * PredictRequest::response(QNetworkReply * const reply) const
{
    return new PredictResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  PredictRequestPrivate
 *
 * @brief  Private implementation for PredictRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PredictRequestPrivate object.
 *
 * @param  action  MachineLearning action being performed.
 * @param  q       Pointer to this object's public PredictRequest instance.
 */
PredictRequestPrivate::PredictRequestPrivate(
    const MachineLearningRequest::Action action, PredictRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new PredictRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PredictRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PredictRequest instance.
 */
PredictRequestPrivate::PredictRequestPrivate(
    const PredictRequestPrivate &other, PredictRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
