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

/*!
 * \class QtAws::MachineLearning::UpdateMLModelRequest
 * \brief The UpdateMLModelRequest class provides an interface for MachineLearning UpdateMLModel requests.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::updateMLModel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateMLModelRequest::UpdateMLModelRequest(const UpdateMLModelRequest &other)
    : MachineLearningRequest(new UpdateMLModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateMLModelRequest object.
 */
UpdateMLModelRequest::UpdateMLModelRequest()
    : MachineLearningRequest(new UpdateMLModelRequestPrivate(MachineLearningRequest::UpdateMLModelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateMLModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateMLModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateMLModelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateMLModelResponse(*this, reply);
}

/*!
 * \class QtAws::MachineLearning::UpdateMLModelRequestPrivate
 * \brief The UpdateMLModelRequestPrivate class provides private implementation for UpdateMLModelRequest.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a UpdateMLModelRequestPrivate object for MachineLearning \a action,
 * with public implementation \a q.
 */
UpdateMLModelRequestPrivate::UpdateMLModelRequestPrivate(
    const MachineLearningRequest::Action action, UpdateMLModelRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateMLModelRequest
 * class' copy constructor.
 */
UpdateMLModelRequestPrivate::UpdateMLModelRequestPrivate(
    const UpdateMLModelRequestPrivate &other, UpdateMLModelRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
