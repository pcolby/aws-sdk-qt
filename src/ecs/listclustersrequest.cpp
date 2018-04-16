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

#include "listclustersrequest.h"
#include "listclustersrequest_p.h"
#include "listclustersresponse.h"
#include "ecsrequest_p.h"

namespace QtAws {
namespace ECS {

/*!
 * \class QtAws::ECS::ListClustersRequest
 *
 * \brief The ListClustersRequest class encapsulates ECS ListClusters requests.
 *
 * \ingroup ECS
 *
 *  Amazon Elastic Container Service (Amazon ECS) is a highly scalable, fast, container management service that makes it
 *  easy to run, stop, and manage Docker containers on a cluster. You can host your cluster on a serverless infrastructure
 *  that is managed by Amazon ECS by launching your services or tasks using the Fargate launch type. For more control, you
 *  can host your tasks on a cluster of Amazon Elastic Compute Cloud (Amazon EC2) instances that you manage by using the EC2
 *  launch type. For more information about launch types, see <a
 *  href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon ECS Launch
 * 
 *  Types</a>>
 * 
 *  Amazon ECS lets you launch and stop container-based applications with simple API calls, allows you to get the state of
 *  your cluster from a centralized service, and gives you access to many familiar Amazon EC2
 * 
 *  features>
 * 
 *  You can use Amazon ECS to schedule the placement of containers across your cluster based on your resource needs,
 *  isolation policies, and availability requirements. Amazon ECS eliminates the need for you to operate your own cluster
 *  management and configuration management systems or worry about scaling your management
 *
 * \sa ECSClient::listClusters
 */

/*!
 * @brief  Constructs a new ListClustersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListClustersRequest::ListClustersRequest(const ListClustersRequest &other)
    : ECSRequest(new ListClustersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListClustersRequest object.
 */
ListClustersRequest::ListClustersRequest()
    : ECSRequest(new ListClustersRequestPrivate(ECSRequest::ListClustersAction, this))
{

}

/*!
 * \reimp
 */
bool ListClustersRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListClustersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListClustersResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ECSClient::send
 */
QtAws::Core::AwsAbstractResponse * ListClustersRequest::response(QNetworkReply * const reply) const
{
    return new ListClustersResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListClustersRequestPrivate
 *
 * @brief  Private implementation for ListClustersRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListClustersRequestPrivate object.
 *
 * @param  action  ECS action being performed.
 * @param  q       Pointer to this object's public ListClustersRequest instance.
 */
ListClustersRequestPrivate::ListClustersRequestPrivate(
    const ECSRequest::Action action, ListClustersRequest * const q)
    : ECSRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListClustersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListClustersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListClustersRequest instance.
 */
ListClustersRequestPrivate::ListClustersRequestPrivate(
    const ListClustersRequestPrivate &other, ListClustersRequest * const q)
    : ECSRequestPrivate(other, q)
{

}

} // namespace ECS
} // namespace QtAws
