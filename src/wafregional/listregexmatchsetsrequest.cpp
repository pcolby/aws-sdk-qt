/*
    Copyright 2013-2019 Paul Colby

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

#include "listregexmatchsetsrequest.h"
#include "listregexmatchsetsrequest_p.h"
#include "listregexmatchsetsresponse.h"
#include "wafregionalrequest_p.h"

namespace QtAws {
namespace WAFRegional {

/*!
 * \class QtAws::WAFRegional::ListRegexMatchSetsRequest
 * \brief The ListRegexMatchSetsRequest class provides an interface for WAFRegional ListRegexMatchSets requests.
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
 * \sa WAFRegionalClient::listRegexMatchSets
 */

/*!
 * Constructs a copy of \a other.
 */
ListRegexMatchSetsRequest::ListRegexMatchSetsRequest(const ListRegexMatchSetsRequest &other)
    : WAFRegionalRequest(new ListRegexMatchSetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRegexMatchSetsRequest object.
 */
ListRegexMatchSetsRequest::ListRegexMatchSetsRequest()
    : WAFRegionalRequest(new ListRegexMatchSetsRequestPrivate(WAFRegionalRequest::ListRegexMatchSetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListRegexMatchSetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRegexMatchSetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRegexMatchSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListRegexMatchSetsResponse(*this, reply);
}

/*!
 * \class QtAws::WAFRegional::ListRegexMatchSetsRequestPrivate
 * \brief The ListRegexMatchSetsRequestPrivate class provides private implementation for ListRegexMatchSetsRequest.
 * \internal
 *
 * \inmodule QtAwsWAFRegional
 */

/*!
 * Constructs a ListRegexMatchSetsRequestPrivate object for WAFRegional \a action,
 * with public implementation \a q.
 */
ListRegexMatchSetsRequestPrivate::ListRegexMatchSetsRequestPrivate(
    const WAFRegionalRequest::Action action, ListRegexMatchSetsRequest * const q)
    : WAFRegionalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRegexMatchSetsRequest
 * class' copy constructor.
 */
ListRegexMatchSetsRequestPrivate::ListRegexMatchSetsRequestPrivate(
    const ListRegexMatchSetsRequestPrivate &other, ListRegexMatchSetsRequest * const q)
    : WAFRegionalRequestPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace QtAws
