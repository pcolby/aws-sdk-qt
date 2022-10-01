// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
