// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeacceleratortypesrequest.h"
#include "describeacceleratortypesrequest_p.h"
#include "describeacceleratortypesresponse.h"
#include "elasticinferencerequest_p.h"

namespace QtAws {
namespace ElasticInference {

/*!
 * \class QtAws::ElasticInference::DescribeAcceleratorTypesRequest
 * \brief The DescribeAcceleratorTypesRequest class provides an interface for ElasticInference DescribeAcceleratorTypes requests.
 *
 * \inmodule QtAwsElasticInference
 *
 *  Elastic Inference public APIs.
 *
 * \sa ElasticInferenceClient::describeAcceleratorTypes
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAcceleratorTypesRequest::DescribeAcceleratorTypesRequest(const DescribeAcceleratorTypesRequest &other)
    : ElasticInferenceRequest(new DescribeAcceleratorTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAcceleratorTypesRequest object.
 */
DescribeAcceleratorTypesRequest::DescribeAcceleratorTypesRequest()
    : ElasticInferenceRequest(new DescribeAcceleratorTypesRequestPrivate(ElasticInferenceRequest::DescribeAcceleratorTypesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAcceleratorTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAcceleratorTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAcceleratorTypesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAcceleratorTypesResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticInference::DescribeAcceleratorTypesRequestPrivate
 * \brief The DescribeAcceleratorTypesRequestPrivate class provides private implementation for DescribeAcceleratorTypesRequest.
 * \internal
 *
 * \inmodule QtAwsElasticInference
 */

/*!
 * Constructs a DescribeAcceleratorTypesRequestPrivate object for ElasticInference \a action,
 * with public implementation \a q.
 */
DescribeAcceleratorTypesRequestPrivate::DescribeAcceleratorTypesRequestPrivate(
    const ElasticInferenceRequest::Action action, DescribeAcceleratorTypesRequest * const q)
    : ElasticInferenceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAcceleratorTypesRequest
 * class' copy constructor.
 */
DescribeAcceleratorTypesRequestPrivate::DescribeAcceleratorTypesRequestPrivate(
    const DescribeAcceleratorTypesRequestPrivate &other, DescribeAcceleratorTypesRequest * const q)
    : ElasticInferenceRequestPrivate(other, q)
{

}

} // namespace ElasticInference
} // namespace QtAws
