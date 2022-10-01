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

#include "describerxnorminferencejobrequest.h"
#include "describerxnorminferencejobrequest_p.h"
#include "describerxnorminferencejobresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::DescribeRxNormInferenceJobRequest
 * \brief The DescribeRxNormInferenceJobRequest class provides an interface for ComprehendMedical DescribeRxNormInferenceJob requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::describeRxNormInferenceJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeRxNormInferenceJobRequest::DescribeRxNormInferenceJobRequest(const DescribeRxNormInferenceJobRequest &other)
    : ComprehendMedicalRequest(new DescribeRxNormInferenceJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRxNormInferenceJobRequest object.
 */
DescribeRxNormInferenceJobRequest::DescribeRxNormInferenceJobRequest()
    : ComprehendMedicalRequest(new DescribeRxNormInferenceJobRequestPrivate(ComprehendMedicalRequest::DescribeRxNormInferenceJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeRxNormInferenceJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeRxNormInferenceJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRxNormInferenceJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRxNormInferenceJobResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::DescribeRxNormInferenceJobRequestPrivate
 * \brief The DescribeRxNormInferenceJobRequestPrivate class provides private implementation for DescribeRxNormInferenceJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a DescribeRxNormInferenceJobRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
DescribeRxNormInferenceJobRequestPrivate::DescribeRxNormInferenceJobRequestPrivate(
    const ComprehendMedicalRequest::Action action, DescribeRxNormInferenceJobRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeRxNormInferenceJobRequest
 * class' copy constructor.
 */
DescribeRxNormInferenceJobRequestPrivate::DescribeRxNormInferenceJobRequestPrivate(
    const DescribeRxNormInferenceJobRequestPrivate &other, DescribeRxNormInferenceJobRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
