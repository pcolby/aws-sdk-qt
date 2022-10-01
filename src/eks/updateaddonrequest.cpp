// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateaddonrequest.h"
#include "updateaddonrequest_p.h"
#include "updateaddonresponse.h"
#include "eksrequest_p.h"

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::UpdateAddonRequest
 * \brief The UpdateAddonRequest class provides an interface for Eks UpdateAddon requests.
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
 * \sa EksClient::updateAddon
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAddonRequest::UpdateAddonRequest(const UpdateAddonRequest &other)
    : EksRequest(new UpdateAddonRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAddonRequest object.
 */
UpdateAddonRequest::UpdateAddonRequest()
    : EksRequest(new UpdateAddonRequestPrivate(EksRequest::UpdateAddonAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAddonRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAddonResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAddonRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAddonResponse(*this, reply);
}

/*!
 * \class QtAws::Eks::UpdateAddonRequestPrivate
 * \brief The UpdateAddonRequestPrivate class provides private implementation for UpdateAddonRequest.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a UpdateAddonRequestPrivate object for Eks \a action,
 * with public implementation \a q.
 */
UpdateAddonRequestPrivate::UpdateAddonRequestPrivate(
    const EksRequest::Action action, UpdateAddonRequest * const q)
    : EksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAddonRequest
 * class' copy constructor.
 */
UpdateAddonRequestPrivate::UpdateAddonRequestPrivate(
    const UpdateAddonRequestPrivate &other, UpdateAddonRequest * const q)
    : EksRequestPrivate(other, q)
{

}

} // namespace Eks
} // namespace QtAws
