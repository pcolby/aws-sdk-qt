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

#include "listcachepoliciesrequest.h"
#include "listcachepoliciesrequest_p.h"
#include "listcachepoliciesresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListCachePoliciesRequest
 * \brief The ListCachePoliciesRequest class provides an interface for CloudFront ListCachePolicies requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listCachePolicies
 */

/*!
 * Constructs a copy of \a other.
 */
ListCachePoliciesRequest::ListCachePoliciesRequest(const ListCachePoliciesRequest &other)
    : CloudFrontRequest(new ListCachePoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCachePoliciesRequest object.
 */
ListCachePoliciesRequest::ListCachePoliciesRequest()
    : CloudFrontRequest(new ListCachePoliciesRequestPrivate(CloudFrontRequest::ListCachePoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool ListCachePoliciesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCachePoliciesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCachePoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListCachePoliciesResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::ListCachePoliciesRequestPrivate
 * \brief The ListCachePoliciesRequestPrivate class provides private implementation for ListCachePoliciesRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListCachePoliciesRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
ListCachePoliciesRequestPrivate::ListCachePoliciesRequestPrivate(
    const CloudFrontRequest::Action action, ListCachePoliciesRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCachePoliciesRequest
 * class' copy constructor.
 */
ListCachePoliciesRequestPrivate::ListCachePoliciesRequestPrivate(
    const ListCachePoliciesRequestPrivate &other, ListCachePoliciesRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
