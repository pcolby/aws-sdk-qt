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

#include "registerclusterrequest.h"
#include "registerclusterrequest_p.h"
#include "registerclusterresponse.h"
#include "eksrequest_p.h"

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::RegisterClusterRequest
 * \brief The RegisterClusterRequest class provides an interface for Eks RegisterCluster requests.
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
 * \sa EksClient::registerCluster
 */

/*!
 * Constructs a copy of \a other.
 */
RegisterClusterRequest::RegisterClusterRequest(const RegisterClusterRequest &other)
    : EksRequest(new RegisterClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RegisterClusterRequest object.
 */
RegisterClusterRequest::RegisterClusterRequest()
    : EksRequest(new RegisterClusterRequestPrivate(EksRequest::RegisterClusterAction, this))
{

}

/*!
 * \reimp
 */
bool RegisterClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RegisterClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterClusterRequest::response(QNetworkReply * const reply) const
{
    return new RegisterClusterResponse(*this, reply);
}

/*!
 * \class QtAws::Eks::RegisterClusterRequestPrivate
 * \brief The RegisterClusterRequestPrivate class provides private implementation for RegisterClusterRequest.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a RegisterClusterRequestPrivate object for Eks \a action,
 * with public implementation \a q.
 */
RegisterClusterRequestPrivate::RegisterClusterRequestPrivate(
    const EksRequest::Action action, RegisterClusterRequest * const q)
    : EksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RegisterClusterRequest
 * class' copy constructor.
 */
RegisterClusterRequestPrivate::RegisterClusterRequestPrivate(
    const RegisterClusterRequestPrivate &other, RegisterClusterRequest * const q)
    : EksRequestPrivate(other, q)
{

}

} // namespace Eks
} // namespace QtAws
