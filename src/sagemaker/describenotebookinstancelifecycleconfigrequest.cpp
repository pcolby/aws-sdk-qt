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

#include "describenotebookinstancelifecycleconfigrequest.h"
#include "describenotebookinstancelifecycleconfigrequest_p.h"
#include "describenotebookinstancelifecycleconfigresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/**
 * @class  DescribeNotebookInstanceLifecycleConfigRequest
 *
 * @brief  Implements SageMaker DescribeNotebookInstanceLifecycleConfig requests.
 *
 * @see    SageMakerClient::describeNotebookInstanceLifecycleConfig
 */

/**
 * @brief  Constructs a new DescribeNotebookInstanceLifecycleConfigRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeNotebookInstanceLifecycleConfigRequest::DescribeNotebookInstanceLifecycleConfigRequest(const DescribeNotebookInstanceLifecycleConfigRequest &other)
    : SageMakerRequest(new DescribeNotebookInstanceLifecycleConfigRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeNotebookInstanceLifecycleConfigRequest object.
 */
DescribeNotebookInstanceLifecycleConfigRequest::DescribeNotebookInstanceLifecycleConfigRequest()
    : SageMakerRequest(new DescribeNotebookInstanceLifecycleConfigRequestPrivate(SageMakerRequest::DescribeNotebookInstanceLifecycleConfigAction, this))
{

}

bool DescribeNotebookInstanceLifecycleConfigRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeNotebookInstanceLifecycleConfigResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeNotebookInstanceLifecycleConfigResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeNotebookInstanceLifecycleConfigRequest::response(QNetworkReply * const reply) const
{
    return new DescribeNotebookInstanceLifecycleConfigResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeNotebookInstanceLifecycleConfigRequestPrivate
 *
 * @brief  Private implementation for DescribeNotebookInstanceLifecycleConfigRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeNotebookInstanceLifecycleConfigRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public DescribeNotebookInstanceLifecycleConfigRequest instance.
 */
DescribeNotebookInstanceLifecycleConfigRequestPrivate::DescribeNotebookInstanceLifecycleConfigRequestPrivate(
    const SageMakerRequest::Action action, DescribeNotebookInstanceLifecycleConfigRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeNotebookInstanceLifecycleConfigRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeNotebookInstanceLifecycleConfigRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeNotebookInstanceLifecycleConfigRequest instance.
 */
DescribeNotebookInstanceLifecycleConfigRequestPrivate::DescribeNotebookInstanceLifecycleConfigRequestPrivate(
    const DescribeNotebookInstanceLifecycleConfigRequestPrivate &other, DescribeNotebookInstanceLifecycleConfigRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
