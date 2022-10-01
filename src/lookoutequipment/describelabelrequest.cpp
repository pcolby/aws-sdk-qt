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

#include "describelabelrequest.h"
#include "describelabelrequest_p.h"
#include "describelabelresponse.h"
#include "lookoutequipmentrequest_p.h"

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::DescribeLabelRequest
 * \brief The DescribeLabelRequest class provides an interface for LookoutEquipment DescribeLabel requests.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::describeLabel
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLabelRequest::DescribeLabelRequest(const DescribeLabelRequest &other)
    : LookoutEquipmentRequest(new DescribeLabelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLabelRequest object.
 */
DescribeLabelRequest::DescribeLabelRequest()
    : LookoutEquipmentRequest(new DescribeLabelRequestPrivate(LookoutEquipmentRequest::DescribeLabelAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLabelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLabelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLabelRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLabelResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutEquipment::DescribeLabelRequestPrivate
 * \brief The DescribeLabelRequestPrivate class provides private implementation for DescribeLabelRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a DescribeLabelRequestPrivate object for LookoutEquipment \a action,
 * with public implementation \a q.
 */
DescribeLabelRequestPrivate::DescribeLabelRequestPrivate(
    const LookoutEquipmentRequest::Action action, DescribeLabelRequest * const q)
    : LookoutEquipmentRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLabelRequest
 * class' copy constructor.
 */
DescribeLabelRequestPrivate::DescribeLabelRequestPrivate(
    const DescribeLabelRequestPrivate &other, DescribeLabelRequest * const q)
    : LookoutEquipmentRequestPrivate(other, q)
{

}

} // namespace LookoutEquipment
} // namespace QtAws
