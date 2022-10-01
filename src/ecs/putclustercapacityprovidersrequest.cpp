// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putclustercapacityprovidersrequest.h"
#include "putclustercapacityprovidersrequest_p.h"
#include "putclustercapacityprovidersresponse.h"
#include "ecsrequest_p.h"

namespace QtAws {
namespace Ecs {

/*!
 * \class QtAws::Ecs::PutClusterCapacityProvidersRequest
 * \brief The PutClusterCapacityProvidersRequest class provides an interface for Ecs PutClusterCapacityProviders requests.
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
 * \sa EcsClient::putClusterCapacityProviders
 */

/*!
 * Constructs a copy of \a other.
 */
PutClusterCapacityProvidersRequest::PutClusterCapacityProvidersRequest(const PutClusterCapacityProvidersRequest &other)
    : EcsRequest(new PutClusterCapacityProvidersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutClusterCapacityProvidersRequest object.
 */
PutClusterCapacityProvidersRequest::PutClusterCapacityProvidersRequest()
    : EcsRequest(new PutClusterCapacityProvidersRequestPrivate(EcsRequest::PutClusterCapacityProvidersAction, this))
{

}

/*!
 * \reimp
 */
bool PutClusterCapacityProvidersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutClusterCapacityProvidersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutClusterCapacityProvidersRequest::response(QNetworkReply * const reply) const
{
    return new PutClusterCapacityProvidersResponse(*this, reply);
}

/*!
 * \class QtAws::Ecs::PutClusterCapacityProvidersRequestPrivate
 * \brief The PutClusterCapacityProvidersRequestPrivate class provides private implementation for PutClusterCapacityProvidersRequest.
 * \internal
 *
 * \inmodule QtAwsEcs
 */

/*!
 * Constructs a PutClusterCapacityProvidersRequestPrivate object for Ecs \a action,
 * with public implementation \a q.
 */
PutClusterCapacityProvidersRequestPrivate::PutClusterCapacityProvidersRequestPrivate(
    const EcsRequest::Action action, PutClusterCapacityProvidersRequest * const q)
    : EcsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutClusterCapacityProvidersRequest
 * class' copy constructor.
 */
PutClusterCapacityProvidersRequestPrivate::PutClusterCapacityProvidersRequestPrivate(
    const PutClusterCapacityProvidersRequestPrivate &other, PutClusterCapacityProvidersRequest * const q)
    : EcsRequestPrivate(other, q)
{

}

} // namespace Ecs
} // namespace QtAws
