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

#include "describefhirimportjobrequest.h"
#include "describefhirimportjobrequest_p.h"
#include "describefhirimportjobresponse.h"
#include "healthlakerequest_p.h"

namespace QtAws {
namespace HealthLake {

/*!
 * \class QtAws::HealthLake::DescribeFHIRImportJobRequest
 * \brief The DescribeFHIRImportJobRequest class provides an interface for HealthLake DescribeFHIRImportJob requests.
 *
 * \inmodule QtAwsHealthLake
 *
 *  Amazon HealthLake is a HIPAA eligibile service that allows customers to store, transform, query, and analyze their
 *  FHIR-formatted data in a consistent fashion in the
 *
 * \sa HealthLakeClient::describeFHIRImportJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFHIRImportJobRequest::DescribeFHIRImportJobRequest(const DescribeFHIRImportJobRequest &other)
    : HealthLakeRequest(new DescribeFHIRImportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFHIRImportJobRequest object.
 */
DescribeFHIRImportJobRequest::DescribeFHIRImportJobRequest()
    : HealthLakeRequest(new DescribeFHIRImportJobRequestPrivate(HealthLakeRequest::DescribeFHIRImportJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFHIRImportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFHIRImportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFHIRImportJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFHIRImportJobResponse(*this, reply);
}

/*!
 * \class QtAws::HealthLake::DescribeFHIRImportJobRequestPrivate
 * \brief The DescribeFHIRImportJobRequestPrivate class provides private implementation for DescribeFHIRImportJobRequest.
 * \internal
 *
 * \inmodule QtAwsHealthLake
 */

/*!
 * Constructs a DescribeFHIRImportJobRequestPrivate object for HealthLake \a action,
 * with public implementation \a q.
 */
DescribeFHIRImportJobRequestPrivate::DescribeFHIRImportJobRequestPrivate(
    const HealthLakeRequest::Action action, DescribeFHIRImportJobRequest * const q)
    : HealthLakeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFHIRImportJobRequest
 * class' copy constructor.
 */
DescribeFHIRImportJobRequestPrivate::DescribeFHIRImportJobRequestPrivate(
    const DescribeFHIRImportJobRequestPrivate &other, DescribeFHIRImportJobRequest * const q)
    : HealthLakeRequestPrivate(other, q)
{

}

} // namespace HealthLake
} // namespace QtAws
