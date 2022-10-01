// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteclusterrequest.h"
#include "deleteclusterrequest_p.h"
#include "deleteclusterresponse.h"
#include "eksrequest_p.h"

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::DeleteClusterRequest
 * \brief The DeleteClusterRequest class provides an interface for Eks DeleteCluster requests.
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
 * \sa EksClient::deleteCluster
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteClusterRequest::DeleteClusterRequest(const DeleteClusterRequest &other)
    : EksRequest(new DeleteClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteClusterRequest object.
 */
DeleteClusterRequest::DeleteClusterRequest()
    : EksRequest(new DeleteClusterRequestPrivate(EksRequest::DeleteClusterAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteClusterRequest::response(QNetworkReply * const reply) const
{
    return new DeleteClusterResponse(*this, reply);
}

/*!
 * \class QtAws::Eks::DeleteClusterRequestPrivate
 * \brief The DeleteClusterRequestPrivate class provides private implementation for DeleteClusterRequest.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a DeleteClusterRequestPrivate object for Eks \a action,
 * with public implementation \a q.
 */
DeleteClusterRequestPrivate::DeleteClusterRequestPrivate(
    const EksRequest::Action action, DeleteClusterRequest * const q)
    : EksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteClusterRequest
 * class' copy constructor.
 */
DeleteClusterRequestPrivate::DeleteClusterRequestPrivate(
    const DeleteClusterRequestPrivate &other, DeleteClusterRequest * const q)
    : EksRequestPrivate(other, q)
{

}

} // namespace Eks
} // namespace QtAws
