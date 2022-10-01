// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createclusterrequest.h"
#include "createclusterrequest_p.h"
#include "createclusterresponse.h"
#include "eksrequest_p.h"

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::CreateClusterRequest
 * \brief The CreateClusterRequest class provides an interface for Eks CreateCluster requests.
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
 * \sa EksClient::createCluster
 */

/*!
 * Constructs a copy of \a other.
 */
CreateClusterRequest::CreateClusterRequest(const CreateClusterRequest &other)
    : EksRequest(new CreateClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateClusterRequest object.
 */
CreateClusterRequest::CreateClusterRequest()
    : EksRequest(new CreateClusterRequestPrivate(EksRequest::CreateClusterAction, this))
{

}

/*!
 * \reimp
 */
bool CreateClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateClusterRequest::response(QNetworkReply * const reply) const
{
    return new CreateClusterResponse(*this, reply);
}

/*!
 * \class QtAws::Eks::CreateClusterRequestPrivate
 * \brief The CreateClusterRequestPrivate class provides private implementation for CreateClusterRequest.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a CreateClusterRequestPrivate object for Eks \a action,
 * with public implementation \a q.
 */
CreateClusterRequestPrivate::CreateClusterRequestPrivate(
    const EksRequest::Action action, CreateClusterRequest * const q)
    : EksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateClusterRequest
 * class' copy constructor.
 */
CreateClusterRequestPrivate::CreateClusterRequestPrivate(
    const CreateClusterRequestPrivate &other, CreateClusterRequest * const q)
    : EksRequestPrivate(other, q)
{

}

} // namespace Eks
} // namespace QtAws
