// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmlmodelrequest.h"
#include "getmlmodelrequest_p.h"
#include "getmlmodelresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::GetMLModelRequest
 * \brief The GetMLModelRequest class provides an interface for MachineLearning GetMLModel requests.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::getMLModel
 */

/*!
 * Constructs a copy of \a other.
 */
GetMLModelRequest::GetMLModelRequest(const GetMLModelRequest &other)
    : MachineLearningRequest(new GetMLModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMLModelRequest object.
 */
GetMLModelRequest::GetMLModelRequest()
    : MachineLearningRequest(new GetMLModelRequestPrivate(MachineLearningRequest::GetMLModelAction, this))
{

}

/*!
 * \reimp
 */
bool GetMLModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMLModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMLModelRequest::response(QNetworkReply * const reply) const
{
    return new GetMLModelResponse(*this, reply);
}

/*!
 * \class QtAws::MachineLearning::GetMLModelRequestPrivate
 * \brief The GetMLModelRequestPrivate class provides private implementation for GetMLModelRequest.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a GetMLModelRequestPrivate object for MachineLearning \a action,
 * with public implementation \a q.
 */
GetMLModelRequestPrivate::GetMLModelRequestPrivate(
    const MachineLearningRequest::Action action, GetMLModelRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMLModelRequest
 * class' copy constructor.
 */
GetMLModelRequestPrivate::GetMLModelRequestPrivate(
    const GetMLModelRequestPrivate &other, GetMLModelRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
