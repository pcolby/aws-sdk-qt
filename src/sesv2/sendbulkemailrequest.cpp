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

#include "sendbulkemailrequest.h"
#include "sendbulkemailrequest_p.h"
#include "sendbulkemailresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::SendBulkEmailRequest
 * \brief The SendBulkEmailRequest class provides an interface for SESv2 SendBulkEmail requests.
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
 * \sa SESv2Client::sendBulkEmail
 */

/*!
 * Constructs a copy of \a other.
 */
SendBulkEmailRequest::SendBulkEmailRequest(const SendBulkEmailRequest &other)
    : SESv2Request(new SendBulkEmailRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendBulkEmailRequest object.
 */
SendBulkEmailRequest::SendBulkEmailRequest()
    : SESv2Request(new SendBulkEmailRequestPrivate(SESv2Request::SendBulkEmailAction, this))
{

}

/*!
 * \reimp
 */
bool SendBulkEmailRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SendBulkEmailResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SendBulkEmailRequest::response(QNetworkReply * const reply) const
{
    return new SendBulkEmailResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::SendBulkEmailRequestPrivate
 * \brief The SendBulkEmailRequestPrivate class provides private implementation for SendBulkEmailRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a SendBulkEmailRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
SendBulkEmailRequestPrivate::SendBulkEmailRequestPrivate(
    const SESv2Request::Action action, SendBulkEmailRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SendBulkEmailRequest
 * class' copy constructor.
 */
SendBulkEmailRequestPrivate::SendBulkEmailRequestPrivate(
    const SendBulkEmailRequestPrivate &other, SendBulkEmailRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
