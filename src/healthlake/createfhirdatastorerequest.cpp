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

#include "createfhirdatastorerequest.h"
#include "createfhirdatastorerequest_p.h"
#include "createfhirdatastoreresponse.h"
#include "healthlakerequest_p.h"

namespace QtAws {
namespace HealthLake {

/*!
 * \class QtAws::HealthLake::CreateFHIRDatastoreRequest
 * \brief The CreateFHIRDatastoreRequest class provides an interface for HealthLake CreateFHIRDatastore requests.
 *
 * \inmodule QtAwsHealthLake
 *
 *  Amazon HealthLake is a HIPAA eligibile service that allows customers to store, transform, query, and analyze their
 *  FHIR-formatted data in a consistent fashion in the
 *
 * \sa HealthLakeClient::createFHIRDatastore
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFHIRDatastoreRequest::CreateFHIRDatastoreRequest(const CreateFHIRDatastoreRequest &other)
    : HealthLakeRequest(new CreateFHIRDatastoreRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFHIRDatastoreRequest object.
 */
CreateFHIRDatastoreRequest::CreateFHIRDatastoreRequest()
    : HealthLakeRequest(new CreateFHIRDatastoreRequestPrivate(HealthLakeRequest::CreateFHIRDatastoreAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFHIRDatastoreRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFHIRDatastoreResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFHIRDatastoreRequest::response(QNetworkReply * const reply) const
{
    return new CreateFHIRDatastoreResponse(*this, reply);
}

/*!
 * \class QtAws::HealthLake::CreateFHIRDatastoreRequestPrivate
 * \brief The CreateFHIRDatastoreRequestPrivate class provides private implementation for CreateFHIRDatastoreRequest.
 * \internal
 *
 * \inmodule QtAwsHealthLake
 */

/*!
 * Constructs a CreateFHIRDatastoreRequestPrivate object for HealthLake \a action,
 * with public implementation \a q.
 */
CreateFHIRDatastoreRequestPrivate::CreateFHIRDatastoreRequestPrivate(
    const HealthLakeRequest::Action action, CreateFHIRDatastoreRequest * const q)
    : HealthLakeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFHIRDatastoreRequest
 * class' copy constructor.
 */
CreateFHIRDatastoreRequestPrivate::CreateFHIRDatastoreRequestPrivate(
    const CreateFHIRDatastoreRequestPrivate &other, CreateFHIRDatastoreRequest * const q)
    : HealthLakeRequestPrivate(other, q)
{

}

} // namespace HealthLake
} // namespace QtAws
