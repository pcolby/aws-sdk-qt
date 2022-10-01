// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
