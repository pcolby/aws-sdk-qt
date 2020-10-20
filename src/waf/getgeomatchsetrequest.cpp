/*
    Copyright 2013-2020 Paul Colby

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

#include "getgeomatchsetrequest.h"
#include "getgeomatchsetrequest_p.h"
#include "getgeomatchsetresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::GetGeoMatchSetRequest
 * \brief The GetGeoMatchSetRequest class provides an interface for WAF GetGeoMatchSet requests.
 *
 * \inmodule QtAwsWAF
 *
 *  This is the <i>AWS WAF API Reference</i> for using AWS WAF with Amazon CloudFront. The AWS WAF actions and data types
 *  listed in the reference are available for protecting Amazon CloudFront distributions. You can use these actions and data
 *  types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed information about the
 *  AWS WAF API actions, data types, and errors. For detailed information about AWS WAF features and an overview of how to
 *  use the AWS WAF API, see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WafClient::getGeoMatchSet
 */

/*!
 * Constructs a copy of \a other.
 */
GetGeoMatchSetRequest::GetGeoMatchSetRequest(const GetGeoMatchSetRequest &other)
    : WafRequest(new GetGeoMatchSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGeoMatchSetRequest object.
 */
GetGeoMatchSetRequest::GetGeoMatchSetRequest()
    : WafRequest(new GetGeoMatchSetRequestPrivate(WafRequest::GetGeoMatchSetAction, this))
{

}

/*!
 * \reimp
 */
bool GetGeoMatchSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGeoMatchSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGeoMatchSetRequest::response(QNetworkReply * const reply) const
{
    return new GetGeoMatchSetResponse(*this, reply);
}

/*!
 * \class QtAws::WAF::GetGeoMatchSetRequestPrivate
 * \brief The GetGeoMatchSetRequestPrivate class provides private implementation for GetGeoMatchSetRequest.
 * \internal
 *
 * \inmodule QtAwsWAF
 */

/*!
 * Constructs a GetGeoMatchSetRequestPrivate object for Waf \a action,
 * with public implementation \a q.
 */
GetGeoMatchSetRequestPrivate::GetGeoMatchSetRequestPrivate(
    const WafRequest::Action action, GetGeoMatchSetRequest * const q)
    : WafRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGeoMatchSetRequest
 * class' copy constructor.
 */
GetGeoMatchSetRequestPrivate::GetGeoMatchSetRequestPrivate(
    const GetGeoMatchSetRequestPrivate &other, GetGeoMatchSetRequest * const q)
    : WafRequestPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws
