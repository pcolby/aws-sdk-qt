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

#include "listgeomatchsetsrequest.h"
#include "listgeomatchsetsrequest_p.h"
#include "listgeomatchsetsresponse.h"
#include "wafregionalrequest_p.h"

namespace QtAws {
namespace WAFRegional {

/*!
 * \class QtAws::WAFRegional::ListGeoMatchSetsRequest
 * \brief The ListGeoMatchSetsRequest class provides an interface for WAFRegional ListGeoMatchSets requests.
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
 * \sa WAFRegionalClient::listGeoMatchSets
 */

/*!
 * Constructs a copy of \a other.
 */
ListGeoMatchSetsRequest::ListGeoMatchSetsRequest(const ListGeoMatchSetsRequest &other)
    : WAFRegionalRequest(new ListGeoMatchSetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListGeoMatchSetsRequest object.
 */
ListGeoMatchSetsRequest::ListGeoMatchSetsRequest()
    : WAFRegionalRequest(new ListGeoMatchSetsRequestPrivate(WAFRegionalRequest::ListGeoMatchSetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListGeoMatchSetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListGeoMatchSetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGeoMatchSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListGeoMatchSetsResponse(*this, reply);
}

/*!
 * \class QtAws::WAFRegional::ListGeoMatchSetsRequestPrivate
 * \brief The ListGeoMatchSetsRequestPrivate class provides private implementation for ListGeoMatchSetsRequest.
 * \internal
 *
 * \inmodule QtAwsWAFRegional
 */

/*!
 * Constructs a ListGeoMatchSetsRequestPrivate object for WAFRegional \a action,
 * with public implementation \a q.
 */
ListGeoMatchSetsRequestPrivate::ListGeoMatchSetsRequestPrivate(
    const WAFRegionalRequest::Action action, ListGeoMatchSetsRequest * const q)
    : WAFRegionalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListGeoMatchSetsRequest
 * class' copy constructor.
 */
ListGeoMatchSetsRequestPrivate::ListGeoMatchSetsRequestPrivate(
    const ListGeoMatchSetsRequestPrivate &other, ListGeoMatchSetsRequest * const q)
    : WAFRegionalRequestPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace QtAws
