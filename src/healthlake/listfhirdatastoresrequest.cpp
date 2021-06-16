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
