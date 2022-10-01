// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmodelsrequest.h"
#include "listmodelsrequest_p.h"
#include "listmodelsresponse.h"
#include "lookoutequipmentrequest_p.h"

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::ListModelsRequest
 * \brief The ListModelsRequest class provides an interface for LookoutEquipment ListModels requests.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::listModels
 */

/*!
 * Constructs a copy of \a other.
 */
ListModelsRequest::ListModelsRequest(const ListModelsRequest &other)
    : LookoutEquipmentRequest(new ListModelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListModelsRequest object.
 */
ListModelsRequest::ListModelsRequest()
    : LookoutEquipmentRequest(new ListModelsRequestPrivate(LookoutEquipmentRequest::ListModelsAction, this))
{

}

/*!
 * \reimp
 */
bool ListModelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListModelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListModelsRequest::response(QNetworkReply * const reply) const
{
    return new ListModelsResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutEquipment::ListModelsRequestPrivate
 * \brief The ListModelsRequestPrivate class provides private implementation for ListModelsRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a ListModelsRequestPrivate object for LookoutEquipment \a action,
 * with public implementation \a q.
 */
ListModelsRequestPrivate::ListModelsRequestPrivate(
    const LookoutEquipmentRequest::Action action, ListModelsRequest * const q)
    : LookoutEquipmentRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListModelsRequest
 * class' copy constructor.
 */
ListModelsRequestPrivate::ListModelsRequestPrivate(
    const ListModelsRequestPrivate &other, ListModelsRequest * const q)
    : LookoutEquipmentRequestPrivate(other, q)
{

}

} // namespace LookoutEquipment
} // namespace QtAws
