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
