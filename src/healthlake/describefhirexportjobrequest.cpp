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

#include "describefhirexportjobrequest.h"
#include "describefhirexportjobrequest_p.h"
#include "describefhirexportjobresponse.h"
#include "healthlakerequest_p.h"

namespace QtAws {
namespace HealthLake {

/*!
 * \class QtAws::HealthLake::DescribeFHIRExportJobRequest
 * \brief The DescribeFHIRExportJobRequest class provides an interface for HealthLake DescribeFHIRExportJob requests.
 *
 * \inmodule QtAwsHealthLake
 *
 *  Amazon HealthLake is a HIPAA eligibile service that allows customers to store, transform, query, and analyze their
 *  FHIR-formatted data in a consistent fashion in the
 *
 * \sa HealthLakeClient::describeFHIRExportJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFHIRExportJobRequest::DescribeFHIRExportJobRequest(const DescribeFHIRExportJobRequest &other)
    : HealthLakeRequest(new DescribeFHIRExportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFHIRExportJobRequest object.
 */
DescribeFHIRExportJobRequest::DescribeFHIRExportJobRequest()
    : HealthLakeRequest(new DescribeFHIRExportJobRequestPrivate(HealthLakeRequest::DescribeFHIRExportJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFHIRExportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFHIRExportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFHIRExportJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFHIRExportJobResponse(*this, reply);
}

/*!
 * \class QtAws::HealthLake::DescribeFHIRExportJobRequestPrivate
 * \brief The DescribeFHIRExportJobRequestPrivate class provides private implementation for DescribeFHIRExportJobRequest.
 * \internal
 *
 * \inmodule QtAwsHealthLake
 */

/*!
 * Constructs a DescribeFHIRExportJobRequestPrivate object for HealthLake \a action,
 * with public implementation \a q.
 */
DescribeFHIRExportJobRequestPrivate::DescribeFHIRExportJobRequestPrivate(
    const HealthLakeRequest::Action action, DescribeFHIRExportJobRequest * const q)
    : HealthLakeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFHIRExportJobRequest
 * class' copy constructor.
 */
DescribeFHIRExportJobRequestPrivate::DescribeFHIRExportJobRequestPrivate(
    const DescribeFHIRExportJobRequestPrivate &other, DescribeFHIRExportJobRequest * const q)
    : HealthLakeRequestPrivate(other, q)
{

}

} // namespace HealthLake
} // namespace QtAws
