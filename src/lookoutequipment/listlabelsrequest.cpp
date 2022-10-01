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

#include "listlabelsrequest.h"
#include "listlabelsrequest_p.h"
#include "listlabelsresponse.h"
#include "lookoutequipmentrequest_p.h"

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::ListLabelsRequest
 * \brief The ListLabelsRequest class provides an interface for LookoutEquipment ListLabels requests.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::listLabels
 */

/*!
 * Constructs a copy of \a other.
 */
ListLabelsRequest::ListLabelsRequest(const ListLabelsRequest &other)
    : LookoutEquipmentRequest(new ListLabelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLabelsRequest object.
 */
ListLabelsRequest::ListLabelsRequest()
    : LookoutEquipmentRequest(new ListLabelsRequestPrivate(LookoutEquipmentRequest::ListLabelsAction, this))
{

}

/*!
 * \reimp
 */
bool ListLabelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLabelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLabelsRequest::response(QNetworkReply * const reply) const
{
    return new ListLabelsResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutEquipment::ListLabelsRequestPrivate
 * \brief The ListLabelsRequestPrivate class provides private implementation for ListLabelsRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a ListLabelsRequestPrivate object for LookoutEquipment \a action,
 * with public implementation \a q.
 */
ListLabelsRequestPrivate::ListLabelsRequestPrivate(
    const LookoutEquipmentRequest::Action action, ListLabelsRequest * const q)
    : LookoutEquipmentRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLabelsRequest
 * class' copy constructor.
 */
ListLabelsRequestPrivate::ListLabelsRequestPrivate(
    const ListLabelsRequestPrivate &other, ListLabelsRequest * const q)
    : LookoutEquipmentRequestPrivate(other, q)
{

}

} // namespace LookoutEquipment
} // namespace QtAws
