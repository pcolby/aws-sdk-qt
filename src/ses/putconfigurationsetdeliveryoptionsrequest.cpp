// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putconfigurationsetdeliveryoptionsrequest.h"
#include "putconfigurationsetdeliveryoptionsrequest_p.h"
#include "putconfigurationsetdeliveryoptionsresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::PutConfigurationSetDeliveryOptionsRequest
 * \brief The PutConfigurationSetDeliveryOptionsRequest class provides an interface for Ses PutConfigurationSetDeliveryOptions requests.
 *
 * \inmodule QtAwsSes
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
 * \class QtAws::Ses::PutConfigurationSetDeliveryOptionsRequestPrivate
 * \brief The PutConfigurationSetDeliveryOptionsRequestPrivate class provides private implementation for PutConfigurationSetDeliveryOptionsRequest.
 * \internal
 *
 * \inmodule QtAwsSes
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

} // namespace Ses
} // namespace QtAws
