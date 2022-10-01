// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
