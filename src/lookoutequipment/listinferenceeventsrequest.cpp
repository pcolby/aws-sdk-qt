// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listinferenceeventsrequest.h"
#include "listinferenceeventsrequest_p.h"
#include "listinferenceeventsresponse.h"
#include "lookoutequipmentrequest_p.h"

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::ListInferenceEventsRequest
 * \brief The ListInferenceEventsRequest class provides an interface for LookoutEquipment ListInferenceEvents requests.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::listInferenceEvents
 */

/*!
 * Constructs a copy of \a other.
 */
ListInferenceEventsRequest::ListInferenceEventsRequest(const ListInferenceEventsRequest &other)
    : LookoutEquipmentRequest(new ListInferenceEventsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListInferenceEventsRequest object.
 */
ListInferenceEventsRequest::ListInferenceEventsRequest()
    : LookoutEquipmentRequest(new ListInferenceEventsRequestPrivate(LookoutEquipmentRequest::ListInferenceEventsAction, this))
{

}

/*!
 * \reimp
 */
bool ListInferenceEventsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListInferenceEventsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInferenceEventsRequest::response(QNetworkReply * const reply) const
{
    return new ListInferenceEventsResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutEquipment::ListInferenceEventsRequestPrivate
 * \brief The ListInferenceEventsRequestPrivate class provides private implementation for ListInferenceEventsRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a ListInferenceEventsRequestPrivate object for LookoutEquipment \a action,
 * with public implementation \a q.
 */
ListInferenceEventsRequestPrivate::ListInferenceEventsRequestPrivate(
    const LookoutEquipmentRequest::Action action, ListInferenceEventsRequest * const q)
    : LookoutEquipmentRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListInferenceEventsRequest
 * class' copy constructor.
 */
ListInferenceEventsRequestPrivate::ListInferenceEventsRequestPrivate(
    const ListInferenceEventsRequestPrivate &other, ListInferenceEventsRequest * const q)
    : LookoutEquipmentRequestPrivate(other, q)
{

}

} // namespace LookoutEquipment
} // namespace QtAws
