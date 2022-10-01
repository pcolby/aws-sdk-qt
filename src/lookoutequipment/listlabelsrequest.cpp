// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
