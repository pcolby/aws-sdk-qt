// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendemailrequest.h"
#include "sendemailrequest_p.h"
#include "sendemailresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::SendEmailRequest
 * \brief The SendEmailRequest class provides an interface for SESv2 SendEmail requests.
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
 * \sa SESv2Client::sendEmail
 */

/*!
 * Constructs a copy of \a other.
 */
SendEmailRequest::SendEmailRequest(const SendEmailRequest &other)
    : SESv2Request(new SendEmailRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendEmailRequest object.
 */
SendEmailRequest::SendEmailRequest()
    : SESv2Request(new SendEmailRequestPrivate(SESv2Request::SendEmailAction, this))
{

}

/*!
 * \reimp
 */
bool SendEmailRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SendEmailResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SendEmailRequest::response(QNetworkReply * const reply) const
{
    return new SendEmailResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::SendEmailRequestPrivate
 * \brief The SendEmailRequestPrivate class provides private implementation for SendEmailRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a SendEmailRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
SendEmailRequestPrivate::SendEmailRequestPrivate(
    const SESv2Request::Action action, SendEmailRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SendEmailRequest
 * class' copy constructor.
 */
SendEmailRequestPrivate::SendEmailRequestPrivate(
    const SendEmailRequestPrivate &other, SendEmailRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
