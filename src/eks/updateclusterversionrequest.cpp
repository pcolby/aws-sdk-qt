// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateclusterversionrequest.h"
#include "updateclusterversionrequest_p.h"
#include "updateclusterversionresponse.h"
#include "eksrequest_p.h"

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::UpdateClusterVersionRequest
 * \brief The UpdateClusterVersionRequest class provides an interface for Eks UpdateClusterVersion requests.
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
 * \sa EksClient::updateClusterVersion
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateClusterVersionRequest::UpdateClusterVersionRequest(const UpdateClusterVersionRequest &other)
    : EksRequest(new UpdateClusterVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateClusterVersionRequest object.
 */
UpdateClusterVersionRequest::UpdateClusterVersionRequest()
    : EksRequest(new UpdateClusterVersionRequestPrivate(EksRequest::UpdateClusterVersionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateClusterVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateClusterVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateClusterVersionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateClusterVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Eks::UpdateClusterVersionRequestPrivate
 * \brief The UpdateClusterVersionRequestPrivate class provides private implementation for UpdateClusterVersionRequest.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a UpdateClusterVersionRequestPrivate object for Eks \a action,
 * with public implementation \a q.
 */
UpdateClusterVersionRequestPrivate::UpdateClusterVersionRequestPrivate(
    const EksRequest::Action action, UpdateClusterVersionRequest * const q)
    : EksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateClusterVersionRequest
 * class' copy constructor.
 */
UpdateClusterVersionRequestPrivate::UpdateClusterVersionRequestPrivate(
    const UpdateClusterVersionRequestPrivate &other, UpdateClusterVersionRequest * const q)
    : EksRequestPrivate(other, q)
{

}

} // namespace Eks
} // namespace QtAws
