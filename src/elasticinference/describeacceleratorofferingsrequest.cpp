// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeacceleratorofferingsrequest.h"
#include "describeacceleratorofferingsrequest_p.h"
#include "describeacceleratorofferingsresponse.h"
#include "elasticinferencerequest_p.h"

namespace QtAws {
namespace ElasticInference {

/*!
 * \class QtAws::ElasticInference::DescribeAcceleratorOfferingsRequest
 * \brief The DescribeAcceleratorOfferingsRequest class provides an interface for ElasticInference DescribeAcceleratorOfferings requests.
 *
 * \inmodule QtAwsElasticInference
 *
 *  Elastic Inference public APIs.
 *
 * \sa ElasticInferenceClient::describeAcceleratorOfferings
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAcceleratorOfferingsRequest::DescribeAcceleratorOfferingsRequest(const DescribeAcceleratorOfferingsRequest &other)
    : ElasticInferenceRequest(new DescribeAcceleratorOfferingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAcceleratorOfferingsRequest object.
 */
DescribeAcceleratorOfferingsRequest::DescribeAcceleratorOfferingsRequest()
    : ElasticInferenceRequest(new DescribeAcceleratorOfferingsRequestPrivate(ElasticInferenceRequest::DescribeAcceleratorOfferingsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAcceleratorOfferingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAcceleratorOfferingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAcceleratorOfferingsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAcceleratorOfferingsResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticInference::DescribeAcceleratorOfferingsRequestPrivate
 * \brief The DescribeAcceleratorOfferingsRequestPrivate class provides private implementation for DescribeAcceleratorOfferingsRequest.
 * \internal
 *
 * \inmodule QtAwsElasticInference
 */

/*!
 * Constructs a DescribeAcceleratorOfferingsRequestPrivate object for ElasticInference \a action,
 * with public implementation \a q.
 */
DescribeAcceleratorOfferingsRequestPrivate::DescribeAcceleratorOfferingsRequestPrivate(
    const ElasticInferenceRequest::Action action, DescribeAcceleratorOfferingsRequest * const q)
    : ElasticInferenceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAcceleratorOfferingsRequest
 * class' copy constructor.
 */
DescribeAcceleratorOfferingsRequestPrivate::DescribeAcceleratorOfferingsRequestPrivate(
    const DescribeAcceleratorOfferingsRequestPrivate &other, DescribeAcceleratorOfferingsRequest * const q)
    : ElasticInferenceRequestPrivate(other, q)
{

}

} // namespace ElasticInference
} // namespace QtAws
