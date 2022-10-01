// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startphidetectionjobrequest.h"
#include "startphidetectionjobrequest_p.h"
#include "startphidetectionjobresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::StartPHIDetectionJobRequest
 * \brief The StartPHIDetectionJobRequest class provides an interface for ComprehendMedical StartPHIDetectionJob requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::startPHIDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartPHIDetectionJobRequest::StartPHIDetectionJobRequest(const StartPHIDetectionJobRequest &other)
    : ComprehendMedicalRequest(new StartPHIDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartPHIDetectionJobRequest object.
 */
StartPHIDetectionJobRequest::StartPHIDetectionJobRequest()
    : ComprehendMedicalRequest(new StartPHIDetectionJobRequestPrivate(ComprehendMedicalRequest::StartPHIDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartPHIDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartPHIDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartPHIDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new StartPHIDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::StartPHIDetectionJobRequestPrivate
 * \brief The StartPHIDetectionJobRequestPrivate class provides private implementation for StartPHIDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a StartPHIDetectionJobRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
StartPHIDetectionJobRequestPrivate::StartPHIDetectionJobRequestPrivate(
    const ComprehendMedicalRequest::Action action, StartPHIDetectionJobRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartPHIDetectionJobRequest
 * class' copy constructor.
 */
StartPHIDetectionJobRequestPrivate::StartPHIDetectionJobRequestPrivate(
    const StartPHIDetectionJobRequestPrivate &other, StartPHIDetectionJobRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
