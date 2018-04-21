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

#include "getgeomatchsetrequest.h"
#include "getgeomatchsetrequest_p.h"
#include "getgeomatchsetresponse.h"
#include "wafregionalrequest_p.h"

namespace QtAws {
namespace WAFRegional {

/*!
 * \class QtAws::WAFRegional::GetGeoMatchSetRequest
 * \brief The GetGeoMatchSetRequest class provides an interface for WAFRegional GetGeoMatchSet requests.
 *
 * \inmodule QtAwsWAFRegional
 *
 *  This is the <i>AWS WAF Regional API Reference</i> for using AWS WAF with Elastic Load Balancing (ELB) Application Load
 *  Balancers. The AWS WAF actions and data types listed in the reference are available for protecting Application Load
 *  Balancers. You can use these actions and data types by means of the endpoints listed in <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#waf_region">AWS Regions and Endpoints</a>. This guide is
 *  for developers who need detailed information about the AWS WAF API actions, data types, and errors. For detailed
 *  information about AWS WAF features and an overview of how to use the AWS WAF API, see the <a
 *  href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WAFRegionalClient::getGeoMatchSet
 */

/*!
 * Constructs a copy of \a other.
 */
GetGeoMatchSetRequest::GetGeoMatchSetRequest(const GetGeoMatchSetRequest &other)
    : WAFRegionalRequest(new GetGeoMatchSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGeoMatchSetRequest object.
 */
GetGeoMatchSetRequest::GetGeoMatchSetRequest()
    : WAFRegionalRequest(new GetGeoMatchSetRequestPrivate(WAFRegionalRequest::GetGeoMatchSetAction, this))
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
 * \class QtAws::WAFRegional::GetGeoMatchSetRequestPrivate
 * \brief The GetGeoMatchSetRequestPrivate class provides private implementation for GetGeoMatchSetRequest.
 * \internal
 *
 * \inmodule QtAwsWAFRegional
 */

/*!
 * Constructs a GetGeoMatchSetRequestPrivate object for WAFRegional \a action,
 * with public implementation \a q.
 */
GetGeoMatchSetRequestPrivate::GetGeoMatchSetRequestPrivate(
    const WAFRegionalRequest::Action action, GetGeoMatchSetRequest * const q)
    : WAFRegionalRequestPrivate(action, q)
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
    : WAFRegionalRequestPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace QtAws
