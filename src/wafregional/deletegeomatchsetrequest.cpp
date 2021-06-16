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

#include "deletegeomatchsetrequest.h"
#include "deletegeomatchsetrequest_p.h"
#include "deletegeomatchsetresponse.h"
#include "wafregionalrequest_p.h"

namespace QtAws {
namespace WAFRegional {

/*!
 * \class QtAws::WAFRegional::DeleteGeoMatchSetRequest
 * \brief The DeleteGeoMatchSetRequest class provides an interface for WAFRegional DeleteGeoMatchSet requests.
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
 * \sa WAFRegionalClient::deleteGeoMatchSet
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteGeoMatchSetRequest::DeleteGeoMatchSetRequest(const DeleteGeoMatchSetRequest &other)
    : WAFRegionalRequest(new DeleteGeoMatchSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteGeoMatchSetRequest object.
 */
DeleteGeoMatchSetRequest::DeleteGeoMatchSetRequest()
    : WAFRegionalRequest(new DeleteGeoMatchSetRequestPrivate(WAFRegionalRequest::DeleteGeoMatchSetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteGeoMatchSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteGeoMatchSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteGeoMatchSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGeoMatchSetResponse(*this, reply);
}

/*!
 * \class QtAws::WAFRegional::DeleteGeoMatchSetRequestPrivate
 * \brief The DeleteGeoMatchSetRequestPrivate class provides private implementation for DeleteGeoMatchSetRequest.
 * \internal
 *
 * \inmodule QtAwsWAFRegional
 */

/*!
 * Constructs a DeleteGeoMatchSetRequestPrivate object for WAFRegional \a action,
 * with public implementation \a q.
 */
DeleteGeoMatchSetRequestPrivate::DeleteGeoMatchSetRequestPrivate(
    const WAFRegionalRequest::Action action, DeleteGeoMatchSetRequest * const q)
    : WAFRegionalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteGeoMatchSetRequest
 * class' copy constructor.
 */
DeleteGeoMatchSetRequestPrivate::DeleteGeoMatchSetRequestPrivate(
    const DeleteGeoMatchSetRequestPrivate &other, DeleteGeoMatchSetRequest * const q)
    : WAFRegionalRequestPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace QtAws
