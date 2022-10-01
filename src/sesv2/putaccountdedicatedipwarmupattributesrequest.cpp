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

#include "putaccountdedicatedipwarmupattributesrequest.h"
#include "putaccountdedicatedipwarmupattributesrequest_p.h"
#include "putaccountdedicatedipwarmupattributesresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::PutAccountDedicatedIpWarmupAttributesRequest
 * \brief The PutAccountDedicatedIpWarmupAttributesRequest class provides an interface for SESv2 PutAccountDedicatedIpWarmupAttributes requests.
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
 * \sa SESv2Client::putAccountDedicatedIpWarmupAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
PutAccountDedicatedIpWarmupAttributesRequest::PutAccountDedicatedIpWarmupAttributesRequest(const PutAccountDedicatedIpWarmupAttributesRequest &other)
    : SESv2Request(new PutAccountDedicatedIpWarmupAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutAccountDedicatedIpWarmupAttributesRequest object.
 */
PutAccountDedicatedIpWarmupAttributesRequest::PutAccountDedicatedIpWarmupAttributesRequest()
    : SESv2Request(new PutAccountDedicatedIpWarmupAttributesRequestPrivate(SESv2Request::PutAccountDedicatedIpWarmupAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool PutAccountDedicatedIpWarmupAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutAccountDedicatedIpWarmupAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutAccountDedicatedIpWarmupAttributesRequest::response(QNetworkReply * const reply) const
{
    return new PutAccountDedicatedIpWarmupAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::PutAccountDedicatedIpWarmupAttributesRequestPrivate
 * \brief The PutAccountDedicatedIpWarmupAttributesRequestPrivate class provides private implementation for PutAccountDedicatedIpWarmupAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a PutAccountDedicatedIpWarmupAttributesRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
PutAccountDedicatedIpWarmupAttributesRequestPrivate::PutAccountDedicatedIpWarmupAttributesRequestPrivate(
    const SESv2Request::Action action, PutAccountDedicatedIpWarmupAttributesRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutAccountDedicatedIpWarmupAttributesRequest
 * class' copy constructor.
 */
PutAccountDedicatedIpWarmupAttributesRequestPrivate::PutAccountDedicatedIpWarmupAttributesRequestPrivate(
    const PutAccountDedicatedIpWarmupAttributesRequestPrivate &other, PutAccountDedicatedIpWarmupAttributesRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
