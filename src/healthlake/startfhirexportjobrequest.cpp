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

#include "startfhirexportjobrequest.h"
#include "startfhirexportjobrequest_p.h"
#include "startfhirexportjobresponse.h"
#include "healthlakerequest_p.h"

namespace QtAws {
namespace HealthLake {

/*!
 * \class QtAws::HealthLake::StartFHIRExportJobRequest
 * \brief The StartFHIRExportJobRequest class provides an interface for HealthLake StartFHIRExportJob requests.
 *
 * \inmodule QtAwsHealthLake
 *
 *  Amazon HealthLake is a HIPAA eligibile service that allows customers to store, transform, query, and analyze their
 *  FHIR-formatted data in a consistent fashion in the
 *
 * \sa HealthLakeClient::startFHIRExportJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartFHIRExportJobRequest::StartFHIRExportJobRequest(const StartFHIRExportJobRequest &other)
    : HealthLakeRequest(new StartFHIRExportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartFHIRExportJobRequest object.
 */
StartFHIRExportJobRequest::StartFHIRExportJobRequest()
    : HealthLakeRequest(new StartFHIRExportJobRequestPrivate(HealthLakeRequest::StartFHIRExportJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartFHIRExportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartFHIRExportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartFHIRExportJobRequest::response(QNetworkReply * const reply) const
{
    return new StartFHIRExportJobResponse(*this, reply);
}

/*!
 * \class QtAws::HealthLake::StartFHIRExportJobRequestPrivate
 * \brief The StartFHIRExportJobRequestPrivate class provides private implementation for StartFHIRExportJobRequest.
 * \internal
 *
 * \inmodule QtAwsHealthLake
 */

/*!
 * Constructs a StartFHIRExportJobRequestPrivate object for HealthLake \a action,
 * with public implementation \a q.
 */
StartFHIRExportJobRequestPrivate::StartFHIRExportJobRequestPrivate(
    const HealthLakeRequest::Action action, StartFHIRExportJobRequest * const q)
    : HealthLakeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartFHIRExportJobRequest
 * class' copy constructor.
 */
StartFHIRExportJobRequestPrivate::StartFHIRExportJobRequestPrivate(
    const StartFHIRExportJobRequestPrivate &other, StartFHIRExportJobRequest * const q)
    : HealthLakeRequestPrivate(other, q)
{

}

} // namespace HealthLake
} // namespace QtAws
