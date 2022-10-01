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

#include "describeservicesrequest.h"
#include "describeservicesrequest_p.h"
#include "describeservicesresponse.h"
#include "ecsrequest_p.h"

namespace QtAws {
namespace Ecs {

/*!
 * \class QtAws::Ecs::DescribeServicesRequest
 * \brief The DescribeServicesRequest class provides an interface for Ecs DescribeServices requests.
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
 * \sa EcsClient::describeServices
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeServicesRequest::DescribeServicesRequest(const DescribeServicesRequest &other)
    : EcsRequest(new DescribeServicesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeServicesRequest object.
 */
DescribeServicesRequest::DescribeServicesRequest()
    : EcsRequest(new DescribeServicesRequestPrivate(EcsRequest::DescribeServicesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeServicesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeServicesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeServicesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeServicesResponse(*this, reply);
}

/*!
 * \class QtAws::Ecs::DescribeServicesRequestPrivate
 * \brief The DescribeServicesRequestPrivate class provides private implementation for DescribeServicesRequest.
 * \internal
 *
 * \inmodule QtAwsEcs
 */

/*!
 * Constructs a DescribeServicesRequestPrivate object for Ecs \a action,
 * with public implementation \a q.
 */
DescribeServicesRequestPrivate::DescribeServicesRequestPrivate(
    const EcsRequest::Action action, DescribeServicesRequest * const q)
    : EcsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeServicesRequest
 * class' copy constructor.
 */
DescribeServicesRequestPrivate::DescribeServicesRequestPrivate(
    const DescribeServicesRequestPrivate &other, DescribeServicesRequest * const q)
    : EcsRequestPrivate(other, q)
{

}

} // namespace Ecs
} // namespace QtAws
