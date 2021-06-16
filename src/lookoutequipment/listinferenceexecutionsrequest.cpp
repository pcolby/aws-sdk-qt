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

#include "listinferenceexecutionsrequest.h"
#include "listinferenceexecutionsrequest_p.h"
#include "listinferenceexecutionsresponse.h"
#include "lookoutequipmentrequest_p.h"

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::ListInferenceExecutionsRequest
 * \brief The ListInferenceExecutionsRequest class provides an interface for LookoutEquipment ListInferenceExecutions requests.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::listInferenceExecutions
 */

/*!
 * Constructs a copy of \a other.
 */
ListInferenceExecutionsRequest::ListInferenceExecutionsRequest(const ListInferenceExecutionsRequest &other)
    : LookoutEquipmentRequest(new ListInferenceExecutionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListInferenceExecutionsRequest object.
 */
ListInferenceExecutionsRequest::ListInferenceExecutionsRequest()
    : LookoutEquipmentRequest(new ListInferenceExecutionsRequestPrivate(LookoutEquipmentRequest::ListInferenceExecutionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListInferenceExecutionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListInferenceExecutionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInferenceExecutionsRequest::response(QNetworkReply * const reply) const
{
    return new ListInferenceExecutionsResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutEquipment::ListInferenceExecutionsRequestPrivate
 * \brief The ListInferenceExecutionsRequestPrivate class provides private implementation for ListInferenceExecutionsRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a ListInferenceExecutionsRequestPrivate object for LookoutEquipment \a action,
 * with public implementation \a q.
 */
ListInferenceExecutionsRequestPrivate::ListInferenceExecutionsRequestPrivate(
    const LookoutEquipmentRequest::Action action, ListInferenceExecutionsRequest * const q)
    : LookoutEquipmentRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListInferenceExecutionsRequest
 * class' copy constructor.
 */
ListInferenceExecutionsRequestPrivate::ListInferenceExecutionsRequestPrivate(
    const ListInferenceExecutionsRequestPrivate &other, ListInferenceExecutionsRequest * const q)
    : LookoutEquipmentRequestPrivate(other, q)
{

}

} // namespace LookoutEquipment
} // namespace QtAws
