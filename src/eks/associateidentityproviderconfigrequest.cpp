// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associateidentityproviderconfigrequest.h"
#include "associateidentityproviderconfigrequest_p.h"
#include "associateidentityproviderconfigresponse.h"
#include "eksrequest_p.h"

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::AssociateIdentityProviderConfigRequest
 * \brief The AssociateIdentityProviderConfigRequest class provides an interface for Eks AssociateIdentityProviderConfig requests.
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
 * \sa EksClient::associateIdentityProviderConfig
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateIdentityProviderConfigRequest::AssociateIdentityProviderConfigRequest(const AssociateIdentityProviderConfigRequest &other)
    : EksRequest(new AssociateIdentityProviderConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateIdentityProviderConfigRequest object.
 */
AssociateIdentityProviderConfigRequest::AssociateIdentityProviderConfigRequest()
    : EksRequest(new AssociateIdentityProviderConfigRequestPrivate(EksRequest::AssociateIdentityProviderConfigAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateIdentityProviderConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateIdentityProviderConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateIdentityProviderConfigRequest::response(QNetworkReply * const reply) const
{
    return new AssociateIdentityProviderConfigResponse(*this, reply);
}

/*!
 * \class QtAws::Eks::AssociateIdentityProviderConfigRequestPrivate
 * \brief The AssociateIdentityProviderConfigRequestPrivate class provides private implementation for AssociateIdentityProviderConfigRequest.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a AssociateIdentityProviderConfigRequestPrivate object for Eks \a action,
 * with public implementation \a q.
 */
AssociateIdentityProviderConfigRequestPrivate::AssociateIdentityProviderConfigRequestPrivate(
    const EksRequest::Action action, AssociateIdentityProviderConfigRequest * const q)
    : EksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateIdentityProviderConfigRequest
 * class' copy constructor.
 */
AssociateIdentityProviderConfigRequestPrivate::AssociateIdentityProviderConfigRequestPrivate(
    const AssociateIdentityProviderConfigRequestPrivate &other, AssociateIdentityProviderConfigRequest * const q)
    : EksRequestPrivate(other, q)
{

}

} // namespace Eks
} // namespace QtAws
