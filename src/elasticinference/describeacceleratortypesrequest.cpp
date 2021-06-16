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
