// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefhirdatastorerequest.h"
#include "deletefhirdatastorerequest_p.h"
#include "deletefhirdatastoreresponse.h"
#include "healthlakerequest_p.h"

namespace QtAws {
namespace HealthLake {

/*!
 * \class QtAws::HealthLake::DeleteFHIRDatastoreRequest
 * \brief The DeleteFHIRDatastoreRequest class provides an interface for HealthLake DeleteFHIRDatastore requests.
 *
 * \inmodule QtAwsHealthLake
 *
 *  Amazon HealthLake is a HIPAA eligibile service that allows customers to store, transform, query, and analyze their
 *  FHIR-formatted data in a consistent fashion in the
 *
 * \sa HealthLakeClient::deleteFHIRDatastore
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFHIRDatastoreRequest::DeleteFHIRDatastoreRequest(const DeleteFHIRDatastoreRequest &other)
    : HealthLakeRequest(new DeleteFHIRDatastoreRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFHIRDatastoreRequest object.
 */
DeleteFHIRDatastoreRequest::DeleteFHIRDatastoreRequest()
    : HealthLakeRequest(new DeleteFHIRDatastoreRequestPrivate(HealthLakeRequest::DeleteFHIRDatastoreAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFHIRDatastoreRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFHIRDatastoreResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFHIRDatastoreRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFHIRDatastoreResponse(*this, reply);
}

/*!
 * \class QtAws::HealthLake::DeleteFHIRDatastoreRequestPrivate
 * \brief The DeleteFHIRDatastoreRequestPrivate class provides private implementation for DeleteFHIRDatastoreRequest.
 * \internal
 *
 * \inmodule QtAwsHealthLake
 */

/*!
 * Constructs a DeleteFHIRDatastoreRequestPrivate object for HealthLake \a action,
 * with public implementation \a q.
 */
DeleteFHIRDatastoreRequestPrivate::DeleteFHIRDatastoreRequestPrivate(
    const HealthLakeRequest::Action action, DeleteFHIRDatastoreRequest * const q)
    : HealthLakeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFHIRDatastoreRequest
 * class' copy constructor.
 */
DeleteFHIRDatastoreRequestPrivate::DeleteFHIRDatastoreRequestPrivate(
    const DeleteFHIRDatastoreRequestPrivate &other, DeleteFHIRDatastoreRequest * const q)
    : HealthLakeRequestPrivate(other, q)
{

}

} // namespace HealthLake
} // namespace QtAws
