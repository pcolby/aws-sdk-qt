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

#include "describenotebookinstancerequest.h"
#include "describenotebookinstancerequest_p.h"
#include "describenotebookinstanceresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeNotebookInstanceRequest
 *
 * \brief The DescribeNotebookInstanceRequest class provides an interface for SageMaker DescribeNotebookInstance requests.
 *
 * \ingroup SageMaker
 *
 *
 * \sa SageMakerClient::describeNotebookInstance
 */

/*!
 * @brief  Constructs a new DescribeNotebookInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeNotebookInstanceRequest::DescribeNotebookInstanceRequest(const DescribeNotebookInstanceRequest &other)
    : SageMakerRequest(new DescribeNotebookInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeNotebookInstanceRequest object.
 */
DescribeNotebookInstanceRequest::DescribeNotebookInstanceRequest()
    : SageMakerRequest(new DescribeNotebookInstanceRequestPrivate(SageMakerRequest::DescribeNotebookInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeNotebookInstanceRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeNotebookInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeNotebookInstanceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeNotebookInstanceRequest::response(QNetworkReply * const reply) const
{
    return new DescribeNotebookInstanceResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeNotebookInstanceRequestPrivate
 *
 * @brief  Private implementation for DescribeNotebookInstanceRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeNotebookInstanceRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public DescribeNotebookInstanceRequest instance.
 */
DescribeNotebookInstanceRequestPrivate::DescribeNotebookInstanceRequestPrivate(
    const SageMakerRequest::Action action, DescribeNotebookInstanceRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeNotebookInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeNotebookInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeNotebookInstanceRequest instance.
 */
DescribeNotebookInstanceRequestPrivate::DescribeNotebookInstanceRequestPrivate(
    const DescribeNotebookInstanceRequestPrivate &other, DescribeNotebookInstanceRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
