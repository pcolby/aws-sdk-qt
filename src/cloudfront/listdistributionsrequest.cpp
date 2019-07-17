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

#include "listdistributionsrequest.h"
#include "listdistributionsrequest_p.h"
#include "listdistributionsresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListDistributionsRequest
 * \brief The ListDistributionsRequest class provides an interface for CloudFront ListDistributions requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listDistributions
 */

/*!
 * Constructs a copy of \a other.
 */
ListDistributionsRequest::ListDistributionsRequest(const ListDistributionsRequest &other)
    : CloudFrontRequest(new ListDistributionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDistributionsRequest object.
 */
ListDistributionsRequest::ListDistributionsRequest()
    : CloudFrontRequest(new ListDistributionsRequestPrivate(CloudFrontRequest::ListDistributionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDistributionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDistributionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDistributionsRequest::response(QNetworkReply * const reply) const
{
    return new ListDistributionsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::ListDistributionsRequestPrivate
 * \brief The ListDistributionsRequestPrivate class provides private implementation for ListDistributionsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListDistributionsRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
ListDistributionsRequestPrivate::ListDistributionsRequestPrivate(
    const CloudFrontRequest::Action action, ListDistributionsRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDistributionsRequest
 * class' copy constructor.
 */
ListDistributionsRequestPrivate::ListDistributionsRequestPrivate(
    const ListDistributionsRequestPrivate &other, ListDistributionsRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
