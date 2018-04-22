/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getchangetokenrequest.h"
#include "getchangetokenrequest_p.h"
#include "getchangetokenresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::GetChangeTokenRequest
 * \brief The GetChangeTokenRequest class provides an interface for WAF GetChangeToken requests.
 *
 * \inmodule QtAwsWAF
 *
 *  This is the <i>AWS WAF API Reference</i> for using AWS WAF with Amazon CloudFront. The AWS WAF actions and data types
 *  listed in the reference are available for protecting Amazon CloudFront distributions. You can use these actions and data
 *  types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed information about the
 *  AWS WAF API actions, data types, and errors. For detailed information about AWS WAF features and an overview of how to
 *  use the AWS WAF API, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WafClient::getChangeToken
 */

/*!
 * Constructs a copy of \a other.
 */
GetChangeTokenRequest::GetChangeTokenRequest(const GetChangeTokenRequest &other)
    : WafRequest(new GetChangeTokenRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetChangeTokenRequest object.
 */
GetChangeTokenRequest::GetChangeTokenRequest()
    : WafRequest(new GetChangeTokenRequestPrivate(WafRequest::GetChangeTokenAction, this))
{

}

/*!
 * \reimp
 */
bool GetChangeTokenRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetChangeTokenResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetChangeTokenRequest::response(QNetworkReply * const reply) const
{
    return new GetChangeTokenResponse(*this, reply);
}

/*!
 * \class QtAws::WAF::GetChangeTokenRequestPrivate
 * \brief The GetChangeTokenRequestPrivate class provides private implementation for GetChangeTokenRequest.
 * \internal
 *
 * \inmodule QtAwsWAF
 */

/*!
 * Constructs a GetChangeTokenRequestPrivate object for Waf \a action,
 * with public implementation \a q.
 */
GetChangeTokenRequestPrivate::GetChangeTokenRequestPrivate(
    const WafRequest::Action action, GetChangeTokenRequest * const q)
    : WafRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetChangeTokenRequest
 * class' copy constructor.
 */
GetChangeTokenRequestPrivate::GetChangeTokenRequestPrivate(
    const GetChangeTokenRequestPrivate &other, GetChangeTokenRequest * const q)
    : WafRequestPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws
