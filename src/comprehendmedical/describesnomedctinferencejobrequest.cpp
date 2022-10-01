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

#include "describesnomedctinferencejobrequest.h"
#include "describesnomedctinferencejobrequest_p.h"
#include "describesnomedctinferencejobresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::DescribeSNOMEDCTInferenceJobRequest
 * \brief The DescribeSNOMEDCTInferenceJobRequest class provides an interface for ComprehendMedical DescribeSNOMEDCTInferenceJob requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::describeSNOMEDCTInferenceJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSNOMEDCTInferenceJobRequest::DescribeSNOMEDCTInferenceJobRequest(const DescribeSNOMEDCTInferenceJobRequest &other)
    : ComprehendMedicalRequest(new DescribeSNOMEDCTInferenceJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSNOMEDCTInferenceJobRequest object.
 */
DescribeSNOMEDCTInferenceJobRequest::DescribeSNOMEDCTInferenceJobRequest()
    : ComprehendMedicalRequest(new DescribeSNOMEDCTInferenceJobRequestPrivate(ComprehendMedicalRequest::DescribeSNOMEDCTInferenceJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSNOMEDCTInferenceJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSNOMEDCTInferenceJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSNOMEDCTInferenceJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSNOMEDCTInferenceJobResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::DescribeSNOMEDCTInferenceJobRequestPrivate
 * \brief The DescribeSNOMEDCTInferenceJobRequestPrivate class provides private implementation for DescribeSNOMEDCTInferenceJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a DescribeSNOMEDCTInferenceJobRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
DescribeSNOMEDCTInferenceJobRequestPrivate::DescribeSNOMEDCTInferenceJobRequestPrivate(
    const ComprehendMedicalRequest::Action action, DescribeSNOMEDCTInferenceJobRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSNOMEDCTInferenceJobRequest
 * class' copy constructor.
 */
DescribeSNOMEDCTInferenceJobRequestPrivate::DescribeSNOMEDCTInferenceJobRequestPrivate(
    const DescribeSNOMEDCTInferenceJobRequestPrivate &other, DescribeSNOMEDCTInferenceJobRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
