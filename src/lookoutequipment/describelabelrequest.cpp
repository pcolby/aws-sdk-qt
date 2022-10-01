// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
