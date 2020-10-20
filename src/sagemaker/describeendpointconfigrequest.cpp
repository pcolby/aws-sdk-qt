/*
    Copyright 2013-2020 Paul Colby

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

#include "describeendpointconfigrequest.h"
#include "describeendpointconfigrequest_p.h"
#include "describeendpointconfigresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeEndpointConfigRequest
 * \brief The DescribeEndpointConfigRequest class provides an interface for SageMaker DescribeEndpointConfig requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::describeEndpointConfig
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeEndpointConfigRequest::DescribeEndpointConfigRequest(const DescribeEndpointConfigRequest &other)
    : SageMakerRequest(new DescribeEndpointConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeEndpointConfigRequest object.
 */
DescribeEndpointConfigRequest::DescribeEndpointConfigRequest()
    : SageMakerRequest(new DescribeEndpointConfigRequestPrivate(SageMakerRequest::DescribeEndpointConfigAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEndpointConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeEndpointConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEndpointConfigRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEndpointConfigResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeEndpointConfigRequestPrivate
 * \brief The DescribeEndpointConfigRequestPrivate class provides private implementation for DescribeEndpointConfigRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeEndpointConfigRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeEndpointConfigRequestPrivate::DescribeEndpointConfigRequestPrivate(
    const SageMakerRequest::Action action, DescribeEndpointConfigRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeEndpointConfigRequest
 * class' copy constructor.
 */
DescribeEndpointConfigRequestPrivate::DescribeEndpointConfigRequestPrivate(
    const DescribeEndpointConfigRequestPrivate &other, DescribeEndpointConfigRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
