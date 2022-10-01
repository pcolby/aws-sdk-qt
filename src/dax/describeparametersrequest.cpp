// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeparametersrequest.h"
#include "describeparametersrequest_p.h"
#include "describeparametersresponse.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace Dax {

/*!
 * \class QtAws::Dax::DescribeParametersRequest
 * \brief The DescribeParametersRequest class provides an interface for Dax DescribeParameters requests.
 *
 * \inmodule QtAwsDax
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::describeParameters
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeParametersRequest::DescribeParametersRequest(const DescribeParametersRequest &other)
    : DaxRequest(new DescribeParametersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeParametersRequest object.
 */
DescribeParametersRequest::DescribeParametersRequest()
    : DaxRequest(new DescribeParametersRequestPrivate(DaxRequest::DescribeParametersAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeParametersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeParametersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeParametersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeParametersResponse(*this, reply);
}

/*!
 * \class QtAws::Dax::DescribeParametersRequestPrivate
 * \brief The DescribeParametersRequestPrivate class provides private implementation for DescribeParametersRequest.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a DescribeParametersRequestPrivate object for Dax \a action,
 * with public implementation \a q.
 */
DescribeParametersRequestPrivate::DescribeParametersRequestPrivate(
    const DaxRequest::Action action, DescribeParametersRequest * const q)
    : DaxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeParametersRequest
 * class' copy constructor.
 */
DescribeParametersRequestPrivate::DescribeParametersRequestPrivate(
    const DescribeParametersRequestPrivate &other, DescribeParametersRequest * const q)
    : DaxRequestPrivate(other, q)
{

}

} // namespace Dax
} // namespace QtAws
