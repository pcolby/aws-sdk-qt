// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedefaultparametersrequest.h"
#include "describedefaultparametersrequest_p.h"
#include "describedefaultparametersresponse.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace Dax {

/*!
 * \class QtAws::Dax::DescribeDefaultParametersRequest
 * \brief The DescribeDefaultParametersRequest class provides an interface for Dax DescribeDefaultParameters requests.
 *
 * \inmodule QtAwsDax
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::describeDefaultParameters
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDefaultParametersRequest::DescribeDefaultParametersRequest(const DescribeDefaultParametersRequest &other)
    : DaxRequest(new DescribeDefaultParametersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDefaultParametersRequest object.
 */
DescribeDefaultParametersRequest::DescribeDefaultParametersRequest()
    : DaxRequest(new DescribeDefaultParametersRequestPrivate(DaxRequest::DescribeDefaultParametersAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDefaultParametersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDefaultParametersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDefaultParametersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDefaultParametersResponse(*this, reply);
}

/*!
 * \class QtAws::Dax::DescribeDefaultParametersRequestPrivate
 * \brief The DescribeDefaultParametersRequestPrivate class provides private implementation for DescribeDefaultParametersRequest.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a DescribeDefaultParametersRequestPrivate object for Dax \a action,
 * with public implementation \a q.
 */
DescribeDefaultParametersRequestPrivate::DescribeDefaultParametersRequestPrivate(
    const DaxRequest::Action action, DescribeDefaultParametersRequest * const q)
    : DaxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDefaultParametersRequest
 * class' copy constructor.
 */
DescribeDefaultParametersRequestPrivate::DescribeDefaultParametersRequestPrivate(
    const DescribeDefaultParametersRequestPrivate &other, DescribeDefaultParametersRequest * const q)
    : DaxRequestPrivate(other, q)
{

}

} // namespace Dax
} // namespace QtAws
