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
