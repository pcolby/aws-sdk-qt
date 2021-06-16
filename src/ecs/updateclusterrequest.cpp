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

#include "updateclusterrequest.h"
#include "updateclusterrequest_p.h"
#include "updateclusterresponse.h"
#include "ecsrequest_p.h"

namespace QtAws {
namespace ECS {

/*!
 * \class QtAws::ECS::UpdateClusterRequest
 * \brief The UpdateClusterRequest class provides an interface for ECS UpdateCluster requests.
 *
 * \inmodule QtAwsECS
 *
 *  <fullname>Amazon Elastic Container Service</fullname>
 * 
 *  Amazon Elastic Container Service (Amazon ECS) is a highly scalable, fast, container management service that makes it
 *  easy to run, stop, and manage Docker containers on a cluster. You can host your cluster on a serverless infrastructure
 *  that is managed by Amazon ECS by launching your services or tasks on AWS Fargate. For more control, you can host your
 *  tasks on a cluster of Amazon Elastic Compute Cloud (Amazon EC2) instances that you
 * 
 *  manage>
 * 
 *  Amazon ECS makes it easy to launch and stop container-based applications with simple API calls, allows you to get the
 *  state of your cluster from a centralized service, and gives you access to many familiar Amazon EC2
 * 
 *  features>
 * 
 *  You can use Amazon ECS to schedule the placement of containers across your cluster based on your resource needs,
 *  isolation policies, and availability requirements. Amazon ECS eliminates the need for you to operate your own cluster
 *  management and configuration management systems or worry about scaling your management
 *
 * \sa EcsClient::updateCluster
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateClusterRequest::UpdateClusterRequest(const UpdateClusterRequest &other)
    : EcsRequest(new UpdateClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateClusterRequest object.
 */
UpdateClusterRequest::UpdateClusterRequest()
    : EcsRequest(new UpdateClusterRequestPrivate(EcsRequest::UpdateClusterAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateClusterRequest::response(QNetworkReply * const reply) const
{
    return new UpdateClusterResponse(*this, reply);
}

/*!
 * \class QtAws::ECS::UpdateClusterRequestPrivate
 * \brief The UpdateClusterRequestPrivate class provides private implementation for UpdateClusterRequest.
 * \internal
 *
 * \inmodule QtAwsECS
 */

/*!
 * Constructs a UpdateClusterRequestPrivate object for Ecs \a action,
 * with public implementation \a q.
 */
UpdateClusterRequestPrivate::UpdateClusterRequestPrivate(
    const EcsRequest::Action action, UpdateClusterRequest * const q)
    : EcsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateClusterRequest
 * class' copy constructor.
 */
UpdateClusterRequestPrivate::UpdateClusterRequestPrivate(
    const UpdateClusterRequestPrivate &other, UpdateClusterRequest * const q)
    : EcsRequestPrivate(other, q)
{

}

} // namespace ECS
} // namespace QtAws
