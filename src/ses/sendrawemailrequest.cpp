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

#include "sendrawemailrequest.h"
#include "sendrawemailrequest_p.h"
#include "sendrawemailresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::SendRawEmailRequest
 * \brief The SendRawEmailRequest class provides an interface for Ses SendRawEmail requests.
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
 * \sa SesClient::sendRawEmail
 */

/*!
 * Constructs a copy of \a other.
 */
SendRawEmailRequest::SendRawEmailRequest(const SendRawEmailRequest &other)
    : SesRequest(new SendRawEmailRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendRawEmailRequest object.
 */
SendRawEmailRequest::SendRawEmailRequest()
    : SesRequest(new SendRawEmailRequestPrivate(SesRequest::SendRawEmailAction, this))
{

}

/*!
 * \reimp
 */
bool SendRawEmailRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SendRawEmailResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SendRawEmailRequest::response(QNetworkReply * const reply) const
{
    return new SendRawEmailResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::SendRawEmailRequestPrivate
 * \brief The SendRawEmailRequestPrivate class provides private implementation for SendRawEmailRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a SendRawEmailRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
SendRawEmailRequestPrivate::SendRawEmailRequestPrivate(
    const SesRequest::Action action, SendRawEmailRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SendRawEmailRequest
 * class' copy constructor.
 */
SendRawEmailRequestPrivate::SendRawEmailRequestPrivate(
    const SendRawEmailRequestPrivate &other, SendRawEmailRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
