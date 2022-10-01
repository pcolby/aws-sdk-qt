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

#include "listdistributionsbyresponseheaderspolicyidrequest.h"
#include "listdistributionsbyresponseheaderspolicyidrequest_p.h"
#include "listdistributionsbyresponseheaderspolicyidresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListDistributionsByResponseHeadersPolicyIdRequest
 * \brief The ListDistributionsByResponseHeadersPolicyIdRequest class provides an interface for CloudFront ListDistributionsByResponseHeadersPolicyId requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listDistributionsByResponseHeadersPolicyId
 */

/*!
 * Constructs a copy of \a other.
 */
ListDistributionsByResponseHeadersPolicyIdRequest::ListDistributionsByResponseHeadersPolicyIdRequest(const ListDistributionsByResponseHeadersPolicyIdRequest &other)
    : CloudFrontRequest(new ListDistributionsByResponseHeadersPolicyIdRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDistributionsByResponseHeadersPolicyIdRequest object.
 */
ListDistributionsByResponseHeadersPolicyIdRequest::ListDistributionsByResponseHeadersPolicyIdRequest()
    : CloudFrontRequest(new ListDistributionsByResponseHeadersPolicyIdRequestPrivate(CloudFrontRequest::ListDistributionsByResponseHeadersPolicyIdAction, this))
{

}

/*!
 * \reimp
 */
bool ListDistributionsByResponseHeadersPolicyIdRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDistributionsByResponseHeadersPolicyIdResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDistributionsByResponseHeadersPolicyIdRequest::response(QNetworkReply * const reply) const
{
    return new ListDistributionsByResponseHeadersPolicyIdResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::ListDistributionsByResponseHeadersPolicyIdRequestPrivate
 * \brief The ListDistributionsByResponseHeadersPolicyIdRequestPrivate class provides private implementation for ListDistributionsByResponseHeadersPolicyIdRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListDistributionsByResponseHeadersPolicyIdRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
ListDistributionsByResponseHeadersPolicyIdRequestPrivate::ListDistributionsByResponseHeadersPolicyIdRequestPrivate(
    const CloudFrontRequest::Action action, ListDistributionsByResponseHeadersPolicyIdRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDistributionsByResponseHeadersPolicyIdRequest
 * class' copy constructor.
 */
ListDistributionsByResponseHeadersPolicyIdRequestPrivate::ListDistributionsByResponseHeadersPolicyIdRequestPrivate(
    const ListDistributionsByResponseHeadersPolicyIdRequestPrivate &other, ListDistributionsByResponseHeadersPolicyIdRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
