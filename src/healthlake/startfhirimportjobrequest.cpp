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

#include "startfhirimportjobrequest.h"
#include "startfhirimportjobrequest_p.h"
#include "startfhirimportjobresponse.h"
#include "healthlakerequest_p.h"

namespace QtAws {
namespace HealthLake {

/*!
 * \class QtAws::HealthLake::StartFHIRImportJobRequest
 * \brief The StartFHIRImportJobRequest class provides an interface for HealthLake StartFHIRImportJob requests.
 *
 * \inmodule QtAwsHealthLake
 *
 *  Amazon HealthLake is a HIPAA eligibile service that allows customers to store, transform, query, and analyze their
 *  FHIR-formatted data in a consistent fashion in the
 *
 * \sa HealthLakeClient::startFHIRImportJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartFHIRImportJobRequest::StartFHIRImportJobRequest(const StartFHIRImportJobRequest &other)
    : HealthLakeRequest(new StartFHIRImportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartFHIRImportJobRequest object.
 */
StartFHIRImportJobRequest::StartFHIRImportJobRequest()
    : HealthLakeRequest(new StartFHIRImportJobRequestPrivate(HealthLakeRequest::StartFHIRImportJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartFHIRImportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartFHIRImportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartFHIRImportJobRequest::response(QNetworkReply * const reply) const
{
    return new StartFHIRImportJobResponse(*this, reply);
}

/*!
 * \class QtAws::HealthLake::StartFHIRImportJobRequestPrivate
 * \brief The StartFHIRImportJobRequestPrivate class provides private implementation for StartFHIRImportJobRequest.
 * \internal
 *
 * \inmodule QtAwsHealthLake
 */

/*!
 * Constructs a StartFHIRImportJobRequestPrivate object for HealthLake \a action,
 * with public implementation \a q.
 */
StartFHIRImportJobRequestPrivate::StartFHIRImportJobRequestPrivate(
    const HealthLakeRequest::Action action, StartFHIRImportJobRequest * const q)
    : HealthLakeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartFHIRImportJobRequest
 * class' copy constructor.
 */
StartFHIRImportJobRequestPrivate::StartFHIRImportJobRequestPrivate(
    const StartFHIRImportJobRequestPrivate &other, StartFHIRImportJobRequest * const q)
    : HealthLakeRequestPrivate(other, q)
{

}

} // namespace HealthLake
} // namespace QtAws
