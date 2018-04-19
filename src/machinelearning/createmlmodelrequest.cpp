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
 * \brief The CreateMLModelRequest class provides an interface for MachineLearning CreateMLModel requests.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::createMLModel
 */

/*!
 * Constructs a copy of \a other.
 */
CreateMLModelRequest::CreateMLModelRequest(const CreateMLModelRequest &other)
    : MachineLearningRequest(new CreateMLModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateMLModelRequest object.
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
 * Returns a CreateMLModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateMLModelRequest::response(QNetworkReply * const reply) const
{
    return new CreateMLModelResponse(*this, reply);
}

/*!
 * \class QtAws::MachineLearning::CreateMLModelRequestPrivate
 * \brief The CreateMLModelRequestPrivate class provides private implementation for CreateMLModelRequest.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a CreateMLModelRequestPrivate object for MachineLearning \a action,
 * with public implementation \a q.
 */
CreateMLModelRequestPrivate::CreateMLModelRequestPrivate(
    const MachineLearningRequest::Action action, CreateMLModelRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateMLModelRequest
 * class' copy constructor.
 */
CreateMLModelRequestPrivate::CreateMLModelRequestPrivate(
    const CreateMLModelRequestPrivate &other, CreateMLModelRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
