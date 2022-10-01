// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
