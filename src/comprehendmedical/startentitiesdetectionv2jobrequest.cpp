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

#include "startentitiesdetectionv2jobrequest.h"
#include "startentitiesdetectionv2jobrequest_p.h"
#include "startentitiesdetectionv2jobresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::StartEntitiesDetectionV2JobRequest
 * \brief The StartEntitiesDetectionV2JobRequest class provides an interface for ComprehendMedical StartEntitiesDetectionV2Job requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::startEntitiesDetectionV2Job
 */

/*!
 * Constructs a copy of \a other.
 */
StartEntitiesDetectionV2JobRequest::StartEntitiesDetectionV2JobRequest(const StartEntitiesDetectionV2JobRequest &other)
    : ComprehendMedicalRequest(new StartEntitiesDetectionV2JobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartEntitiesDetectionV2JobRequest object.
 */
StartEntitiesDetectionV2JobRequest::StartEntitiesDetectionV2JobRequest()
    : ComprehendMedicalRequest(new StartEntitiesDetectionV2JobRequestPrivate(ComprehendMedicalRequest::StartEntitiesDetectionV2JobAction, this))
{

}

/*!
 * \reimp
 */
bool StartEntitiesDetectionV2JobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartEntitiesDetectionV2JobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartEntitiesDetectionV2JobRequest::response(QNetworkReply * const reply) const
{
    return new StartEntitiesDetectionV2JobResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::StartEntitiesDetectionV2JobRequestPrivate
 * \brief The StartEntitiesDetectionV2JobRequestPrivate class provides private implementation for StartEntitiesDetectionV2JobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a StartEntitiesDetectionV2JobRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
StartEntitiesDetectionV2JobRequestPrivate::StartEntitiesDetectionV2JobRequestPrivate(
    const ComprehendMedicalRequest::Action action, StartEntitiesDetectionV2JobRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartEntitiesDetectionV2JobRequest
 * class' copy constructor.
 */
StartEntitiesDetectionV2JobRequestPrivate::StartEntitiesDetectionV2JobRequestPrivate(
    const StartEntitiesDetectionV2JobRequestPrivate &other, StartEntitiesDetectionV2JobRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
