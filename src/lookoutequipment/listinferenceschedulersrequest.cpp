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

#include "listinferenceschedulersrequest.h"
#include "listinferenceschedulersrequest_p.h"
#include "listinferenceschedulersresponse.h"
#include "lookoutequipmentrequest_p.h"

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::ListInferenceSchedulersRequest
 * \brief The ListInferenceSchedulersRequest class provides an interface for LookoutEquipment ListInferenceSchedulers requests.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::listInferenceSchedulers
 */

/*!
 * Constructs a copy of \a other.
 */
ListInferenceSchedulersRequest::ListInferenceSchedulersRequest(const ListInferenceSchedulersRequest &other)
    : LookoutEquipmentRequest(new ListInferenceSchedulersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListInferenceSchedulersRequest object.
 */
ListInferenceSchedulersRequest::ListInferenceSchedulersRequest()
    : LookoutEquipmentRequest(new ListInferenceSchedulersRequestPrivate(LookoutEquipmentRequest::ListInferenceSchedulersAction, this))
{

}

/*!
 * \reimp
 */
bool ListInferenceSchedulersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListInferenceSchedulersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInferenceSchedulersRequest::response(QNetworkReply * const reply) const
{
    return new ListInferenceSchedulersResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutEquipment::ListInferenceSchedulersRequestPrivate
 * \brief The ListInferenceSchedulersRequestPrivate class provides private implementation for ListInferenceSchedulersRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a ListInferenceSchedulersRequestPrivate object for LookoutEquipment \a action,
 * with public implementation \a q.
 */
ListInferenceSchedulersRequestPrivate::ListInferenceSchedulersRequestPrivate(
    const LookoutEquipmentRequest::Action action, ListInferenceSchedulersRequest * const q)
    : LookoutEquipmentRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListInferenceSchedulersRequest
 * class' copy constructor.
 */
ListInferenceSchedulersRequestPrivate::ListInferenceSchedulersRequestPrivate(
    const ListInferenceSchedulersRequestPrivate &other, ListInferenceSchedulersRequest * const q)
    : LookoutEquipmentRequestPrivate(other, q)
{

}

} // namespace LookoutEquipment
} // namespace QtAws
