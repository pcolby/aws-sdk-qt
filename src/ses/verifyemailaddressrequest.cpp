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

#include "verifyemailaddressrequest.h"
#include "verifyemailaddressrequest_p.h"
#include "verifyemailaddressresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::VerifyEmailAddressRequest
 * \brief The VerifyEmailAddressRequest class provides an interface for SES VerifyEmailAddress requests.
 *
 * \inmodule QtAwsSES
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
 * \sa SesClient::verifyEmailAddress
 */

/*!
 * Constructs a copy of \a other.
 */
VerifyEmailAddressRequest::VerifyEmailAddressRequest(const VerifyEmailAddressRequest &other)
    : SesRequest(new VerifyEmailAddressRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a VerifyEmailAddressRequest object.
 */
VerifyEmailAddressRequest::VerifyEmailAddressRequest()
    : SesRequest(new VerifyEmailAddressRequestPrivate(SesRequest::VerifyEmailAddressAction, this))
{

}

/*!
 * \reimp
 */
bool VerifyEmailAddressRequest::isValid() const
{
    return false;
}


/*!
 * Returns a VerifyEmailAddressResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * VerifyEmailAddressRequest::response(QNetworkReply * const reply) const
{
    return new VerifyEmailAddressResponse(*this, reply);
}

/*!
 * \class QtAws::SES::VerifyEmailAddressRequestPrivate
 * \brief The VerifyEmailAddressRequestPrivate class provides private implementation for VerifyEmailAddressRequest.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a VerifyEmailAddressRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
VerifyEmailAddressRequestPrivate::VerifyEmailAddressRequestPrivate(
    const SesRequest::Action action, VerifyEmailAddressRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the VerifyEmailAddressRequest
 * class' copy constructor.
 */
VerifyEmailAddressRequestPrivate::VerifyEmailAddressRequestPrivate(
    const VerifyEmailAddressRequestPrivate &other, VerifyEmailAddressRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
