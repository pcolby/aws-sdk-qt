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

#include "describedatasourcerequest.h"
#include "describedatasourcerequest_p.h"
#include "describedatasourceresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DescribeDataSourceRequest
 * \brief The DescribeDataSourceRequest class provides an interface for Kendra DescribeDataSource requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::describeDataSource
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDataSourceRequest::DescribeDataSourceRequest(const DescribeDataSourceRequest &other)
    : KendraRequest(new DescribeDataSourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDataSourceRequest object.
 */
DescribeDataSourceRequest::DescribeDataSourceRequest()
    : KendraRequest(new DescribeDataSourceRequestPrivate(KendraRequest::DescribeDataSourceAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDataSourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDataSourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDataSourceRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDataSourceResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::DescribeDataSourceRequestPrivate
 * \brief The DescribeDataSourceRequestPrivate class provides private implementation for DescribeDataSourceRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DescribeDataSourceRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
DescribeDataSourceRequestPrivate::DescribeDataSourceRequestPrivate(
    const KendraRequest::Action action, DescribeDataSourceRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDataSourceRequest
 * class' copy constructor.
 */
DescribeDataSourceRequestPrivate::DescribeDataSourceRequestPrivate(
    const DescribeDataSourceRequestPrivate &other, DescribeDataSourceRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
