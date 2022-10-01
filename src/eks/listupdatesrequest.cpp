// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listupdatesrequest.h"
#include "listupdatesrequest_p.h"
#include "listupdatesresponse.h"
#include "eksrequest_p.h"

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::ListUpdatesRequest
 * \brief The ListUpdatesRequest class provides an interface for Eks ListUpdates requests.
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
 * \sa EksClient::listUpdates
 */

/*!
 * Constructs a copy of \a other.
 */
ListUpdatesRequest::ListUpdatesRequest(const ListUpdatesRequest &other)
    : EksRequest(new ListUpdatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListUpdatesRequest object.
 */
ListUpdatesRequest::ListUpdatesRequest()
    : EksRequest(new ListUpdatesRequestPrivate(EksRequest::ListUpdatesAction, this))
{

}

/*!
 * \reimp
 */
bool ListUpdatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListUpdatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListUpdatesRequest::response(QNetworkReply * const reply) const
{
    return new ListUpdatesResponse(*this, reply);
}

/*!
 * \class QtAws::Eks::ListUpdatesRequestPrivate
 * \brief The ListUpdatesRequestPrivate class provides private implementation for ListUpdatesRequest.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a ListUpdatesRequestPrivate object for Eks \a action,
 * with public implementation \a q.
 */
ListUpdatesRequestPrivate::ListUpdatesRequestPrivate(
    const EksRequest::Action action, ListUpdatesRequest * const q)
    : EksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListUpdatesRequest
 * class' copy constructor.
 */
ListUpdatesRequestPrivate::ListUpdatesRequestPrivate(
    const ListUpdatesRequestPrivate &other, ListUpdatesRequest * const q)
    : EksRequestPrivate(other, q)
{

}

} // namespace Eks
} // namespace QtAws
