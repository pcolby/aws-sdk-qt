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

#include "deleteaddonrequest.h"
#include "deleteaddonrequest_p.h"
#include "deleteaddonresponse.h"
#include "eksrequest_p.h"

namespace QtAws {
namespace EKS {

/*!
 * \class QtAws::EKS::DeleteAddonRequest
 * \brief The DeleteAddonRequest class provides an interface for EKS DeleteAddon requests.
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
 * \class QtAws::EKS::DeleteAddonRequestPrivate
 * \brief The DeleteAddonRequestPrivate class provides private implementation for DeleteAddonRequest.
 * \internal
 *
 * \inmodule QtAwsEKS
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

} // namespace EKS
} // namespace QtAws
