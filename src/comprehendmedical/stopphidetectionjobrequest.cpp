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
