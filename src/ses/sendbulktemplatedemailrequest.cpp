/*
    Copyright 2013-2018 Paul Colby

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

#include "sendbulktemplatedemailrequest.h"
#include "sendbulktemplatedemailrequest_p.h"
#include "sendbulktemplatedemailresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::SendBulkTemplatedEmailRequest
 * \brief The SendBulkTemplatedEmailRequest class provides an interface for SES SendBulkTemplatedEmail requests.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
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
 * \class QtAws::SES::SendBulkTemplatedEmailRequestPrivate
 * \brief The SendBulkTemplatedEmailRequestPrivate class provides private implementation for SendBulkTemplatedEmailRequest.
 * \internal
 *
 * \inmodule QtAwsSES
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

} // namespace SES
} // namespace QtAws
