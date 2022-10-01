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
