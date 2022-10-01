// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
