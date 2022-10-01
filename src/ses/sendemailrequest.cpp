// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendemailrequest.h"
#include "sendemailrequest_p.h"
#include "sendemailresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::SendEmailRequest
 * \brief The SendEmailRequest class provides an interface for Ses SendEmail requests.
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
 * \sa SesClient::sendEmail
 */

/*!
 * Constructs a copy of \a other.
 */
SendEmailRequest::SendEmailRequest(const SendEmailRequest &other)
    : SesRequest(new SendEmailRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendEmailRequest object.
 */
SendEmailRequest::SendEmailRequest()
    : SesRequest(new SendEmailRequestPrivate(SesRequest::SendEmailAction, this))
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
 * \class QtAws::Ses::SendEmailRequestPrivate
 * \brief The SendEmailRequestPrivate class provides private implementation for SendEmailRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a SendEmailRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
SendEmailRequestPrivate::SendEmailRequestPrivate(
    const SesRequest::Action action, SendEmailRequest * const q)
    : SesRequestPrivate(action, q)
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
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
