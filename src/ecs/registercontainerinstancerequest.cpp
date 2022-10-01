// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "registercontainerinstancerequest.h"
#include "registercontainerinstancerequest_p.h"
#include "registercontainerinstanceresponse.h"
#include "ecsrequest_p.h"

namespace QtAws {
namespace Ecs {

/*!
 * \class QtAws::Ecs::RegisterContainerInstanceRequest
 * \brief The RegisterContainerInstanceRequest class provides an interface for Ecs RegisterContainerInstance requests.
 *
 * \inmodule QtAwsEcs
 *
 *  <fullname>Amazon Elastic Container Service</fullname>
 * 
 *  Amazon Elastic Container Service (Amazon ECS) is a highly scalable, fast, container management service. It makes it easy
 *  to run, stop, and manage Docker containers. You can host your cluster on a serverless infrastructure that's managed by
 *  Amazon ECS by launching your services or tasks on Fargate. For more control, you can host your tasks on a cluster of
 *  Amazon Elastic Compute Cloud (Amazon EC2) or External (on-premises) instances that you
 * 
 *  manage>
 * 
 *  Amazon ECS makes it easy to launch and stop container-based applications with simple API calls. This makes it easy to
 *  get the state of your cluster from a centralized service, and gives you access to many familiar Amazon EC2
 * 
 *  features>
 * 
 *  You can use Amazon ECS to schedule the placement of containers across your cluster based on your resource needs,
 *  isolation policies, and availability requirements. With Amazon ECS, you don't need to operate your own cluster
 *  management and configuration management systems. You also don't need to worry about scaling your management
 *
 * \sa EcsClient::registerContainerInstance
 */

/*!
 * Constructs a copy of \a other.
 */
RegisterContainerInstanceRequest::RegisterContainerInstanceRequest(const RegisterContainerInstanceRequest &other)
    : EcsRequest(new RegisterContainerInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RegisterContainerInstanceRequest object.
 */
RegisterContainerInstanceRequest::RegisterContainerInstanceRequest()
    : EcsRequest(new RegisterContainerInstanceRequestPrivate(EcsRequest::RegisterContainerInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool RegisterContainerInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RegisterContainerInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterContainerInstanceRequest::response(QNetworkReply * const reply) const
{
    return new RegisterContainerInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::Ecs::RegisterContainerInstanceRequestPrivate
 * \brief The RegisterContainerInstanceRequestPrivate class provides private implementation for RegisterContainerInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsEcs
 */

/*!
 * Constructs a RegisterContainerInstanceRequestPrivate object for Ecs \a action,
 * with public implementation \a q.
 */
RegisterContainerInstanceRequestPrivate::RegisterContainerInstanceRequestPrivate(
    const EcsRequest::Action action, RegisterContainerInstanceRequest * const q)
    : EcsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RegisterContainerInstanceRequest
 * class' copy constructor.
 */
RegisterContainerInstanceRequestPrivate::RegisterContainerInstanceRequestPrivate(
    const RegisterContainerInstanceRequestPrivate &other, RegisterContainerInstanceRequest * const q)
    : EcsRequestPrivate(other, q)
{

}

} // namespace Ecs
} // namespace QtAws
