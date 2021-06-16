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

#include "updatelongtermpricingrequest.h"
#include "updatelongtermpricingrequest_p.h"
#include "updatelongtermpricingresponse.h"
#include "snowballrequest_p.h"

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::UpdateLongTermPricingRequest
 * \brief The UpdateLongTermPricingRequest class provides an interface for Snowball UpdateLongTermPricing requests.
 *
 * \inmodule QtAwsSnowball
 *
 *  AWS Snow Family is a petabyte-scale data transport solution that uses secure devices to transfer large amounts of data
 *  between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The Snow commands described here
 *  provide access to the same functionality that is available in the AWS Snow Family Management Console, which enables you
 *  to create and manage jobs for a Snow device. To transfer data locally with a Snow device, you'll need to use the
 *  Snowball Edge client or the Amazon S3 API Interface for Snowball or AWS OpsHub for Snow Family. For more information,
 *  see the <a href="https://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
 *
 * \sa SnowballClient::updateLongTermPricing
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateLongTermPricingRequest::UpdateLongTermPricingRequest(const UpdateLongTermPricingRequest &other)
    : SnowballRequest(new UpdateLongTermPricingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateLongTermPricingRequest object.
 */
UpdateLongTermPricingRequest::UpdateLongTermPricingRequest()
    : SnowballRequest(new UpdateLongTermPricingRequestPrivate(SnowballRequest::UpdateLongTermPricingAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateLongTermPricingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateLongTermPricingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateLongTermPricingRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLongTermPricingResponse(*this, reply);
}

/*!
 * \class QtAws::Snowball::UpdateLongTermPricingRequestPrivate
 * \brief The UpdateLongTermPricingRequestPrivate class provides private implementation for UpdateLongTermPricingRequest.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a UpdateLongTermPricingRequestPrivate object for Snowball \a action,
 * with public implementation \a q.
 */
UpdateLongTermPricingRequestPrivate::UpdateLongTermPricingRequestPrivate(
    const SnowballRequest::Action action, UpdateLongTermPricingRequest * const q)
    : SnowballRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateLongTermPricingRequest
 * class' copy constructor.
 */
UpdateLongTermPricingRequestPrivate::UpdateLongTermPricingRequestPrivate(
    const UpdateLongTermPricingRequestPrivate &other, UpdateLongTermPricingRequest * const q)
    : SnowballRequestPrivate(other, q)
{

}

} // namespace Snowball
} // namespace QtAws
