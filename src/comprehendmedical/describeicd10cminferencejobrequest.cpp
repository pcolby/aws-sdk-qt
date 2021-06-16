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

#include "describeicd10cminferencejobrequest.h"
#include "describeicd10cminferencejobrequest_p.h"
#include "describeicd10cminferencejobresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::DescribeICD10CMInferenceJobRequest
 * \brief The DescribeICD10CMInferenceJobRequest class provides an interface for ComprehendMedical DescribeICD10CMInferenceJob requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Amazon Comprehend Medical extracts structured information from unstructured clinical text. Use these actions to gain
 *  insight in your documents.
 *
 * \sa ComprehendMedicalClient::describeICD10CMInferenceJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeICD10CMInferenceJobRequest::DescribeICD10CMInferenceJobRequest(const DescribeICD10CMInferenceJobRequest &other)
    : ComprehendMedicalRequest(new DescribeICD10CMInferenceJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeICD10CMInferenceJobRequest object.
 */
DescribeICD10CMInferenceJobRequest::DescribeICD10CMInferenceJobRequest()
    : ComprehendMedicalRequest(new DescribeICD10CMInferenceJobRequestPrivate(ComprehendMedicalRequest::DescribeICD10CMInferenceJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeICD10CMInferenceJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeICD10CMInferenceJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeICD10CMInferenceJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeICD10CMInferenceJobResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::DescribeICD10CMInferenceJobRequestPrivate
 * \brief The DescribeICD10CMInferenceJobRequestPrivate class provides private implementation for DescribeICD10CMInferenceJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a DescribeICD10CMInferenceJobRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
DescribeICD10CMInferenceJobRequestPrivate::DescribeICD10CMInferenceJobRequestPrivate(
    const ComprehendMedicalRequest::Action action, DescribeICD10CMInferenceJobRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeICD10CMInferenceJobRequest
 * class' copy constructor.
 */
DescribeICD10CMInferenceJobRequestPrivate::DescribeICD10CMInferenceJobRequestPrivate(
    const DescribeICD10CMInferenceJobRequestPrivate &other, DescribeICD10CMInferenceJobRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
