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

#include "disassociateidentityproviderconfigrequest.h"
#include "disassociateidentityproviderconfigrequest_p.h"
#include "disassociateidentityproviderconfigresponse.h"
#include "eksrequest_p.h"

namespace QtAws {
namespace EKS {

/*!
 * \class QtAws::EKS::DisassociateIdentityProviderConfigRequest
 * \brief The DisassociateIdentityProviderConfigRequest class provides an interface for EKS DisassociateIdentityProviderConfig requests.
 *
 * \inmodule QtAwsEKS
 *
 *  Amazon Elastic Kubernetes Service (Amazon EKS) is a managed service that makes it easy for you to run Kubernetes on AWS
 *  without needing to stand up or maintain your own Kubernetes control plane. Kubernetes is an open-source system for
 *  automating the deployment, scaling, and management of containerized applications.
 * 
 *  </p
 * 
 *  Amazon EKS runs up-to-date versions of the open-source Kubernetes software, so you can use all the existing plugins and
 *  tooling from the Kubernetes community. Applications running on Amazon EKS are fully compatible with applications running
 *  on any standard Kubernetes environment, whether running in on-premises data centers or public clouds. This means that
 *  you can easily migrate any standard Kubernetes application to Amazon EKS without any code modification
 *
 * \sa EksClient::disassociateIdentityProviderConfig
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateIdentityProviderConfigRequest::DisassociateIdentityProviderConfigRequest(const DisassociateIdentityProviderConfigRequest &other)
    : EksRequest(new DisassociateIdentityProviderConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateIdentityProviderConfigRequest object.
 */
DisassociateIdentityProviderConfigRequest::DisassociateIdentityProviderConfigRequest()
    : EksRequest(new DisassociateIdentityProviderConfigRequestPrivate(EksRequest::DisassociateIdentityProviderConfigAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateIdentityProviderConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateIdentityProviderConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateIdentityProviderConfigRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateIdentityProviderConfigResponse(*this, reply);
}

/*!
 * \class QtAws::EKS::DisassociateIdentityProviderConfigRequestPrivate
 * \brief The DisassociateIdentityProviderConfigRequestPrivate class provides private implementation for DisassociateIdentityProviderConfigRequest.
 * \internal
 *
 * \inmodule QtAwsEKS
 */

/*!
 * Constructs a DisassociateIdentityProviderConfigRequestPrivate object for Eks \a action,
 * with public implementation \a q.
 */
DisassociateIdentityProviderConfigRequestPrivate::DisassociateIdentityProviderConfigRequestPrivate(
    const EksRequest::Action action, DisassociateIdentityProviderConfigRequest * const q)
    : EksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateIdentityProviderConfigRequest
 * class' copy constructor.
 */
DisassociateIdentityProviderConfigRequestPrivate::DisassociateIdentityProviderConfigRequestPrivate(
    const DisassociateIdentityProviderConfigRequestPrivate &other, DisassociateIdentityProviderConfigRequest * const q)
    : EksRequestPrivate(other, q)
{

}

} // namespace EKS
} // namespace QtAws
