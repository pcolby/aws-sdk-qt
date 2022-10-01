// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putconfigurationsettrackingoptionsrequest.h"
#include "putconfigurationsettrackingoptionsrequest_p.h"
#include "putconfigurationsettrackingoptionsresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::PutConfigurationSetTrackingOptionsRequest
 * \brief The PutConfigurationSetTrackingOptionsRequest class provides an interface for SESv2 PutConfigurationSetTrackingOptions requests.
 *
 * \inmodule QtAwsSESv2
 *
 *  <fullname>Amazon SES API v2</fullname>
 * 
 *  <a href="http://aws.amazon.com/ses">Amazon SES</a> is an Amazon Web Services service that you can use to send email
 *  messages to your
 * 
 *  customers>
 * 
 *  If you're new to Amazon SES API v2, you might find it helpful to review the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple Email Service Developer Guide</a>. The
 *  <i>Amazon SES Developer Guide</i> provides information and code samples that demonstrate how to use Amazon SES API v2
 *  features
 *
 * \sa SESv2Client::putConfigurationSetTrackingOptions
 */

/*!
 * Constructs a copy of \a other.
 */
PutConfigurationSetTrackingOptionsRequest::PutConfigurationSetTrackingOptionsRequest(const PutConfigurationSetTrackingOptionsRequest &other)
    : SESv2Request(new PutConfigurationSetTrackingOptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutConfigurationSetTrackingOptionsRequest object.
 */
PutConfigurationSetTrackingOptionsRequest::PutConfigurationSetTrackingOptionsRequest()
    : SESv2Request(new PutConfigurationSetTrackingOptionsRequestPrivate(SESv2Request::PutConfigurationSetTrackingOptionsAction, this))
{

}

/*!
 * \reimp
 */
bool PutConfigurationSetTrackingOptionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutConfigurationSetTrackingOptionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutConfigurationSetTrackingOptionsRequest::response(QNetworkReply * const reply) const
{
    return new PutConfigurationSetTrackingOptionsResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::PutConfigurationSetTrackingOptionsRequestPrivate
 * \brief The PutConfigurationSetTrackingOptionsRequestPrivate class provides private implementation for PutConfigurationSetTrackingOptionsRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a PutConfigurationSetTrackingOptionsRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
PutConfigurationSetTrackingOptionsRequestPrivate::PutConfigurationSetTrackingOptionsRequestPrivate(
    const SESv2Request::Action action, PutConfigurationSetTrackingOptionsRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutConfigurationSetTrackingOptionsRequest
 * class' copy constructor.
 */
PutConfigurationSetTrackingOptionsRequestPrivate::PutConfigurationSetTrackingOptionsRequestPrivate(
    const PutConfigurationSetTrackingOptionsRequestPrivate &other, PutConfigurationSetTrackingOptionsRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
