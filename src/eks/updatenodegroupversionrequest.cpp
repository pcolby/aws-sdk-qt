// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatenodegroupversionrequest.h"
#include "updatenodegroupversionrequest_p.h"
#include "updatenodegroupversionresponse.h"
#include "eksrequest_p.h"

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::UpdateNodegroupVersionRequest
 * \brief The UpdateNodegroupVersionRequest class provides an interface for Eks UpdateNodegroupVersion requests.
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
 * \sa EksClient::updateNodegroupVersion
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateNodegroupVersionRequest::UpdateNodegroupVersionRequest(const UpdateNodegroupVersionRequest &other)
    : EksRequest(new UpdateNodegroupVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateNodegroupVersionRequest object.
 */
UpdateNodegroupVersionRequest::UpdateNodegroupVersionRequest()
    : EksRequest(new UpdateNodegroupVersionRequestPrivate(EksRequest::UpdateNodegroupVersionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateNodegroupVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateNodegroupVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateNodegroupVersionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateNodegroupVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Eks::UpdateNodegroupVersionRequestPrivate
 * \brief The UpdateNodegroupVersionRequestPrivate class provides private implementation for UpdateNodegroupVersionRequest.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a UpdateNodegroupVersionRequestPrivate object for Eks \a action,
 * with public implementation \a q.
 */
UpdateNodegroupVersionRequestPrivate::UpdateNodegroupVersionRequestPrivate(
    const EksRequest::Action action, UpdateNodegroupVersionRequest * const q)
    : EksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateNodegroupVersionRequest
 * class' copy constructor.
 */
UpdateNodegroupVersionRequestPrivate::UpdateNodegroupVersionRequestPrivate(
    const UpdateNodegroupVersionRequestPrivate &other, UpdateNodegroupVersionRequest * const q)
    : EksRequestPrivate(other, q)
{

}

} // namespace Eks
} // namespace QtAws
