// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeacceleratorsrequest.h"
#include "describeacceleratorsrequest_p.h"
#include "describeacceleratorsresponse.h"
#include "elasticinferencerequest_p.h"

namespace QtAws {
namespace ElasticInference {

/*!
 * \class QtAws::ElasticInference::DescribeAcceleratorsRequest
 * \brief The DescribeAcceleratorsRequest class provides an interface for ElasticInference DescribeAccelerators requests.
 *
 * \inmodule QtAwsElasticInference
 *
 *  Elastic Inference public APIs.
 *
 * \sa ElasticInferenceClient::describeAccelerators
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAcceleratorsRequest::DescribeAcceleratorsRequest(const DescribeAcceleratorsRequest &other)
    : ElasticInferenceRequest(new DescribeAcceleratorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAcceleratorsRequest object.
 */
DescribeAcceleratorsRequest::DescribeAcceleratorsRequest()
    : ElasticInferenceRequest(new DescribeAcceleratorsRequestPrivate(ElasticInferenceRequest::DescribeAcceleratorsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAcceleratorsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAcceleratorsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAcceleratorsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAcceleratorsResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticInference::DescribeAcceleratorsRequestPrivate
 * \brief The DescribeAcceleratorsRequestPrivate class provides private implementation for DescribeAcceleratorsRequest.
 * \internal
 *
 * \inmodule QtAwsElasticInference
 */

/*!
 * Constructs a DescribeAcceleratorsRequestPrivate object for ElasticInference \a action,
 * with public implementation \a q.
 */
DescribeAcceleratorsRequestPrivate::DescribeAcceleratorsRequestPrivate(
    const ElasticInferenceRequest::Action action, DescribeAcceleratorsRequest * const q)
    : ElasticInferenceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAcceleratorsRequest
 * class' copy constructor.
 */
DescribeAcceleratorsRequestPrivate::DescribeAcceleratorsRequestPrivate(
    const DescribeAcceleratorsRequestPrivate &other, DescribeAcceleratorsRequest * const q)
    : ElasticInferenceRequestPrivate(other, q)
{

}

} // namespace ElasticInference
} // namespace QtAws
