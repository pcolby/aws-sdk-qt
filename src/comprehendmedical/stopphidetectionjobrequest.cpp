// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopphidetectionjobrequest.h"
#include "stopphidetectionjobrequest_p.h"
#include "stopphidetectionjobresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::StopPHIDetectionJobRequest
 * \brief The StopPHIDetectionJobRequest class provides an interface for ComprehendMedical StopPHIDetectionJob requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::stopPHIDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopPHIDetectionJobRequest::StopPHIDetectionJobRequest(const StopPHIDetectionJobRequest &other)
    : ComprehendMedicalRequest(new StopPHIDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopPHIDetectionJobRequest object.
 */
StopPHIDetectionJobRequest::StopPHIDetectionJobRequest()
    : ComprehendMedicalRequest(new StopPHIDetectionJobRequestPrivate(ComprehendMedicalRequest::StopPHIDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopPHIDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopPHIDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopPHIDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new StopPHIDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::StopPHIDetectionJobRequestPrivate
 * \brief The StopPHIDetectionJobRequestPrivate class provides private implementation for StopPHIDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a StopPHIDetectionJobRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
StopPHIDetectionJobRequestPrivate::StopPHIDetectionJobRequestPrivate(
    const ComprehendMedicalRequest::Action action, StopPHIDetectionJobRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopPHIDetectionJobRequest
 * class' copy constructor.
 */
StopPHIDetectionJobRequestPrivate::StopPHIDetectionJobRequestPrivate(
    const StopPHIDetectionJobRequestPrivate &other, StopPHIDetectionJobRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
