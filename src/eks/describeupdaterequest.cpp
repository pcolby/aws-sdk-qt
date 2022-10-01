// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeupdaterequest.h"
#include "describeupdaterequest_p.h"
#include "describeupdateresponse.h"
#include "eksrequest_p.h"

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::DescribeUpdateRequest
 * \brief The DescribeUpdateRequest class provides an interface for Eks DescribeUpdate requests.
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
 * \sa EksClient::describeUpdate
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeUpdateRequest::DescribeUpdateRequest(const DescribeUpdateRequest &other)
    : EksRequest(new DescribeUpdateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeUpdateRequest object.
 */
DescribeUpdateRequest::DescribeUpdateRequest()
    : EksRequest(new DescribeUpdateRequestPrivate(EksRequest::DescribeUpdateAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeUpdateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeUpdateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeUpdateRequest::response(QNetworkReply * const reply) const
{
    return new DescribeUpdateResponse(*this, reply);
}

/*!
 * \class QtAws::Eks::DescribeUpdateRequestPrivate
 * \brief The DescribeUpdateRequestPrivate class provides private implementation for DescribeUpdateRequest.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a DescribeUpdateRequestPrivate object for Eks \a action,
 * with public implementation \a q.
 */
DescribeUpdateRequestPrivate::DescribeUpdateRequestPrivate(
    const EksRequest::Action action, DescribeUpdateRequest * const q)
    : EksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeUpdateRequest
 * class' copy constructor.
 */
DescribeUpdateRequestPrivate::DescribeUpdateRequestPrivate(
    const DescribeUpdateRequestPrivate &other, DescribeUpdateRequest * const q)
    : EksRequestPrivate(other, q)
{

}

} // namespace Eks
} // namespace QtAws
