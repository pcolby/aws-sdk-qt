// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendcustomverificationemailrequest.h"
#include "sendcustomverificationemailrequest_p.h"
#include "sendcustomverificationemailresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::SendCustomVerificationEmailRequest
 * \brief The SendCustomVerificationEmailRequest class provides an interface for Ses SendCustomVerificationEmail requests.
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
 * \sa SesClient::sendCustomVerificationEmail
 */

/*!
 * Constructs a copy of \a other.
 */
SendCustomVerificationEmailRequest::SendCustomVerificationEmailRequest(const SendCustomVerificationEmailRequest &other)
    : SesRequest(new SendCustomVerificationEmailRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendCustomVerificationEmailRequest object.
 */
SendCustomVerificationEmailRequest::SendCustomVerificationEmailRequest()
    : SesRequest(new SendCustomVerificationEmailRequestPrivate(SesRequest::SendCustomVerificationEmailAction, this))
{

}

/*!
 * \reimp
 */
bool SendCustomVerificationEmailRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SendCustomVerificationEmailResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SendCustomVerificationEmailRequest::response(QNetworkReply * const reply) const
{
    return new SendCustomVerificationEmailResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::SendCustomVerificationEmailRequestPrivate
 * \brief The SendCustomVerificationEmailRequestPrivate class provides private implementation for SendCustomVerificationEmailRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a SendCustomVerificationEmailRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
SendCustomVerificationEmailRequestPrivate::SendCustomVerificationEmailRequestPrivate(
    const SesRequest::Action action, SendCustomVerificationEmailRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SendCustomVerificationEmailRequest
 * class' copy constructor.
 */
SendCustomVerificationEmailRequestPrivate::SendCustomVerificationEmailRequestPrivate(
    const SendCustomVerificationEmailRequestPrivate &other, SendCustomVerificationEmailRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
