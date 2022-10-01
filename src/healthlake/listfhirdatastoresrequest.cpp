// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfhirdatastoresrequest.h"
#include "listfhirdatastoresrequest_p.h"
#include "listfhirdatastoresresponse.h"
#include "healthlakerequest_p.h"

namespace QtAws {
namespace HealthLake {

/*!
 * \class QtAws::HealthLake::ListFHIRDatastoresRequest
 * \brief The ListFHIRDatastoresRequest class provides an interface for HealthLake ListFHIRDatastores requests.
 *
 * \inmodule QtAwsHealthLake
 *
 *  Amazon HealthLake is a HIPAA eligibile service that allows customers to store, transform, query, and analyze their
 *  FHIR-formatted data in a consistent fashion in the
 *
 * \sa HealthLakeClient::listFHIRDatastores
 */

/*!
 * Constructs a copy of \a other.
 */
ListFHIRDatastoresRequest::ListFHIRDatastoresRequest(const ListFHIRDatastoresRequest &other)
    : HealthLakeRequest(new ListFHIRDatastoresRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFHIRDatastoresRequest object.
 */
ListFHIRDatastoresRequest::ListFHIRDatastoresRequest()
    : HealthLakeRequest(new ListFHIRDatastoresRequestPrivate(HealthLakeRequest::ListFHIRDatastoresAction, this))
{

}

/*!
 * \reimp
 */
bool ListFHIRDatastoresRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFHIRDatastoresResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFHIRDatastoresRequest::response(QNetworkReply * const reply) const
{
    return new ListFHIRDatastoresResponse(*this, reply);
}

/*!
 * \class QtAws::HealthLake::ListFHIRDatastoresRequestPrivate
 * \brief The ListFHIRDatastoresRequestPrivate class provides private implementation for ListFHIRDatastoresRequest.
 * \internal
 *
 * \inmodule QtAwsHealthLake
 */

/*!
 * Constructs a ListFHIRDatastoresRequestPrivate object for HealthLake \a action,
 * with public implementation \a q.
 */
ListFHIRDatastoresRequestPrivate::ListFHIRDatastoresRequestPrivate(
    const HealthLakeRequest::Action action, ListFHIRDatastoresRequest * const q)
    : HealthLakeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFHIRDatastoresRequest
 * class' copy constructor.
 */
ListFHIRDatastoresRequestPrivate::ListFHIRDatastoresRequestPrivate(
    const ListFHIRDatastoresRequestPrivate &other, ListFHIRDatastoresRequest * const q)
    : HealthLakeRequestPrivate(other, q)
{

}

} // namespace HealthLake
} // namespace QtAws
