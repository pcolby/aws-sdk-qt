// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteaddonrequest.h"
#include "deleteaddonrequest_p.h"
#include "deleteaddonresponse.h"
#include "eksrequest_p.h"

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::DeleteAddonRequest
 * \brief The DeleteAddonRequest class provides an interface for Eks DeleteAddon requests.
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
 * \sa EksClient::deleteAddon
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAddonRequest::DeleteAddonRequest(const DeleteAddonRequest &other)
    : EksRequest(new DeleteAddonRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAddonRequest object.
 */
DeleteAddonRequest::DeleteAddonRequest()
    : EksRequest(new DeleteAddonRequestPrivate(EksRequest::DeleteAddonAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAddonRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAddonResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAddonRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAddonResponse(*this, reply);
}

/*!
 * \class QtAws::Eks::DeleteAddonRequestPrivate
 * \brief The DeleteAddonRequestPrivate class provides private implementation for DeleteAddonRequest.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a DeleteAddonRequestPrivate object for Eks \a action,
 * with public implementation \a q.
 */
DeleteAddonRequestPrivate::DeleteAddonRequestPrivate(
    const EksRequest::Action action, DeleteAddonRequest * const q)
    : EksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAddonRequest
 * class' copy constructor.
 */
DeleteAddonRequestPrivate::DeleteAddonRequestPrivate(
    const DeleteAddonRequestPrivate &other, DeleteAddonRequest * const q)
    : EksRequestPrivate(other, q)
{

}

} // namespace Eks
} // namespace QtAws
