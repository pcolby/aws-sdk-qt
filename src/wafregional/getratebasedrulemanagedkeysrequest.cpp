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

#include "getratebasedrulemanagedkeysrequest.h"
#include "getratebasedrulemanagedkeysrequest_p.h"
#include "getratebasedrulemanagedkeysresponse.h"
#include "wafregionalrequest_p.h"

namespace QtAws {
namespace WAFRegional {

/*!
 * \class QtAws::WAFRegional::GetRateBasedRuleManagedKeysRequest
 * \brief The GetRateBasedRuleManagedKeysRequest class provides an interface for WAFRegional GetRateBasedRuleManagedKeys requests.
 *
 * \inmodule QtAwsWAFRegional
 *
 *  This is the <i>AWS WAF Regional API Reference</i> for using AWS WAF with Elastic Load Balancing (ELB) Application Load
 *  Balancers. The AWS WAF actions and data types listed in the reference are available for protecting Application Load
 *  Balancers. You can use these actions and data types by means of the endpoints listed in <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/rande.html#waf_region">AWS Regions and Endpoints</a>. This guide is
 *  for developers who need detailed information about the AWS WAF API actions, data types, and errors. For detailed
 *  information about AWS WAF features and an overview of how to use the AWS WAF API, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WAFRegionalClient::getRateBasedRuleManagedKeys
 */

/*!
 * Constructs a copy of \a other.
 */
GetRateBasedRuleManagedKeysRequest::GetRateBasedRuleManagedKeysRequest(const GetRateBasedRuleManagedKeysRequest &other)
    : WAFRegionalRequest(new GetRateBasedRuleManagedKeysRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRateBasedRuleManagedKeysRequest object.
 */
GetRateBasedRuleManagedKeysRequest::GetRateBasedRuleManagedKeysRequest()
    : WAFRegionalRequest(new GetRateBasedRuleManagedKeysRequestPrivate(WAFRegionalRequest::GetRateBasedRuleManagedKeysAction, this))
{

}

/*!
 * \reimp
 */
bool GetRateBasedRuleManagedKeysRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRateBasedRuleManagedKeysResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRateBasedRuleManagedKeysRequest::response(QNetworkReply * const reply) const
{
    return new GetRateBasedRuleManagedKeysResponse(*this, reply);
}

/*!
 * \class QtAws::WAFRegional::GetRateBasedRuleManagedKeysRequestPrivate
 * \brief The GetRateBasedRuleManagedKeysRequestPrivate class provides private implementation for GetRateBasedRuleManagedKeysRequest.
 * \internal
 *
 * \inmodule QtAwsWAFRegional
 */

/*!
 * Constructs a GetRateBasedRuleManagedKeysRequestPrivate object for WAFRegional \a action,
 * with public implementation \a q.
 */
GetRateBasedRuleManagedKeysRequestPrivate::GetRateBasedRuleManagedKeysRequestPrivate(
    const WAFRegionalRequest::Action action, GetRateBasedRuleManagedKeysRequest * const q)
    : WAFRegionalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRateBasedRuleManagedKeysRequest
 * class' copy constructor.
 */
GetRateBasedRuleManagedKeysRequestPrivate::GetRateBasedRuleManagedKeysRequestPrivate(
    const GetRateBasedRuleManagedKeysRequestPrivate &other, GetRateBasedRuleManagedKeysRequest * const q)
    : WAFRegionalRequestPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace QtAws
