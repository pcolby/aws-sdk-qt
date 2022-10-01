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

#include "listsensorstatisticsrequest.h"
#include "listsensorstatisticsrequest_p.h"
#include "listsensorstatisticsresponse.h"
#include "lookoutequipmentrequest_p.h"

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::ListSensorStatisticsRequest
 * \brief The ListSensorStatisticsRequest class provides an interface for LookoutEquipment ListSensorStatistics requests.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::listSensorStatistics
 */

/*!
 * Constructs a copy of \a other.
 */
ListSensorStatisticsRequest::ListSensorStatisticsRequest(const ListSensorStatisticsRequest &other)
    : LookoutEquipmentRequest(new ListSensorStatisticsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSensorStatisticsRequest object.
 */
ListSensorStatisticsRequest::ListSensorStatisticsRequest()
    : LookoutEquipmentRequest(new ListSensorStatisticsRequestPrivate(LookoutEquipmentRequest::ListSensorStatisticsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSensorStatisticsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSensorStatisticsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSensorStatisticsRequest::response(QNetworkReply * const reply) const
{
    return new ListSensorStatisticsResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutEquipment::ListSensorStatisticsRequestPrivate
 * \brief The ListSensorStatisticsRequestPrivate class provides private implementation for ListSensorStatisticsRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a ListSensorStatisticsRequestPrivate object for LookoutEquipment \a action,
 * with public implementation \a q.
 */
ListSensorStatisticsRequestPrivate::ListSensorStatisticsRequestPrivate(
    const LookoutEquipmentRequest::Action action, ListSensorStatisticsRequest * const q)
    : LookoutEquipmentRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSensorStatisticsRequest
 * class' copy constructor.
 */
ListSensorStatisticsRequestPrivate::ListSensorStatisticsRequestPrivate(
    const ListSensorStatisticsRequestPrivate &other, ListSensorStatisticsRequest * const q)
    : LookoutEquipmentRequestPrivate(other, q)
{

}

} // namespace LookoutEquipment
} // namespace QtAws
