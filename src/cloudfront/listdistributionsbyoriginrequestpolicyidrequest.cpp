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

#include "listdistributionsbyoriginrequestpolicyidrequest.h"
#include "listdistributionsbyoriginrequestpolicyidrequest_p.h"
#include "listdistributionsbyoriginrequestpolicyidresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListDistributionsByOriginRequestPolicyIdRequest
 * \brief The ListDistributionsByOriginRequestPolicyIdRequest class provides an interface for CloudFront ListDistributionsByOriginRequestPolicyId requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listDistributionsByOriginRequestPolicyId
 */

/*!
 * Constructs a copy of \a other.
 */
ListDistributionsByOriginRequestPolicyIdRequest::ListDistributionsByOriginRequestPolicyIdRequest(const ListDistributionsByOriginRequestPolicyIdRequest &other)
    : CloudFrontRequest(new ListDistributionsByOriginRequestPolicyIdRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDistributionsByOriginRequestPolicyIdRequest object.
 */
ListDistributionsByOriginRequestPolicyIdRequest::ListDistributionsByOriginRequestPolicyIdRequest()
    : CloudFrontRequest(new ListDistributionsByOriginRequestPolicyIdRequestPrivate(CloudFrontRequest::ListDistributionsByOriginRequestPolicyIdAction, this))
{

}

/*!
 * \reimp
 */
bool ListDistributionsByOriginRequestPolicyIdRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDistributionsByOriginRequestPolicyIdResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDistributionsByOriginRequestPolicyIdRequest::response(QNetworkReply * const reply) const
{
    return new ListDistributionsByOriginRequestPolicyIdResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::ListDistributionsByOriginRequestPolicyIdRequestPrivate
 * \brief The ListDistributionsByOriginRequestPolicyIdRequestPrivate class provides private implementation for ListDistributionsByOriginRequestPolicyIdRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListDistributionsByOriginRequestPolicyIdRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
ListDistributionsByOriginRequestPolicyIdRequestPrivate::ListDistributionsByOriginRequestPolicyIdRequestPrivate(
    const CloudFrontRequest::Action action, ListDistributionsByOriginRequestPolicyIdRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDistributionsByOriginRequestPolicyIdRequest
 * class' copy constructor.
 */
ListDistributionsByOriginRequestPolicyIdRequestPrivate::ListDistributionsByOriginRequestPolicyIdRequestPrivate(
    const ListDistributionsByOriginRequestPolicyIdRequestPrivate &other, ListDistributionsByOriginRequestPolicyIdRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
