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

#include "liststackinstancesrequest.h"
#include "liststackinstancesrequest_p.h"
#include "liststackinstancesresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::ListStackInstancesRequest
 *
 * \brief The ListStackInstancesRequest class encapsulates CloudFormation ListStackInstances requests.
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
 * \sa CloudFormationClient::listStackInstances
 */

/*!
 * @brief  Constructs a new ListStackInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListStackInstancesRequest::ListStackInstancesRequest(const ListStackInstancesRequest &other)
    : CloudFormationRequest(new ListStackInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListStackInstancesRequest object.
 */
ListStackInstancesRequest::ListStackInstancesRequest()
    : CloudFormationRequest(new ListStackInstancesRequestPrivate(CloudFormationRequest::ListStackInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool ListStackInstancesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListStackInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListStackInstancesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStackInstancesRequest::response(QNetworkReply * const reply) const
{
    return new ListStackInstancesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListStackInstancesRequestPrivate
 *
 * @brief  Private implementation for ListStackInstancesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListStackInstancesRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public ListStackInstancesRequest instance.
 */
ListStackInstancesRequestPrivate::ListStackInstancesRequestPrivate(
    const CloudFormationRequest::Action action, ListStackInstancesRequest * const q)
    : CloudFormationRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListStackInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListStackInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListStackInstancesRequest instance.
 */
ListStackInstancesRequestPrivate::ListStackInstancesRequestPrivate(
    const ListStackInstancesRequestPrivate &other, ListStackInstancesRequest * const q)
    : CloudFormationRequestPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws
