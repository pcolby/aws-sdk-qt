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
