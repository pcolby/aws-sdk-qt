// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlongtermpricingrequest.h"
#include "createlongtermpricingrequest_p.h"
#include "createlongtermpricingresponse.h"
#include "snowballrequest_p.h"

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::CreateLongTermPricingRequest
 * \brief The CreateLongTermPricingRequest class provides an interface for Snowball CreateLongTermPricing requests.
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
 * \sa SnowballClient::createLongTermPricing
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLongTermPricingRequest::CreateLongTermPricingRequest(const CreateLongTermPricingRequest &other)
    : SnowballRequest(new CreateLongTermPricingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLongTermPricingRequest object.
 */
CreateLongTermPricingRequest::CreateLongTermPricingRequest()
    : SnowballRequest(new CreateLongTermPricingRequestPrivate(SnowballRequest::CreateLongTermPricingAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLongTermPricingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLongTermPricingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLongTermPricingRequest::response(QNetworkReply * const reply) const
{
    return new CreateLongTermPricingResponse(*this, reply);
}

/*!
 * \class QtAws::Snowball::CreateLongTermPricingRequestPrivate
 * \brief The CreateLongTermPricingRequestPrivate class provides private implementation for CreateLongTermPricingRequest.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a CreateLongTermPricingRequestPrivate object for Snowball \a action,
 * with public implementation \a q.
 */
CreateLongTermPricingRequestPrivate::CreateLongTermPricingRequestPrivate(
    const SnowballRequest::Action action, CreateLongTermPricingRequest * const q)
    : SnowballRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLongTermPricingRequest
 * class' copy constructor.
 */
CreateLongTermPricingRequestPrivate::CreateLongTermPricingRequestPrivate(
    const CreateLongTermPricingRequestPrivate &other, CreateLongTermPricingRequest * const q)
    : SnowballRequestPrivate(other, q)
{

}

} // namespace Snowball
} // namespace QtAws
