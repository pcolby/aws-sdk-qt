// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatejobshipmentstaterequest.h"
#include "updatejobshipmentstaterequest_p.h"
#include "updatejobshipmentstateresponse.h"
#include "snowballrequest_p.h"

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::UpdateJobShipmentStateRequest
 * \brief The UpdateJobShipmentStateRequest class provides an interface for Snowball UpdateJobShipmentState requests.
 *
 * \inmodule QtAwsSnowball
 *
 *  The Amazon Web Services Snow Family provides a petabyte-scale data transport solution that uses secure devices to
 *  transfer large amounts of data between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The
 *  Snow Family commands described here provide access to the same functionality that is available in the Amazon Web
 *  Services Snow Family Management Console, which enables you to create and manage jobs for a Snow Family device. To
 *  transfer data locally with a Snow Family device, you'll need to use the Snowball Edge client or the Amazon S3 API
 *  Interface for Snowball or OpsHub for Snow Family. For more information, see the <a
 *  href="https://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
 *
 * \sa SnowballClient::updateJobShipmentState
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateJobShipmentStateRequest::UpdateJobShipmentStateRequest(const UpdateJobShipmentStateRequest &other)
    : SnowballRequest(new UpdateJobShipmentStateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateJobShipmentStateRequest object.
 */
UpdateJobShipmentStateRequest::UpdateJobShipmentStateRequest()
    : SnowballRequest(new UpdateJobShipmentStateRequestPrivate(SnowballRequest::UpdateJobShipmentStateAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateJobShipmentStateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateJobShipmentStateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateJobShipmentStateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateJobShipmentStateResponse(*this, reply);
}

/*!
 * \class QtAws::Snowball::UpdateJobShipmentStateRequestPrivate
 * \brief The UpdateJobShipmentStateRequestPrivate class provides private implementation for UpdateJobShipmentStateRequest.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a UpdateJobShipmentStateRequestPrivate object for Snowball \a action,
 * with public implementation \a q.
 */
UpdateJobShipmentStateRequestPrivate::UpdateJobShipmentStateRequestPrivate(
    const SnowballRequest::Action action, UpdateJobShipmentStateRequest * const q)
    : SnowballRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateJobShipmentStateRequest
 * class' copy constructor.
 */
UpdateJobShipmentStateRequestPrivate::UpdateJobShipmentStateRequestPrivate(
    const UpdateJobShipmentStateRequestPrivate &other, UpdateJobShipmentStateRequest * const q)
    : SnowballRequestPrivate(other, q)
{

}

} // namespace Snowball
} // namespace QtAws
