// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletenodegrouprequest.h"
#include "deletenodegrouprequest_p.h"
#include "deletenodegroupresponse.h"
#include "eksrequest_p.h"

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::DeleteNodegroupRequest
 * \brief The DeleteNodegroupRequest class provides an interface for Eks DeleteNodegroup requests.
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
 * \sa EksClient::deleteNodegroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteNodegroupRequest::DeleteNodegroupRequest(const DeleteNodegroupRequest &other)
    : EksRequest(new DeleteNodegroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteNodegroupRequest object.
 */
DeleteNodegroupRequest::DeleteNodegroupRequest()
    : EksRequest(new DeleteNodegroupRequestPrivate(EksRequest::DeleteNodegroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteNodegroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteNodegroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteNodegroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteNodegroupResponse(*this, reply);
}

/*!
 * \class QtAws::Eks::DeleteNodegroupRequestPrivate
 * \brief The DeleteNodegroupRequestPrivate class provides private implementation for DeleteNodegroupRequest.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a DeleteNodegroupRequestPrivate object for Eks \a action,
 * with public implementation \a q.
 */
DeleteNodegroupRequestPrivate::DeleteNodegroupRequestPrivate(
    const EksRequest::Action action, DeleteNodegroupRequest * const q)
    : EksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteNodegroupRequest
 * class' copy constructor.
 */
DeleteNodegroupRequestPrivate::DeleteNodegroupRequestPrivate(
    const DeleteNodegroupRequestPrivate &other, DeleteNodegroupRequest * const q)
    : EksRequestPrivate(other, q)
{

}

} // namespace Eks
} // namespace QtAws
