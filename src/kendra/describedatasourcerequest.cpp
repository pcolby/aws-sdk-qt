// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
