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

#include "liststacksetoperationsrequest.h"
#include "liststacksetoperationsrequest_p.h"
#include "liststacksetoperationsresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::ListStackSetOperationsRequest
 *
 * \brief The ListStackSetOperationsRequest class encapsulates CloudFormation ListStackSetOperations requests.
 *
 * \ingroup CloudFormation
 *
 *  <fullname>AWS CloudFormation</fullname>
 * 
 *  AWS CloudFormation allows you to create and manage AWS infrastructure deployments predictably and repeatedly. You can
 *  use AWS CloudFormation to leverage AWS products, such as Amazon Elastic Compute Cloud, Amazon Elastic Block Store,
 *  Amazon Simple Notification Service, Elastic Load Balancing, and Auto Scaling to build highly-reliable, highly scalable,
 *  cost-effective applications without creating or configuring the underlying AWS
 * 
 *  infrastructure>
 * 
 *  With AWS CloudFormation, you declare all of your resources and dependencies in a template file. The template defines a
 *  collection of resources as a single unit called a stack. AWS CloudFormation creates and deletes all member resources of
 *  the stack together and manages all dependencies between the resources for
 * 
 *  you>
 * 
 *  For more information about AWS CloudFormation, see the <a href="http://aws.amazon.com/cloudformation/">AWS
 *  CloudFormation Product
 * 
 *  Page</a>>
 * 
 *  Amazon CloudFormation makes use of other AWS products. If you need additional technical information about a specific AWS
 *  product, you can find the product's technical documentation at <a
 *
 * \sa CloudFormationClient::listStackSetOperations
 */

/*!
 * @brief  Constructs a new ListStackSetOperationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListStackSetOperationsRequest::ListStackSetOperationsRequest(const ListStackSetOperationsRequest &other)
    : CloudFormationRequest(new ListStackSetOperationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListStackSetOperationsRequest object.
 */
ListStackSetOperationsRequest::ListStackSetOperationsRequest()
    : CloudFormationRequest(new ListStackSetOperationsRequestPrivate(CloudFormationRequest::ListStackSetOperationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListStackSetOperationsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListStackSetOperationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListStackSetOperationsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStackSetOperationsRequest::response(QNetworkReply * const reply) const
{
    return new ListStackSetOperationsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListStackSetOperationsRequestPrivate
 *
 * @brief  Private implementation for ListStackSetOperationsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListStackSetOperationsRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public ListStackSetOperationsRequest instance.
 */
ListStackSetOperationsRequestPrivate::ListStackSetOperationsRequestPrivate(
    const CloudFormationRequest::Action action, ListStackSetOperationsRequest * const q)
    : CloudFormationRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListStackSetOperationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListStackSetOperationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListStackSetOperationsRequest instance.
 */
ListStackSetOperationsRequestPrivate::ListStackSetOperationsRequestPrivate(
    const ListStackSetOperationsRequestPrivate &other, ListStackSetOperationsRequest * const q)
    : CloudFormationRequestPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws
