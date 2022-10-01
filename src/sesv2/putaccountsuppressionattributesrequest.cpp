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

#include "putaccountsuppressionattributesrequest.h"
#include "putaccountsuppressionattributesrequest_p.h"
#include "putaccountsuppressionattributesresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::PutAccountSuppressionAttributesRequest
 * \brief The PutAccountSuppressionAttributesRequest class provides an interface for SESv2 PutAccountSuppressionAttributes requests.
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
 * \sa SESv2Client::putAccountSuppressionAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
PutAccountSuppressionAttributesRequest::PutAccountSuppressionAttributesRequest(const PutAccountSuppressionAttributesRequest &other)
    : SESv2Request(new PutAccountSuppressionAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutAccountSuppressionAttributesRequest object.
 */
PutAccountSuppressionAttributesRequest::PutAccountSuppressionAttributesRequest()
    : SESv2Request(new PutAccountSuppressionAttributesRequestPrivate(SESv2Request::PutAccountSuppressionAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool PutAccountSuppressionAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutAccountSuppressionAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutAccountSuppressionAttributesRequest::response(QNetworkReply * const reply) const
{
    return new PutAccountSuppressionAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::PutAccountSuppressionAttributesRequestPrivate
 * \brief The PutAccountSuppressionAttributesRequestPrivate class provides private implementation for PutAccountSuppressionAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a PutAccountSuppressionAttributesRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
PutAccountSuppressionAttributesRequestPrivate::PutAccountSuppressionAttributesRequestPrivate(
    const SESv2Request::Action action, PutAccountSuppressionAttributesRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutAccountSuppressionAttributesRequest
 * class' copy constructor.
 */
PutAccountSuppressionAttributesRequestPrivate::PutAccountSuppressionAttributesRequestPrivate(
    const PutAccountSuppressionAttributesRequestPrivate &other, PutAccountSuppressionAttributesRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
