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

#include "listdistributionsbywebaclidrequest.h"
#include "listdistributionsbywebaclidrequest_p.h"
#include "listdistributionsbywebaclidresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListDistributionsByWebACLIdRequest
 * \brief The ListDistributionsByWebACLIdRequest class provides an interface for CloudFront ListDistributionsByWebACLId requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listDistributionsByWebACLId
 */

/*!
 * Constructs a copy of \a other.
 */
ListDistributionsByWebACLIdRequest::ListDistributionsByWebACLIdRequest(const ListDistributionsByWebACLIdRequest &other)
    : CloudFrontRequest(new ListDistributionsByWebACLIdRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDistributionsByWebACLIdRequest object.
 */
ListDistributionsByWebACLIdRequest::ListDistributionsByWebACLIdRequest()
    : CloudFrontRequest(new ListDistributionsByWebACLIdRequestPrivate(CloudFrontRequest::ListDistributionsByWebACLIdAction, this))
{

}

/*!
 * \reimp
 */
bool ListDistributionsByWebACLIdRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDistributionsByWebACLIdResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDistributionsByWebACLIdRequest::response(QNetworkReply * const reply) const
{
    return new ListDistributionsByWebACLIdResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::ListDistributionsByWebACLIdRequestPrivate
 * \brief The ListDistributionsByWebACLIdRequestPrivate class provides private implementation for ListDistributionsByWebACLIdRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 *
 * Constructs a ListDistributionsByWebACLIdRequestPrivate object for CloudFront \a action with,
 * public implementation \a q.
 */
ListDistributionsByWebACLIdRequestPrivate::ListDistributionsByWebACLIdRequestPrivate(
    const CloudFrontRequest::Action action, ListDistributionsByWebACLIdRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDistributionsByWebACLIdRequest
 * class' copy constructor.
 */
ListDistributionsByWebACLIdRequestPrivate::ListDistributionsByWebACLIdRequestPrivate(
    const ListDistributionsByWebACLIdRequestPrivate &other, ListDistributionsByWebACLIdRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
