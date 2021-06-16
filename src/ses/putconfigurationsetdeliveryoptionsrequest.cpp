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

#include "putconfigurationsetdeliveryoptionsrequest.h"
#include "putconfigurationsetdeliveryoptionsrequest_p.h"
#include "putconfigurationsetdeliveryoptionsresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::PutConfigurationSetDeliveryOptionsRequest
 * \brief The PutConfigurationSetDeliveryOptionsRequest class provides an interface for SES PutConfigurationSetDeliveryOptions requests.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::putConfigurationSetDeliveryOptions
 */

/*!
 * Constructs a copy of \a other.
 */
PutConfigurationSetDeliveryOptionsRequest::PutConfigurationSetDeliveryOptionsRequest(const PutConfigurationSetDeliveryOptionsRequest &other)
    : SesRequest(new PutConfigurationSetDeliveryOptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutConfigurationSetDeliveryOptionsRequest object.
 */
PutConfigurationSetDeliveryOptionsRequest::PutConfigurationSetDeliveryOptionsRequest()
    : SesRequest(new PutConfigurationSetDeliveryOptionsRequestPrivate(SesRequest::PutConfigurationSetDeliveryOptionsAction, this))
{

}

/*!
 * \reimp
 */
bool PutConfigurationSetDeliveryOptionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutConfigurationSetDeliveryOptionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutConfigurationSetDeliveryOptionsRequest::response(QNetworkReply * const reply) const
{
    return new PutConfigurationSetDeliveryOptionsResponse(*this, reply);
}

/*!
 * \class QtAws::SES::PutConfigurationSetDeliveryOptionsRequestPrivate
 * \brief The PutConfigurationSetDeliveryOptionsRequestPrivate class provides private implementation for PutConfigurationSetDeliveryOptionsRequest.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a PutConfigurationSetDeliveryOptionsRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
PutConfigurationSetDeliveryOptionsRequestPrivate::PutConfigurationSetDeliveryOptionsRequestPrivate(
    const SesRequest::Action action, PutConfigurationSetDeliveryOptionsRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutConfigurationSetDeliveryOptionsRequest
 * class' copy constructor.
 */
PutConfigurationSetDeliveryOptionsRequestPrivate::PutConfigurationSetDeliveryOptionsRequestPrivate(
    const PutConfigurationSetDeliveryOptionsRequestPrivate &other, PutConfigurationSetDeliveryOptionsRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
