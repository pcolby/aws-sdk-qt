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

#include "putdedicatedipinpoolrequest.h"
#include "putdedicatedipinpoolrequest_p.h"
#include "putdedicatedipinpoolresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::PutDedicatedIpInPoolRequest
 * \brief The PutDedicatedIpInPoolRequest class provides an interface for SESv2 PutDedicatedIpInPool requests.
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
 * \sa SESv2Client::putDedicatedIpInPool
 */

/*!
 * Constructs a copy of \a other.
 */
PutDedicatedIpInPoolRequest::PutDedicatedIpInPoolRequest(const PutDedicatedIpInPoolRequest &other)
    : SESv2Request(new PutDedicatedIpInPoolRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutDedicatedIpInPoolRequest object.
 */
PutDedicatedIpInPoolRequest::PutDedicatedIpInPoolRequest()
    : SESv2Request(new PutDedicatedIpInPoolRequestPrivate(SESv2Request::PutDedicatedIpInPoolAction, this))
{

}

/*!
 * \reimp
 */
bool PutDedicatedIpInPoolRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutDedicatedIpInPoolResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutDedicatedIpInPoolRequest::response(QNetworkReply * const reply) const
{
    return new PutDedicatedIpInPoolResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::PutDedicatedIpInPoolRequestPrivate
 * \brief The PutDedicatedIpInPoolRequestPrivate class provides private implementation for PutDedicatedIpInPoolRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a PutDedicatedIpInPoolRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
PutDedicatedIpInPoolRequestPrivate::PutDedicatedIpInPoolRequestPrivate(
    const SESv2Request::Action action, PutDedicatedIpInPoolRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutDedicatedIpInPoolRequest
 * class' copy constructor.
 */
PutDedicatedIpInPoolRequestPrivate::PutDedicatedIpInPoolRequestPrivate(
    const PutDedicatedIpInPoolRequestPrivate &other, PutDedicatedIpInPoolRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
