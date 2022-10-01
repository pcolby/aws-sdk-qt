// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendtemplatedemailrequest.h"
#include "sendtemplatedemailrequest_p.h"
#include "sendtemplatedemailresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::SendTemplatedEmailRequest
 * \brief The SendTemplatedEmailRequest class provides an interface for Ses SendTemplatedEmail requests.
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
 * \sa SesClient::sendTemplatedEmail
 */

/*!
 * Constructs a copy of \a other.
 */
SendTemplatedEmailRequest::SendTemplatedEmailRequest(const SendTemplatedEmailRequest &other)
    : SesRequest(new SendTemplatedEmailRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendTemplatedEmailRequest object.
 */
SendTemplatedEmailRequest::SendTemplatedEmailRequest()
    : SesRequest(new SendTemplatedEmailRequestPrivate(SesRequest::SendTemplatedEmailAction, this))
{

}

/*!
 * \reimp
 */
bool SendTemplatedEmailRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SendTemplatedEmailResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SendTemplatedEmailRequest::response(QNetworkReply * const reply) const
{
    return new SendTemplatedEmailResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::SendTemplatedEmailRequestPrivate
 * \brief The SendTemplatedEmailRequestPrivate class provides private implementation for SendTemplatedEmailRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a SendTemplatedEmailRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
SendTemplatedEmailRequestPrivate::SendTemplatedEmailRequestPrivate(
    const SesRequest::Action action, SendTemplatedEmailRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SendTemplatedEmailRequest
 * class' copy constructor.
 */
SendTemplatedEmailRequestPrivate::SendTemplatedEmailRequestPrivate(
    const SendTemplatedEmailRequestPrivate &other, SendTemplatedEmailRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
