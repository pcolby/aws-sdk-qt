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

#include "listoriginrequestpoliciesrequest.h"
#include "listoriginrequestpoliciesrequest_p.h"
#include "listoriginrequestpoliciesresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListOriginRequestPoliciesRequest
 * \brief The ListOriginRequestPoliciesRequest class provides an interface for CloudFront ListOriginRequestPolicies requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listOriginRequestPolicies
 */

/*!
 * Constructs a copy of \a other.
 */
ListOriginRequestPoliciesRequest::ListOriginRequestPoliciesRequest(const ListOriginRequestPoliciesRequest &other)
    : CloudFrontRequest(new ListOriginRequestPoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListOriginRequestPoliciesRequest object.
 */
ListOriginRequestPoliciesRequest::ListOriginRequestPoliciesRequest()
    : CloudFrontRequest(new ListOriginRequestPoliciesRequestPrivate(CloudFrontRequest::ListOriginRequestPoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool ListOriginRequestPoliciesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListOriginRequestPoliciesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListOriginRequestPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListOriginRequestPoliciesResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::ListOriginRequestPoliciesRequestPrivate
 * \brief The ListOriginRequestPoliciesRequestPrivate class provides private implementation for ListOriginRequestPoliciesRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListOriginRequestPoliciesRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
ListOriginRequestPoliciesRequestPrivate::ListOriginRequestPoliciesRequestPrivate(
    const CloudFrontRequest::Action action, ListOriginRequestPoliciesRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListOriginRequestPoliciesRequest
 * class' copy constructor.
 */
ListOriginRequestPoliciesRequestPrivate::ListOriginRequestPoliciesRequestPrivate(
    const ListOriginRequestPoliciesRequestPrivate &other, ListOriginRequestPoliciesRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
