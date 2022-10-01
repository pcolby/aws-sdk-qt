// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemlmodelrequest.h"
#include "deletemlmodelrequest_p.h"
#include "deletemlmodelresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::DeleteMLModelRequest
 * \brief The DeleteMLModelRequest class provides an interface for MachineLearning DeleteMLModel requests.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::deleteMLModel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteMLModelRequest::DeleteMLModelRequest(const DeleteMLModelRequest &other)
    : MachineLearningRequest(new DeleteMLModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteMLModelRequest object.
 */
DeleteMLModelRequest::DeleteMLModelRequest()
    : MachineLearningRequest(new DeleteMLModelRequestPrivate(MachineLearningRequest::DeleteMLModelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteMLModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteMLModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteMLModelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMLModelResponse(*this, reply);
}

/*!
 * \class QtAws::MachineLearning::DeleteMLModelRequestPrivate
 * \brief The DeleteMLModelRequestPrivate class provides private implementation for DeleteMLModelRequest.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a DeleteMLModelRequestPrivate object for MachineLearning \a action,
 * with public implementation \a q.
 */
DeleteMLModelRequestPrivate::DeleteMLModelRequestPrivate(
    const MachineLearningRequest::Action action, DeleteMLModelRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteMLModelRequest
 * class' copy constructor.
 */
DeleteMLModelRequestPrivate::DeleteMLModelRequestPrivate(
    const DeleteMLModelRequestPrivate &other, DeleteMLModelRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
