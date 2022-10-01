// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  The Amazon Web Services Snow Family provides a petabyte-scale data transport solution that uses secure devices to
 *  transfer large amounts of data between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The
 *  Snow Family commands described here provide access to the same functionality that is available in the Amazon Web
 *  Services Snow Family Management Console, which enables you to create and manage jobs for a Snow Family device. To
 *  transfer data locally with a Snow Family device, you'll need to use the Snowball Edge client or the Amazon S3 API
 *  Interface for Snowball or OpsHub for Snow Family. For more information, see the <a
 *  href="https://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
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
