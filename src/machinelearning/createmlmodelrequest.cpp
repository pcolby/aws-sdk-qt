// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
