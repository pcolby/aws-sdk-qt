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

#include "updatevirtualservicerequest.h"
#include "updatevirtualservicerequest_p.h"
#include "updatevirtualserviceresponse.h"
#include "appmeshrequest_p.h"

namespace QtAws {
namespace AppMesh {

/*!
 * \class QtAws::AppMesh::UpdateVirtualServiceRequest
 * \brief The UpdateVirtualServiceRequest class provides an interface for AppMesh UpdateVirtualService requests.
 *
 * \inmodule QtAwsAppMesh
 *
 *  App Mesh is a service mesh based on the Envoy proxy that makes it easy to monitor and control microservices. App Mesh
 *  standardizes how your microservices communicate, giving you end-to-end visibility and helping to ensure high
 *  availability for your
 * 
 *  applications>
 * 
 *  App Mesh gives you consistent visibility and network traffic controls for every microservice in an application. You can
 *  use App Mesh with Amazon Web Services Fargate, Amazon ECS, Amazon EKS, Kubernetes on Amazon Web Services, and Amazon
 * 
 *  EC2> <note>
 * 
 *  App Mesh supports microservice applications that use service discovery naming for their components. For more information
 *  about service discovery on Amazon ECS, see <a
 *  href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-discovery.html">Service Discovery</a> in the
 *  <i>Amazon Elastic Container Service Developer Guide</i>. Kubernetes <code>kube-dns</code> and <code>coredns</code> are
 *  supported. For more information, see <a
 *  href="https://kubernetes.io/docs/concepts/services-networking/dns-pod-service/">DNS for Services and Pods</a> in the
 *  Kubernetes
 *
 * \sa AppMeshClient::updateVirtualService
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateVirtualServiceRequest::UpdateVirtualServiceRequest(const UpdateVirtualServiceRequest &other)
    : AppMeshRequest(new UpdateVirtualServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateVirtualServiceRequest object.
 */
UpdateVirtualServiceRequest::UpdateVirtualServiceRequest()
    : AppMeshRequest(new UpdateVirtualServiceRequestPrivate(AppMeshRequest::UpdateVirtualServiceAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateVirtualServiceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateVirtualServiceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateVirtualServiceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateVirtualServiceResponse(*this, reply);
}

/*!
 * \class QtAws::AppMesh::UpdateVirtualServiceRequestPrivate
 * \brief The UpdateVirtualServiceRequestPrivate class provides private implementation for UpdateVirtualServiceRequest.
 * \internal
 *
 * \inmodule QtAwsAppMesh
 */

/*!
 * Constructs a UpdateVirtualServiceRequestPrivate object for AppMesh \a action,
 * with public implementation \a q.
 */
UpdateVirtualServiceRequestPrivate::UpdateVirtualServiceRequestPrivate(
    const AppMeshRequest::Action action, UpdateVirtualServiceRequest * const q)
    : AppMeshRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateVirtualServiceRequest
 * class' copy constructor.
 */
UpdateVirtualServiceRequestPrivate::UpdateVirtualServiceRequestPrivate(
    const UpdateVirtualServiceRequestPrivate &other, UpdateVirtualServiceRequest * const q)
    : AppMeshRequestPrivate(other, q)
{

}

} // namespace AppMesh
} // namespace QtAws
