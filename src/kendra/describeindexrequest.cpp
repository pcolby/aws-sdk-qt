// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
