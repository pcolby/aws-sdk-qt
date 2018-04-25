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

#include "getidentityverificationattributesrequest.h"
#include "getidentityverificationattributesrequest_p.h"
#include "getidentityverificationattributesresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::GetIdentityVerificationAttributesRequest
 * \brief The GetIdentityVerificationAttributesRequest class provides an interface for SES GetIdentityVerificationAttributes requests.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This is the API Reference for <a href="https://aws.amazon.com/ses/">Amazon Simple Email Service</a> (Amazon SES). This
 *  documentation is intended to be used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 *
 * \sa SesClient::getIdentityVerificationAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
GetIdentityVerificationAttributesRequest::GetIdentityVerificationAttributesRequest(const GetIdentityVerificationAttributesRequest &other)
    : SesRequest(new GetIdentityVerificationAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetIdentityVerificationAttributesRequest object.
 */
GetIdentityVerificationAttributesRequest::GetIdentityVerificationAttributesRequest()
    : SesRequest(new GetIdentityVerificationAttributesRequestPrivate(SesRequest::GetIdentityVerificationAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool GetIdentityVerificationAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetIdentityVerificationAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetIdentityVerificationAttributesRequest::response(QNetworkReply * const reply) const
{
    return new GetIdentityVerificationAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::SES::GetIdentityVerificationAttributesRequestPrivate
 * \brief The GetIdentityVerificationAttributesRequestPrivate class provides private implementation for GetIdentityVerificationAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a GetIdentityVerificationAttributesRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
GetIdentityVerificationAttributesRequestPrivate::GetIdentityVerificationAttributesRequestPrivate(
    const SesRequest::Action action, GetIdentityVerificationAttributesRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetIdentityVerificationAttributesRequest
 * class' copy constructor.
 */
GetIdentityVerificationAttributesRequestPrivate::GetIdentityVerificationAttributesRequestPrivate(
    const GetIdentityVerificationAttributesRequestPrivate &other, GetIdentityVerificationAttributesRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
