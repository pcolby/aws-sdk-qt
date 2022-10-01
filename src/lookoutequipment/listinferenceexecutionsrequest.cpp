// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
