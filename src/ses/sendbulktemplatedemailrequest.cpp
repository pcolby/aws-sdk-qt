// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendbulktemplatedemailrequest.h"
#include "sendbulktemplatedemailrequest_p.h"
#include "sendbulktemplatedemailresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::SendBulkTemplatedEmailRequest
 * \brief The SendBulkTemplatedEmailRequest class provides an interface for Ses SendBulkTemplatedEmail requests.
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
 * \sa SesClient::sendBulkTemplatedEmail
 */

/*!
 * Constructs a copy of \a other.
 */
SendBulkTemplatedEmailRequest::SendBulkTemplatedEmailRequest(const SendBulkTemplatedEmailRequest &other)
    : SesRequest(new SendBulkTemplatedEmailRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendBulkTemplatedEmailRequest object.
 */
SendBulkTemplatedEmailRequest::SendBulkTemplatedEmailRequest()
    : SesRequest(new SendBulkTemplatedEmailRequestPrivate(SesRequest::SendBulkTemplatedEmailAction, this))
{

}

/*!
 * \reimp
 */
bool SendBulkTemplatedEmailRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SendBulkTemplatedEmailResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SendBulkTemplatedEmailRequest::response(QNetworkReply * const reply) const
{
    return new SendBulkTemplatedEmailResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::SendBulkTemplatedEmailRequestPrivate
 * \brief The SendBulkTemplatedEmailRequestPrivate class provides private implementation for SendBulkTemplatedEmailRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a SendBulkTemplatedEmailRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
SendBulkTemplatedEmailRequestPrivate::SendBulkTemplatedEmailRequestPrivate(
    const SesRequest::Action action, SendBulkTemplatedEmailRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SendBulkTemplatedEmailRequest
 * class' copy constructor.
 */
SendBulkTemplatedEmailRequestPrivate::SendBulkTemplatedEmailRequestPrivate(
    const SendBulkTemplatedEmailRequestPrivate &other, SendBulkTemplatedEmailRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
