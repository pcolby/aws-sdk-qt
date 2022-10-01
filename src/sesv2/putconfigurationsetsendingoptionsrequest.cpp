// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putconfigurationsetsendingoptionsrequest.h"
#include "putconfigurationsetsendingoptionsrequest_p.h"
#include "putconfigurationsetsendingoptionsresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::PutConfigurationSetSendingOptionsRequest
 * \brief The PutConfigurationSetSendingOptionsRequest class provides an interface for SESv2 PutConfigurationSetSendingOptions requests.
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
 * \sa SESv2Client::putConfigurationSetSendingOptions
 */

/*!
 * Constructs a copy of \a other.
 */
PutConfigurationSetSendingOptionsRequest::PutConfigurationSetSendingOptionsRequest(const PutConfigurationSetSendingOptionsRequest &other)
    : SESv2Request(new PutConfigurationSetSendingOptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutConfigurationSetSendingOptionsRequest object.
 */
PutConfigurationSetSendingOptionsRequest::PutConfigurationSetSendingOptionsRequest()
    : SESv2Request(new PutConfigurationSetSendingOptionsRequestPrivate(SESv2Request::PutConfigurationSetSendingOptionsAction, this))
{

}

/*!
 * \reimp
 */
bool PutConfigurationSetSendingOptionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutConfigurationSetSendingOptionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutConfigurationSetSendingOptionsRequest::response(QNetworkReply * const reply) const
{
    return new PutConfigurationSetSendingOptionsResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::PutConfigurationSetSendingOptionsRequestPrivate
 * \brief The PutConfigurationSetSendingOptionsRequestPrivate class provides private implementation for PutConfigurationSetSendingOptionsRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a PutConfigurationSetSendingOptionsRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
PutConfigurationSetSendingOptionsRequestPrivate::PutConfigurationSetSendingOptionsRequestPrivate(
    const SESv2Request::Action action, PutConfigurationSetSendingOptionsRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutConfigurationSetSendingOptionsRequest
 * class' copy constructor.
 */
PutConfigurationSetSendingOptionsRequestPrivate::PutConfigurationSetSendingOptionsRequestPrivate(
    const PutConfigurationSetSendingOptionsRequestPrivate &other, PutConfigurationSetSendingOptionsRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
