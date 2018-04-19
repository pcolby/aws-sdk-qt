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

#include "listwebaclsrequest.h"
#include "listwebaclsrequest_p.h"
#include "listwebaclsresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::ListWebACLsRequest
 * \brief The ListWebACLsRequest class provides an interface for WAF ListWebACLs requests.
 *
 * \inmodule QtAwsWAF
 *
 *  This is the <i>AWS WAF API Reference</i> for using AWS WAF with Amazon CloudFront. The AWS WAF actions and data types
 *  listed in the reference are available for protecting Amazon CloudFront distributions. You can use these actions and data
 *  types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed information about the
 *  AWS WAF API actions, data types, and errors. For detailed information about AWS WAF features and an overview of how to
 *  use the AWS WAF API, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WafClient::listWebACLs
 */

/*!
 * Constructs a copy of \a other.
 */
ListWebACLsRequest::ListWebACLsRequest(const ListWebACLsRequest &other)
    : WAFRequest(new ListWebACLsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWebACLsRequest object.
 */
ListWebACLsRequest::ListWebACLsRequest()
    : WAFRequest(new ListWebACLsRequestPrivate(WAFRequest::ListWebACLsAction, this))
{

}

/*!
 * \reimp
 */
bool ListWebACLsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWebACLsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWebACLsRequest::response(QNetworkReply * const reply) const
{
    return new ListWebACLsResponse(*this, reply);
}

/*!
 * \class QtAws::WAF::ListWebACLsRequestPrivate
 * \brief The ListWebACLsRequestPrivate class provides private implementation for ListWebACLsRequest.
 * \internal
 *
 * \inmodule QtAwsWAF
 */

/*!
 * Constructs a ListWebACLsRequestPrivate object for WAF \a action,
 * with public implementation \a q.
 */
ListWebACLsRequestPrivate::ListWebACLsRequestPrivate(
    const WAFRequest::Action action, ListWebACLsRequest * const q)
    : WAFRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWebACLsRequest
 * class' copy constructor.
 */
ListWebACLsRequestPrivate::ListWebACLsRequestPrivate(
    const ListWebACLsRequestPrivate &other, ListWebACLsRequest * const q)
    : WAFRequestPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws
