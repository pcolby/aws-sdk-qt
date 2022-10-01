// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefargateprofilerequest.h"
#include "deletefargateprofilerequest_p.h"
#include "deletefargateprofileresponse.h"
#include "eksrequest_p.h"

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::DeleteFargateProfileRequest
 * \brief The DeleteFargateProfileRequest class provides an interface for Eks DeleteFargateProfile requests.
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
 * \sa EksClient::deleteFargateProfile
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFargateProfileRequest::DeleteFargateProfileRequest(const DeleteFargateProfileRequest &other)
    : EksRequest(new DeleteFargateProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFargateProfileRequest object.
 */
DeleteFargateProfileRequest::DeleteFargateProfileRequest()
    : EksRequest(new DeleteFargateProfileRequestPrivate(EksRequest::DeleteFargateProfileAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFargateProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFargateProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFargateProfileRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFargateProfileResponse(*this, reply);
}

/*!
 * \class QtAws::Eks::DeleteFargateProfileRequestPrivate
 * \brief The DeleteFargateProfileRequestPrivate class provides private implementation for DeleteFargateProfileRequest.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a DeleteFargateProfileRequestPrivate object for Eks \a action,
 * with public implementation \a q.
 */
DeleteFargateProfileRequestPrivate::DeleteFargateProfileRequestPrivate(
    const EksRequest::Action action, DeleteFargateProfileRequest * const q)
    : EksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFargateProfileRequest
 * class' copy constructor.
 */
DeleteFargateProfileRequestPrivate::DeleteFargateProfileRequestPrivate(
    const DeleteFargateProfileRequestPrivate &other, DeleteFargateProfileRequest * const q)
    : EksRequestPrivate(other, q)
{

}

} // namespace Eks
} // namespace QtAws
