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

#include "deletechangesetrequest.h"
#include "deletechangesetrequest_p.h"
#include "deletechangesetresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::DeleteChangeSetRequest
 *
 * \brief The DeleteChangeSetRequest class encapsulates CloudFormation DeleteChangeSet requests.
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
 * \sa CloudFormationClient::deleteChangeSet
 */

/*!
 * @brief  Constructs a new DeleteChangeSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteChangeSetRequest::DeleteChangeSetRequest(const DeleteChangeSetRequest &other)
    : CloudFormationRequest(new DeleteChangeSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteChangeSetRequest object.
 */
DeleteChangeSetRequest::DeleteChangeSetRequest()
    : CloudFormationRequest(new DeleteChangeSetRequestPrivate(CloudFormationRequest::DeleteChangeSetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteChangeSetRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteChangeSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteChangeSetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteChangeSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteChangeSetResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteChangeSetRequestPrivate
 *
 * @brief  Private implementation for DeleteChangeSetRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteChangeSetRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public DeleteChangeSetRequest instance.
 */
DeleteChangeSetRequestPrivate::DeleteChangeSetRequestPrivate(
    const CloudFormationRequest::Action action, DeleteChangeSetRequest * const q)
    : CloudFormationRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteChangeSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteChangeSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteChangeSetRequest instance.
 */
DeleteChangeSetRequestPrivate::DeleteChangeSetRequestPrivate(
    const DeleteChangeSetRequestPrivate &other, DeleteChangeSetRequest * const q)
    : CloudFormationRequestPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws
