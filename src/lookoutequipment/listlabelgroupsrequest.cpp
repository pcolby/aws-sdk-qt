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

#include "listlabelgroupsrequest.h"
#include "listlabelgroupsrequest_p.h"
#include "listlabelgroupsresponse.h"
#include "lookoutequipmentrequest_p.h"

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::ListLabelGroupsRequest
 * \brief The ListLabelGroupsRequest class provides an interface for LookoutEquipment ListLabelGroups requests.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::listLabelGroups
 */

/*!
 * Constructs a copy of \a other.
 */
ListLabelGroupsRequest::ListLabelGroupsRequest(const ListLabelGroupsRequest &other)
    : LookoutEquipmentRequest(new ListLabelGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLabelGroupsRequest object.
 */
ListLabelGroupsRequest::ListLabelGroupsRequest()
    : LookoutEquipmentRequest(new ListLabelGroupsRequestPrivate(LookoutEquipmentRequest::ListLabelGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ListLabelGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLabelGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLabelGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListLabelGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutEquipment::ListLabelGroupsRequestPrivate
 * \brief The ListLabelGroupsRequestPrivate class provides private implementation for ListLabelGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a ListLabelGroupsRequestPrivate object for LookoutEquipment \a action,
 * with public implementation \a q.
 */
ListLabelGroupsRequestPrivate::ListLabelGroupsRequestPrivate(
    const LookoutEquipmentRequest::Action action, ListLabelGroupsRequest * const q)
    : LookoutEquipmentRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLabelGroupsRequest
 * class' copy constructor.
 */
ListLabelGroupsRequestPrivate::ListLabelGroupsRequestPrivate(
    const ListLabelGroupsRequestPrivate &other, ListLabelGroupsRequest * const q)
    : LookoutEquipmentRequestPrivate(other, q)
{

}

} // namespace LookoutEquipment
} // namespace QtAws
