/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeexecutionrequest.h"
#include "describeexecutionrequest_p.h"
#include "describeexecutionresponse.h"
#include "sfnrequest_p.h"

namespace QtAws {
namespace SFN {

/*!
 * \class QtAws::SFN::DescribeExecutionRequest
 *
 * \brief The DescribeExecutionRequest class provides an interface for SFN DescribeExecution requests.
 *
 * \ingroup SFN
 *
 *  <fullname>AWS Step Functions</fullname>
 * 
 *  AWS Step Functions is a service that lets you coordinate the components of distributed applications and microservices
 *  using visual
 * 
 *  workflows>
 * 
 *  You can use Step Functions to build applications from individual components, each of which performs a discrete function,
 *  or <i>task</i>, allowing you to scale and change applications quickly. Step Functions provides a console that helps
 *  visualize the components of your application as a series of steps. Step Functions automatically triggers and tracks each
 *  step, and retries steps when there are errors, so your application executes predictably and in the right order every
 *  time. Step Functions logs the state of each step, so you can quickly diagnose and debug any
 * 
 *  issues>
 * 
 *  Step Functions manages operations and underlying infrastructure to ensure your application is available at any scale.
 *  You can run tasks on AWS, your own servers, or any system that has access to AWS. You can access and use Step Functions
 *  using the console, the AWS SDKs, or an HTTP API. For more information about Step Functions, see the <i> <a
 *  href="http://docs.aws.amazon.com/step-functions/latest/dg/welcome.html">AWS Step Functions Developer Guide</a>
 *
 * \sa SFNClient::describeExecution
 */

/*!
 * @brief  Constructs a new DescribeExecutionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeExecutionRequest::DescribeExecutionRequest(const DescribeExecutionRequest &other)
    : SFNRequest(new DescribeExecutionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeExecutionRequest object.
 */
DescribeExecutionRequest::DescribeExecutionRequest()
    : SFNRequest(new DescribeExecutionRequestPrivate(SFNRequest::DescribeExecutionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeExecutionRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeExecutionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeExecutionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SFNClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeExecutionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeExecutionResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeExecutionRequestPrivate
 *
 * @brief  Private implementation for DescribeExecutionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeExecutionRequestPrivate object.
 *
 * @param  action  SFN action being performed.
 * @param  q       Pointer to this object's public DescribeExecutionRequest instance.
 */
DescribeExecutionRequestPrivate::DescribeExecutionRequestPrivate(
    const SFNRequest::Action action, DescribeExecutionRequest * const q)
    : SFNRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeExecutionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeExecutionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeExecutionRequest instance.
 */
DescribeExecutionRequestPrivate::DescribeExecutionRequestPrivate(
    const DescribeExecutionRequestPrivate &other, DescribeExecutionRequest * const q)
    : SFNRequestPrivate(other, q)
{

}

} // namespace SFN
} // namespace QtAws
