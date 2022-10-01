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

#include "describeclustersrequest.h"
#include "describeclustersrequest_p.h"
#include "describeclustersresponse.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace Dax {

/*!
 * \class QtAws::Dax::DescribeClustersRequest
 * \brief The DescribeClustersRequest class provides an interface for Dax DescribeClusters requests.
 *
 * \inmodule QtAwsDax
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::describeClusters
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeClustersRequest::DescribeClustersRequest(const DescribeClustersRequest &other)
    : DaxRequest(new DescribeClustersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeClustersRequest object.
 */
DescribeClustersRequest::DescribeClustersRequest()
    : DaxRequest(new DescribeClustersRequestPrivate(DaxRequest::DescribeClustersAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeClustersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeClustersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeClustersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeClustersResponse(*this, reply);
}

/*!
 * \class QtAws::Dax::DescribeClustersRequestPrivate
 * \brief The DescribeClustersRequestPrivate class provides private implementation for DescribeClustersRequest.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a DescribeClustersRequestPrivate object for Dax \a action,
 * with public implementation \a q.
 */
DescribeClustersRequestPrivate::DescribeClustersRequestPrivate(
    const DaxRequest::Action action, DescribeClustersRequest * const q)
    : DaxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeClustersRequest
 * class' copy constructor.
 */
DescribeClustersRequestPrivate::DescribeClustersRequestPrivate(
    const DescribeClustersRequestPrivate &other, DescribeClustersRequest * const q)
    : DaxRequestPrivate(other, q)
{

}

} // namespace Dax
} // namespace QtAws
