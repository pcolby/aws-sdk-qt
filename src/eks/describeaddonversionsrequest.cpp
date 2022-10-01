/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeaddonversionsrequest.h"
#include "describeaddonversionsrequest_p.h"
#include "describeaddonversionsresponse.h"
#include "eksrequest_p.h"

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::DescribeAddonVersionsRequest
 * \brief The DescribeAddonVersionsRequest class provides an interface for Eks DescribeAddonVersions requests.
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
 * \sa EksClient::describeAddonVersions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAddonVersionsRequest::DescribeAddonVersionsRequest(const DescribeAddonVersionsRequest &other)
    : EksRequest(new DescribeAddonVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAddonVersionsRequest object.
 */
DescribeAddonVersionsRequest::DescribeAddonVersionsRequest()
    : EksRequest(new DescribeAddonVersionsRequestPrivate(EksRequest::DescribeAddonVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAddonVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAddonVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAddonVersionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAddonVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Eks::DescribeAddonVersionsRequestPrivate
 * \brief The DescribeAddonVersionsRequestPrivate class provides private implementation for DescribeAddonVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a DescribeAddonVersionsRequestPrivate object for Eks \a action,
 * with public implementation \a q.
 */
DescribeAddonVersionsRequestPrivate::DescribeAddonVersionsRequestPrivate(
    const EksRequest::Action action, DescribeAddonVersionsRequest * const q)
    : EksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAddonVersionsRequest
 * class' copy constructor.
 */
DescribeAddonVersionsRequestPrivate::DescribeAddonVersionsRequestPrivate(
    const DescribeAddonVersionsRequestPrivate &other, DescribeAddonVersionsRequest * const q)
    : EksRequestPrivate(other, q)
{

}

} // namespace Eks
} // namespace QtAws
