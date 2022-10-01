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

#include "startsnomedctinferencejobrequest.h"
#include "startsnomedctinferencejobrequest_p.h"
#include "startsnomedctinferencejobresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::StartSNOMEDCTInferenceJobRequest
 * \brief The StartSNOMEDCTInferenceJobRequest class provides an interface for ComprehendMedical StartSNOMEDCTInferenceJob requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::startSNOMEDCTInferenceJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartSNOMEDCTInferenceJobRequest::StartSNOMEDCTInferenceJobRequest(const StartSNOMEDCTInferenceJobRequest &other)
    : ComprehendMedicalRequest(new StartSNOMEDCTInferenceJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartSNOMEDCTInferenceJobRequest object.
 */
StartSNOMEDCTInferenceJobRequest::StartSNOMEDCTInferenceJobRequest()
    : ComprehendMedicalRequest(new StartSNOMEDCTInferenceJobRequestPrivate(ComprehendMedicalRequest::StartSNOMEDCTInferenceJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartSNOMEDCTInferenceJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartSNOMEDCTInferenceJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartSNOMEDCTInferenceJobRequest::response(QNetworkReply * const reply) const
{
    return new StartSNOMEDCTInferenceJobResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::StartSNOMEDCTInferenceJobRequestPrivate
 * \brief The StartSNOMEDCTInferenceJobRequestPrivate class provides private implementation for StartSNOMEDCTInferenceJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a StartSNOMEDCTInferenceJobRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
StartSNOMEDCTInferenceJobRequestPrivate::StartSNOMEDCTInferenceJobRequestPrivate(
    const ComprehendMedicalRequest::Action action, StartSNOMEDCTInferenceJobRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartSNOMEDCTInferenceJobRequest
 * class' copy constructor.
 */
StartSNOMEDCTInferenceJobRequestPrivate::StartSNOMEDCTInferenceJobRequestPrivate(
    const StartSNOMEDCTInferenceJobRequestPrivate &other, StartSNOMEDCTInferenceJobRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
