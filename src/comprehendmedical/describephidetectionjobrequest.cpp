// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describephidetectionjobrequest.h"
#include "describephidetectionjobrequest_p.h"
#include "describephidetectionjobresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::DescribePHIDetectionJobRequest
 * \brief The DescribePHIDetectionJobRequest class provides an interface for ComprehendMedical DescribePHIDetectionJob requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::describePHIDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePHIDetectionJobRequest::DescribePHIDetectionJobRequest(const DescribePHIDetectionJobRequest &other)
    : ComprehendMedicalRequest(new DescribePHIDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePHIDetectionJobRequest object.
 */
DescribePHIDetectionJobRequest::DescribePHIDetectionJobRequest()
    : ComprehendMedicalRequest(new DescribePHIDetectionJobRequestPrivate(ComprehendMedicalRequest::DescribePHIDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePHIDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePHIDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePHIDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribePHIDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::DescribePHIDetectionJobRequestPrivate
 * \brief The DescribePHIDetectionJobRequestPrivate class provides private implementation for DescribePHIDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a DescribePHIDetectionJobRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
DescribePHIDetectionJobRequestPrivate::DescribePHIDetectionJobRequestPrivate(
    const ComprehendMedicalRequest::Action action, DescribePHIDetectionJobRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePHIDetectionJobRequest
 * class' copy constructor.
 */
DescribePHIDetectionJobRequestPrivate::DescribePHIDetectionJobRequestPrivate(
    const DescribePHIDetectionJobRequestPrivate &other, DescribePHIDetectionJobRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
