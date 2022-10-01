// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeaddonrequest.h"
#include "describeaddonrequest_p.h"
#include "describeaddonresponse.h"
#include "eksrequest_p.h"

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::DescribeAddonRequest
 * \brief The DescribeAddonRequest class provides an interface for Eks DescribeAddon requests.
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
 * \sa EksClient::describeAddon
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAddonRequest::DescribeAddonRequest(const DescribeAddonRequest &other)
    : EksRequest(new DescribeAddonRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAddonRequest object.
 */
DescribeAddonRequest::DescribeAddonRequest()
    : EksRequest(new DescribeAddonRequestPrivate(EksRequest::DescribeAddonAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAddonRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAddonResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAddonRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAddonResponse(*this, reply);
}

/*!
 * \class QtAws::Eks::DescribeAddonRequestPrivate
 * \brief The DescribeAddonRequestPrivate class provides private implementation for DescribeAddonRequest.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a DescribeAddonRequestPrivate object for Eks \a action,
 * with public implementation \a q.
 */
DescribeAddonRequestPrivate::DescribeAddonRequestPrivate(
    const EksRequest::Action action, DescribeAddonRequest * const q)
    : EksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAddonRequest
 * class' copy constructor.
 */
DescribeAddonRequestPrivate::DescribeAddonRequestPrivate(
    const DescribeAddonRequestPrivate &other, DescribeAddonRequest * const q)
    : EksRequestPrivate(other, q)
{

}

} // namespace Eks
} // namespace QtAws
