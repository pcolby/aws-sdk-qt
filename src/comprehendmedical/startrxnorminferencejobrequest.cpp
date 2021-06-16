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

#include "startrxnorminferencejobrequest.h"
#include "startrxnorminferencejobrequest_p.h"
#include "startrxnorminferencejobresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::StartRxNormInferenceJobRequest
 * \brief The StartRxNormInferenceJobRequest class provides an interface for ComprehendMedical StartRxNormInferenceJob requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Amazon Comprehend Medical extracts structured information from unstructured clinical text. Use these actions to gain
 *  insight in your documents.
 *
 * \sa ComprehendMedicalClient::startRxNormInferenceJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartRxNormInferenceJobRequest::StartRxNormInferenceJobRequest(const StartRxNormInferenceJobRequest &other)
    : ComprehendMedicalRequest(new StartRxNormInferenceJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartRxNormInferenceJobRequest object.
 */
StartRxNormInferenceJobRequest::StartRxNormInferenceJobRequest()
    : ComprehendMedicalRequest(new StartRxNormInferenceJobRequestPrivate(ComprehendMedicalRequest::StartRxNormInferenceJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartRxNormInferenceJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartRxNormInferenceJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartRxNormInferenceJobRequest::response(QNetworkReply * const reply) const
{
    return new StartRxNormInferenceJobResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::StartRxNormInferenceJobRequestPrivate
 * \brief The StartRxNormInferenceJobRequestPrivate class provides private implementation for StartRxNormInferenceJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a StartRxNormInferenceJobRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
StartRxNormInferenceJobRequestPrivate::StartRxNormInferenceJobRequestPrivate(
    const ComprehendMedicalRequest::Action action, StartRxNormInferenceJobRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartRxNormInferenceJobRequest
 * class' copy constructor.
 */
StartRxNormInferenceJobRequestPrivate::StartRxNormInferenceJobRequestPrivate(
    const StartRxNormInferenceJobRequestPrivate &other, StartRxNormInferenceJobRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
