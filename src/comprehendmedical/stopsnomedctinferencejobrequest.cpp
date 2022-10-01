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

#include "stopsnomedctinferencejobrequest.h"
#include "stopsnomedctinferencejobrequest_p.h"
#include "stopsnomedctinferencejobresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::StopSNOMEDCTInferenceJobRequest
 * \brief The StopSNOMEDCTInferenceJobRequest class provides an interface for ComprehendMedical StopSNOMEDCTInferenceJob requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::stopSNOMEDCTInferenceJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopSNOMEDCTInferenceJobRequest::StopSNOMEDCTInferenceJobRequest(const StopSNOMEDCTInferenceJobRequest &other)
    : ComprehendMedicalRequest(new StopSNOMEDCTInferenceJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopSNOMEDCTInferenceJobRequest object.
 */
StopSNOMEDCTInferenceJobRequest::StopSNOMEDCTInferenceJobRequest()
    : ComprehendMedicalRequest(new StopSNOMEDCTInferenceJobRequestPrivate(ComprehendMedicalRequest::StopSNOMEDCTInferenceJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopSNOMEDCTInferenceJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopSNOMEDCTInferenceJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopSNOMEDCTInferenceJobRequest::response(QNetworkReply * const reply) const
{
    return new StopSNOMEDCTInferenceJobResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::StopSNOMEDCTInferenceJobRequestPrivate
 * \brief The StopSNOMEDCTInferenceJobRequestPrivate class provides private implementation for StopSNOMEDCTInferenceJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a StopSNOMEDCTInferenceJobRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
StopSNOMEDCTInferenceJobRequestPrivate::StopSNOMEDCTInferenceJobRequestPrivate(
    const ComprehendMedicalRequest::Action action, StopSNOMEDCTInferenceJobRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopSNOMEDCTInferenceJobRequest
 * class' copy constructor.
 */
StopSNOMEDCTInferenceJobRequestPrivate::StopSNOMEDCTInferenceJobRequestPrivate(
    const StopSNOMEDCTInferenceJobRequestPrivate &other, StopSNOMEDCTInferenceJobRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
