// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putaccountsettingdefaultrequest.h"
#include "putaccountsettingdefaultrequest_p.h"
#include "putaccountsettingdefaultresponse.h"
#include "ecsrequest_p.h"

namespace QtAws {
namespace Ecs {

/*!
 * \class QtAws::Ecs::PutAccountSettingDefaultRequest
 * \brief The PutAccountSettingDefaultRequest class provides an interface for Ecs PutAccountSettingDefault requests.
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
 * \sa EcsClient::putAccountSettingDefault
 */

/*!
 * Constructs a copy of \a other.
 */
PutAccountSettingDefaultRequest::PutAccountSettingDefaultRequest(const PutAccountSettingDefaultRequest &other)
    : EcsRequest(new PutAccountSettingDefaultRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutAccountSettingDefaultRequest object.
 */
PutAccountSettingDefaultRequest::PutAccountSettingDefaultRequest()
    : EcsRequest(new PutAccountSettingDefaultRequestPrivate(EcsRequest::PutAccountSettingDefaultAction, this))
{

}

/*!
 * \reimp
 */
bool PutAccountSettingDefaultRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutAccountSettingDefaultResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutAccountSettingDefaultRequest::response(QNetworkReply * const reply) const
{
    return new PutAccountSettingDefaultResponse(*this, reply);
}

/*!
 * \class QtAws::Ecs::PutAccountSettingDefaultRequestPrivate
 * \brief The PutAccountSettingDefaultRequestPrivate class provides private implementation for PutAccountSettingDefaultRequest.
 * \internal
 *
 * \inmodule QtAwsEcs
 */

/*!
 * Constructs a PutAccountSettingDefaultRequestPrivate object for Ecs \a action,
 * with public implementation \a q.
 */
PutAccountSettingDefaultRequestPrivate::PutAccountSettingDefaultRequestPrivate(
    const EcsRequest::Action action, PutAccountSettingDefaultRequest * const q)
    : EcsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutAccountSettingDefaultRequest
 * class' copy constructor.
 */
PutAccountSettingDefaultRequestPrivate::PutAccountSettingDefaultRequestPrivate(
    const PutAccountSettingDefaultRequestPrivate &other, PutAccountSettingDefaultRequest * const q)
    : EcsRequestPrivate(other, q)
{

}

} // namespace Ecs
} // namespace QtAws
