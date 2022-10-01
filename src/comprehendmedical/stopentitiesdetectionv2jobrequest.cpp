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

#include "stopentitiesdetectionv2jobrequest.h"
#include "stopentitiesdetectionv2jobrequest_p.h"
#include "stopentitiesdetectionv2jobresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::StopEntitiesDetectionV2JobRequest
 * \brief The StopEntitiesDetectionV2JobRequest class provides an interface for ComprehendMedical StopEntitiesDetectionV2Job requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::stopEntitiesDetectionV2Job
 */

/*!
 * Constructs a copy of \a other.
 */
StopEntitiesDetectionV2JobRequest::StopEntitiesDetectionV2JobRequest(const StopEntitiesDetectionV2JobRequest &other)
    : ComprehendMedicalRequest(new StopEntitiesDetectionV2JobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopEntitiesDetectionV2JobRequest object.
 */
StopEntitiesDetectionV2JobRequest::StopEntitiesDetectionV2JobRequest()
    : ComprehendMedicalRequest(new StopEntitiesDetectionV2JobRequestPrivate(ComprehendMedicalRequest::StopEntitiesDetectionV2JobAction, this))
{

}

/*!
 * \reimp
 */
bool StopEntitiesDetectionV2JobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopEntitiesDetectionV2JobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopEntitiesDetectionV2JobRequest::response(QNetworkReply * const reply) const
{
    return new StopEntitiesDetectionV2JobResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::StopEntitiesDetectionV2JobRequestPrivate
 * \brief The StopEntitiesDetectionV2JobRequestPrivate class provides private implementation for StopEntitiesDetectionV2JobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a StopEntitiesDetectionV2JobRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
StopEntitiesDetectionV2JobRequestPrivate::StopEntitiesDetectionV2JobRequestPrivate(
    const ComprehendMedicalRequest::Action action, StopEntitiesDetectionV2JobRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopEntitiesDetectionV2JobRequest
 * class' copy constructor.
 */
StopEntitiesDetectionV2JobRequestPrivate::StopEntitiesDetectionV2JobRequestPrivate(
    const StopEntitiesDetectionV2JobRequestPrivate &other, StopEntitiesDetectionV2JobRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
