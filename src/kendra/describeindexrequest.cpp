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

#include "describeindexrequest.h"
#include "describeindexrequest_p.h"
#include "describeindexresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DescribeIndexRequest
 * \brief The DescribeIndexRequest class provides an interface for Kendra DescribeIndex requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::describeIndex
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeIndexRequest::DescribeIndexRequest(const DescribeIndexRequest &other)
    : KendraRequest(new DescribeIndexRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeIndexRequest object.
 */
DescribeIndexRequest::DescribeIndexRequest()
    : KendraRequest(new DescribeIndexRequestPrivate(KendraRequest::DescribeIndexAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeIndexRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeIndexResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeIndexRequest::response(QNetworkReply * const reply) const
{
    return new DescribeIndexResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::DescribeIndexRequestPrivate
 * \brief The DescribeIndexRequestPrivate class provides private implementation for DescribeIndexRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DescribeIndexRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
DescribeIndexRequestPrivate::DescribeIndexRequestPrivate(
    const KendraRequest::Action action, DescribeIndexRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeIndexRequest
 * class' copy constructor.
 */
DescribeIndexRequestPrivate::DescribeIndexRequestPrivate(
    const DescribeIndexRequestPrivate &other, DescribeIndexRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
