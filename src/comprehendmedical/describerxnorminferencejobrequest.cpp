// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
