// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
