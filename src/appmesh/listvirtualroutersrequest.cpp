/*
    Copyright 2013-2018 Paul Colby

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

#include "listvirtualroutersrequest.h"
#include "listvirtualroutersrequest_p.h"
#include "listvirtualroutersresponse.h"
#include "appmeshrequest_p.h"

namespace QtAws {
namespace AppMesh {

/*!
 * \class QtAws::AppMesh::ListVirtualRoutersRequest
 * \brief The ListVirtualRoutersRequest class provides an interface for AppMesh ListVirtualRouters requests.
 *
 * \inmodule QtAwsAppMesh
 *
 *  AWS App Mesh is a service mesh based on the Envoy proxy that makes it easy to monitor and control containerized
 *  microservices. App Mesh standardizes how your microservices communicate, giving you end-to-end visibility and helping to
 *  ensure high-availability for your
 * 
 *  applications>
 * 
 *  App Mesh gives you consistent visibility and network traffic controls for every microservice in an application. You can
 *  use App Mesh with Amazon ECS (using the Amazon EC2 launch type), Amazon EKS, and Kubernetes on
 * 
 *  AWS> <note>
 * 
 *  App Mesh supports containerized microservice applications that use service discovery naming for their components. To use
 *  App Mesh, you must have a containerized application running on Amazon EC2 instances, hosted in either Amazon ECS, Amazon
 *  EKS, or Kubernetes on AWS. For more information about service discovery on Amazon ECS, see <a
 *  href="http://docs.aws.amazon.com/AmazonECS/latest/developerguideservice-discovery.html">Service Discovery</a> in the
 *  <i>Amazon Elastic Container Service Developer Guide</i>. Kubernetes <code>kube-dns</code> is supported. For more
 *  information, see <a href="https://kubernetes.io/docs/concepts/services-networking/dns-pod-service/">DNS for Services and
 *  Pods</a> in the Kubernetes
 *
 * \sa AppMeshClient::listVirtualRouters
 */

/*!
 * Constructs a copy of \a other.
 */
ListVirtualRoutersRequest::ListVirtualRoutersRequest(const ListVirtualRoutersRequest &other)
    : AppMeshRequest(new ListVirtualRoutersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListVirtualRoutersRequest object.
 */
ListVirtualRoutersRequest::ListVirtualRoutersRequest()
    : AppMeshRequest(new ListVirtualRoutersRequestPrivate(AppMeshRequest::ListVirtualRoutersAction, this))
{

}

/*!
 * \reimp
 */
bool ListVirtualRoutersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListVirtualRoutersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListVirtualRoutersRequest::response(QNetworkReply * const reply) const
{
    return new ListVirtualRoutersResponse(*this, reply);
}

/*!
 * \class QtAws::AppMesh::ListVirtualRoutersRequestPrivate
 * \brief The ListVirtualRoutersRequestPrivate class provides private implementation for ListVirtualRoutersRequest.
 * \internal
 *
 * \inmodule QtAwsAppMesh
 */

/*!
 * Constructs a ListVirtualRoutersRequestPrivate object for AppMesh \a action,
 * with public implementation \a q.
 */
ListVirtualRoutersRequestPrivate::ListVirtualRoutersRequestPrivate(
    const AppMeshRequest::Action action, ListVirtualRoutersRequest * const q)
    : AppMeshRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListVirtualRoutersRequest
 * class' copy constructor.
 */
ListVirtualRoutersRequestPrivate::ListVirtualRoutersRequestPrivate(
    const ListVirtualRoutersRequestPrivate &other, ListVirtualRoutersRequest * const q)
    : AppMeshRequestPrivate(other, q)
{

}

} // namespace AppMesh
} // namespace QtAws
