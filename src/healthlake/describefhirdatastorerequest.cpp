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

#include "describefhirdatastorerequest.h"
#include "describefhirdatastorerequest_p.h"
#include "describefhirdatastoreresponse.h"
#include "healthlakerequest_p.h"

namespace QtAws {
namespace HealthLake {

/*!
 * \class QtAws::HealthLake::DescribeFHIRDatastoreRequest
 * \brief The DescribeFHIRDatastoreRequest class provides an interface for HealthLake DescribeFHIRDatastore requests.
 *
 * \inmodule QtAwsHealthLake
 *
 *  Amazon HealthLake is a HIPAA eligibile service that allows customers to store, transform, query, and analyze their
 *  FHIR-formatted data in a consistent fashion in the
 *
 * \sa HealthLakeClient::describeFHIRDatastore
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFHIRDatastoreRequest::DescribeFHIRDatastoreRequest(const DescribeFHIRDatastoreRequest &other)
    : HealthLakeRequest(new DescribeFHIRDatastoreRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFHIRDatastoreRequest object.
 */
DescribeFHIRDatastoreRequest::DescribeFHIRDatastoreRequest()
    : HealthLakeRequest(new DescribeFHIRDatastoreRequestPrivate(HealthLakeRequest::DescribeFHIRDatastoreAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFHIRDatastoreRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFHIRDatastoreResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFHIRDatastoreRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFHIRDatastoreResponse(*this, reply);
}

/*!
 * \class QtAws::HealthLake::DescribeFHIRDatastoreRequestPrivate
 * \brief The DescribeFHIRDatastoreRequestPrivate class provides private implementation for DescribeFHIRDatastoreRequest.
 * \internal
 *
 * \inmodule QtAwsHealthLake
 */

/*!
 * Constructs a DescribeFHIRDatastoreRequestPrivate object for HealthLake \a action,
 * with public implementation \a q.
 */
DescribeFHIRDatastoreRequestPrivate::DescribeFHIRDatastoreRequestPrivate(
    const HealthLakeRequest::Action action, DescribeFHIRDatastoreRequest * const q)
    : HealthLakeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFHIRDatastoreRequest
 * class' copy constructor.
 */
DescribeFHIRDatastoreRequestPrivate::DescribeFHIRDatastoreRequestPrivate(
    const DescribeFHIRDatastoreRequestPrivate &other, DescribeFHIRDatastoreRequest * const q)
    : HealthLakeRequestPrivate(other, q)
{

}

} // namespace HealthLake
} // namespace QtAws
