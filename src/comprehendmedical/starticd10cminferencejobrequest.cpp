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

#include "starticd10cminferencejobrequest.h"
#include "starticd10cminferencejobrequest_p.h"
#include "starticd10cminferencejobresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::StartICD10CMInferenceJobRequest
 * \brief The StartICD10CMInferenceJobRequest class provides an interface for ComprehendMedical StartICD10CMInferenceJob requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Amazon Comprehend Medical extracts structured information from unstructured clinical text. Use these actions to gain
 *  insight in your documents.
 *
 * \sa ComprehendMedicalClient::startICD10CMInferenceJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartICD10CMInferenceJobRequest::StartICD10CMInferenceJobRequest(const StartICD10CMInferenceJobRequest &other)
    : ComprehendMedicalRequest(new StartICD10CMInferenceJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartICD10CMInferenceJobRequest object.
 */
StartICD10CMInferenceJobRequest::StartICD10CMInferenceJobRequest()
    : ComprehendMedicalRequest(new StartICD10CMInferenceJobRequestPrivate(ComprehendMedicalRequest::StartICD10CMInferenceJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartICD10CMInferenceJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartICD10CMInferenceJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartICD10CMInferenceJobRequest::response(QNetworkReply * const reply) const
{
    return new StartICD10CMInferenceJobResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::StartICD10CMInferenceJobRequestPrivate
 * \brief The StartICD10CMInferenceJobRequestPrivate class provides private implementation for StartICD10CMInferenceJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a StartICD10CMInferenceJobRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
StartICD10CMInferenceJobRequestPrivate::StartICD10CMInferenceJobRequestPrivate(
    const ComprehendMedicalRequest::Action action, StartICD10CMInferenceJobRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartICD10CMInferenceJobRequest
 * class' copy constructor.
 */
StartICD10CMInferenceJobRequestPrivate::StartICD10CMInferenceJobRequestPrivate(
    const StartICD10CMInferenceJobRequestPrivate &other, StartICD10CMInferenceJobRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
