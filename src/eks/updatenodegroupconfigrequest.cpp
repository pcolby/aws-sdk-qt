// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatenodegroupconfigrequest.h"
#include "updatenodegroupconfigrequest_p.h"
#include "updatenodegroupconfigresponse.h"
#include "eksrequest_p.h"

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::UpdateNodegroupConfigRequest
 * \brief The UpdateNodegroupConfigRequest class provides an interface for Eks UpdateNodegroupConfig requests.
 *
 * \inmodule QtAwsEks
 *
 *  Amazon Elastic Kubernetes Service (Amazon EKS) is a managed service that makes it easy for you to run Kubernetes on
 *  Amazon Web Services without needing to stand up or maintain your own Kubernetes control plane. Kubernetes is an
 *  open-source system for automating the deployment, scaling, and management of containerized applications.
 * 
 *  </p
 * 
 *  Amazon EKS runs up-to-date versions of the open-source Kubernetes software, so you can use all the existing plugins and
 *  tooling from the Kubernetes community. Applications running on Amazon EKS are fully compatible with applications running
 *  on any standard Kubernetes environment, whether running in on-premises data centers or public clouds. This means that
 *  you can easily migrate any standard Kubernetes application to Amazon EKS without any code modification
 *
 * \sa EksClient::updateNodegroupConfig
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateNodegroupConfigRequest::UpdateNodegroupConfigRequest(const UpdateNodegroupConfigRequest &other)
    : EksRequest(new UpdateNodegroupConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateNodegroupConfigRequest object.
 */
UpdateNodegroupConfigRequest::UpdateNodegroupConfigRequest()
    : EksRequest(new UpdateNodegroupConfigRequestPrivate(EksRequest::UpdateNodegroupConfigAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateNodegroupConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateNodegroupConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateNodegroupConfigRequest::response(QNetworkReply * const reply) const
{
    return new UpdateNodegroupConfigResponse(*this, reply);
}

/*!
 * \class QtAws::Eks::UpdateNodegroupConfigRequestPrivate
 * \brief The UpdateNodegroupConfigRequestPrivate class provides private implementation for UpdateNodegroupConfigRequest.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a UpdateNodegroupConfigRequestPrivate object for Eks \a action,
 * with public implementation \a q.
 */
UpdateNodegroupConfigRequestPrivate::UpdateNodegroupConfigRequestPrivate(
    const EksRequest::Action action, UpdateNodegroupConfigRequest * const q)
    : EksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateNodegroupConfigRequest
 * class' copy constructor.
 */
UpdateNodegroupConfigRequestPrivate::UpdateNodegroupConfigRequestPrivate(
    const UpdateNodegroupConfigRequestPrivate &other, UpdateNodegroupConfigRequest * const q)
    : EksRequestPrivate(other, q)
{

}

} // namespace Eks
} // namespace QtAws
