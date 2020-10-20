/*
    Copyright 2013-2020 Paul Colby

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

#include "listroutesrequest.h"
#include "listroutesrequest_p.h"
#include "listroutesresponse.h"
#include "appmeshrequest_p.h"

namespace QtAws {
namespace AppMesh {

/*!
 * \class QtAws::AppMesh::ListRoutesRequest
 * \brief The ListRoutesRequest class provides an interface for AppMesh ListRoutes requests.
 *
 * \inmodule QtAwsAppMesh
 *
 *  AWS App Mesh is a service mesh based on the Envoy proxy that makes it easy to monitor and control microservices. App
 *  Mesh standardizes how your microservices communicate, giving you end-to-end visibility and helping to ensure high
 *  availability for your
 * 
 *  applications>
 * 
 *  App Mesh gives you consistent visibility and network traffic controls for every microservice in an application. You can
 *  use App Mesh with AWS Fargate, Amazon ECS, Amazon EKS, Kubernetes on AWS, and Amazon
 * 
 *  EC2> <note>
 * 
 *  App Mesh supports microservice applications that use service discovery naming for their components. For more information
 *  about service discovery on Amazon ECS, see <a
 *  href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-discovery.html">Service Discovery</a> in the
 *  <i>Amazon Elastic Container Service Developer Guide</i>. Kubernetes <code>kube-dns</code> and <code>coredns</code> are
 *  supported. For more information, see <a
 *  href="https://kubernetes.io/docs/concepts/services-networking/dns-pod-service/">DNS for Services and Pods</a> in the
 *  Kubernetes
 *
 * \sa AppMeshClient::listRoutes
 */

/*!
 * Constructs a copy of \a other.
 */
ListRoutesRequest::ListRoutesRequest(const ListRoutesRequest &other)
    : AppMeshRequest(new ListRoutesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRoutesRequest object.
 */
ListRoutesRequest::ListRoutesRequest()
    : AppMeshRequest(new ListRoutesRequestPrivate(AppMeshRequest::ListRoutesAction, this))
{

}

/*!
 * \reimp
 */
bool ListRoutesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRoutesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRoutesRequest::response(QNetworkReply * const reply) const
{
    return new ListRoutesResponse(*this, reply);
}

/*!
 * \class QtAws::AppMesh::ListRoutesRequestPrivate
 * \brief The ListRoutesRequestPrivate class provides private implementation for ListRoutesRequest.
 * \internal
 *
 * \inmodule QtAwsAppMesh
 */

/*!
 * Constructs a ListRoutesRequestPrivate object for AppMesh \a action,
 * with public implementation \a q.
 */
ListRoutesRequestPrivate::ListRoutesRequestPrivate(
    const AppMeshRequest::Action action, ListRoutesRequest * const q)
    : AppMeshRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRoutesRequest
 * class' copy constructor.
 */
ListRoutesRequestPrivate::ListRoutesRequestPrivate(
    const ListRoutesRequestPrivate &other, ListRoutesRequest * const q)
    : AppMeshRequestPrivate(other, q)
{

}

} // namespace AppMesh
} // namespace QtAws
