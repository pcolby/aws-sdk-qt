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

#include "describelabelgrouprequest.h"
#include "describelabelgrouprequest_p.h"
#include "describelabelgroupresponse.h"
#include "lookoutequipmentrequest_p.h"

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::DescribeLabelGroupRequest
 * \brief The DescribeLabelGroupRequest class provides an interface for LookoutEquipment DescribeLabelGroup requests.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::describeLabelGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLabelGroupRequest::DescribeLabelGroupRequest(const DescribeLabelGroupRequest &other)
    : LookoutEquipmentRequest(new DescribeLabelGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLabelGroupRequest object.
 */
DescribeLabelGroupRequest::DescribeLabelGroupRequest()
    : LookoutEquipmentRequest(new DescribeLabelGroupRequestPrivate(LookoutEquipmentRequest::DescribeLabelGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLabelGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLabelGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLabelGroupRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLabelGroupResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutEquipment::DescribeLabelGroupRequestPrivate
 * \brief The DescribeLabelGroupRequestPrivate class provides private implementation for DescribeLabelGroupRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a DescribeLabelGroupRequestPrivate object for LookoutEquipment \a action,
 * with public implementation \a q.
 */
DescribeLabelGroupRequestPrivate::DescribeLabelGroupRequestPrivate(
    const LookoutEquipmentRequest::Action action, DescribeLabelGroupRequest * const q)
    : LookoutEquipmentRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLabelGroupRequest
 * class' copy constructor.
 */
DescribeLabelGroupRequestPrivate::DescribeLabelGroupRequestPrivate(
    const DescribeLabelGroupRequestPrivate &other, DescribeLabelGroupRequest * const q)
    : LookoutEquipmentRequestPrivate(other, q)
{

}

} // namespace LookoutEquipment
} // namespace QtAws
