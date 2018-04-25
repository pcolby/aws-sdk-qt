/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
