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

#include "describeidentityproviderconfigrequest.h"
#include "describeidentityproviderconfigrequest_p.h"
#include "describeidentityproviderconfigresponse.h"
#include "eksrequest_p.h"

namespace QtAws {
namespace EKS {

/*!
 * \class QtAws::EKS::DescribeIdentityProviderConfigRequest
 * \brief The DescribeIdentityProviderConfigRequest class provides an interface for EKS DescribeIdentityProviderConfig requests.
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
 * \sa EksClient::describeIdentityProviderConfig
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeIdentityProviderConfigRequest::DescribeIdentityProviderConfigRequest(const DescribeIdentityProviderConfigRequest &other)
    : EksRequest(new DescribeIdentityProviderConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeIdentityProviderConfigRequest object.
 */
DescribeIdentityProviderConfigRequest::DescribeIdentityProviderConfigRequest()
    : EksRequest(new DescribeIdentityProviderConfigRequestPrivate(EksRequest::DescribeIdentityProviderConfigAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeIdentityProviderConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeIdentityProviderConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeIdentityProviderConfigRequest::response(QNetworkReply * const reply) const
{
    return new DescribeIdentityProviderConfigResponse(*this, reply);
}

/*!
 * \class QtAws::EKS::DescribeIdentityProviderConfigRequestPrivate
 * \brief The DescribeIdentityProviderConfigRequestPrivate class provides private implementation for DescribeIdentityProviderConfigRequest.
 * \internal
 *
 * \inmodule QtAwsEKS
 */

/*!
 * Constructs a DescribeIdentityProviderConfigRequestPrivate object for Eks \a action,
 * with public implementation \a q.
 */
DescribeIdentityProviderConfigRequestPrivate::DescribeIdentityProviderConfigRequestPrivate(
    const EksRequest::Action action, DescribeIdentityProviderConfigRequest * const q)
    : EksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeIdentityProviderConfigRequest
 * class' copy constructor.
 */
DescribeIdentityProviderConfigRequestPrivate::DescribeIdentityProviderConfigRequestPrivate(
    const DescribeIdentityProviderConfigRequestPrivate &other, DescribeIdentityProviderConfigRequest * const q)
    : EksRequestPrivate(other, q)
{

}

} // namespace EKS
} // namespace QtAws
