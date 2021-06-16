/*
    Copyright 2013-2021 Paul Colby

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

#include "stoprxnorminferencejobrequest.h"
#include "stoprxnorminferencejobrequest_p.h"
#include "stoprxnorminferencejobresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::StopRxNormInferenceJobRequest
 * \brief The StopRxNormInferenceJobRequest class provides an interface for ComprehendMedical StopRxNormInferenceJob requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Amazon Comprehend Medical extracts structured information from unstructured clinical text. Use these actions to gain
 *  insight in your documents.
 *
 * \sa ComprehendMedicalClient::stopRxNormInferenceJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopRxNormInferenceJobRequest::StopRxNormInferenceJobRequest(const StopRxNormInferenceJobRequest &other)
    : ComprehendMedicalRequest(new StopRxNormInferenceJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopRxNormInferenceJobRequest object.
 */
StopRxNormInferenceJobRequest::StopRxNormInferenceJobRequest()
    : ComprehendMedicalRequest(new StopRxNormInferenceJobRequestPrivate(ComprehendMedicalRequest::StopRxNormInferenceJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopRxNormInferenceJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopRxNormInferenceJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopRxNormInferenceJobRequest::response(QNetworkReply * const reply) const
{
    return new StopRxNormInferenceJobResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::StopRxNormInferenceJobRequestPrivate
 * \brief The StopRxNormInferenceJobRequestPrivate class provides private implementation for StopRxNormInferenceJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a StopRxNormInferenceJobRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
StopRxNormInferenceJobRequestPrivate::StopRxNormInferenceJobRequestPrivate(
    const ComprehendMedicalRequest::Action action, StopRxNormInferenceJobRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopRxNormInferenceJobRequest
 * class' copy constructor.
 */
StopRxNormInferenceJobRequestPrivate::StopRxNormInferenceJobRequestPrivate(
    const StopRxNormInferenceJobRequestPrivate &other, StopRxNormInferenceJobRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
