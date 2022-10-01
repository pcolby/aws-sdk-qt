// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listaddonsrequest.h"
#include "listaddonsrequest_p.h"
#include "listaddonsresponse.h"
#include "eksrequest_p.h"

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::ListAddonsRequest
 * \brief The ListAddonsRequest class provides an interface for Eks ListAddons requests.
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
 * \sa EksClient::listAddons
 */

/*!
 * Constructs a copy of \a other.
 */
ListAddonsRequest::ListAddonsRequest(const ListAddonsRequest &other)
    : EksRequest(new ListAddonsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAddonsRequest object.
 */
ListAddonsRequest::ListAddonsRequest()
    : EksRequest(new ListAddonsRequestPrivate(EksRequest::ListAddonsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAddonsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAddonsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAddonsRequest::response(QNetworkReply * const reply) const
{
    return new ListAddonsResponse(*this, reply);
}

/*!
 * \class QtAws::Eks::ListAddonsRequestPrivate
 * \brief The ListAddonsRequestPrivate class provides private implementation for ListAddonsRequest.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a ListAddonsRequestPrivate object for Eks \a action,
 * with public implementation \a q.
 */
ListAddonsRequestPrivate::ListAddonsRequestPrivate(
    const EksRequest::Action action, ListAddonsRequest * const q)
    : EksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAddonsRequest
 * class' copy constructor.
 */
ListAddonsRequestPrivate::ListAddonsRequestPrivate(
    const ListAddonsRequestPrivate &other, ListAddonsRequest * const q)
    : EksRequestPrivate(other, q)
{

}

} // namespace Eks
} // namespace QtAws
