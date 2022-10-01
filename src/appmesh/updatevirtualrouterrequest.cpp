// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatevirtualrouterrequest.h"
#include "updatevirtualrouterrequest_p.h"
#include "updatevirtualrouterresponse.h"
#include "appmeshrequest_p.h"

namespace QtAws {
namespace AppMesh {

/*!
 * \class QtAws::AppMesh::UpdateVirtualRouterRequest
 * \brief The UpdateVirtualRouterRequest class provides an interface for AppMesh UpdateVirtualRouter requests.
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
 * \sa AppMeshClient::updateVirtualRouter
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateVirtualRouterRequest::UpdateVirtualRouterRequest(const UpdateVirtualRouterRequest &other)
    : AppMeshRequest(new UpdateVirtualRouterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateVirtualRouterRequest object.
 */
UpdateVirtualRouterRequest::UpdateVirtualRouterRequest()
    : AppMeshRequest(new UpdateVirtualRouterRequestPrivate(AppMeshRequest::UpdateVirtualRouterAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateVirtualRouterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateVirtualRouterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateVirtualRouterRequest::response(QNetworkReply * const reply) const
{
    return new UpdateVirtualRouterResponse(*this, reply);
}

/*!
 * \class QtAws::AppMesh::UpdateVirtualRouterRequestPrivate
 * \brief The UpdateVirtualRouterRequestPrivate class provides private implementation for UpdateVirtualRouterRequest.
 * \internal
 *
 * \inmodule QtAwsAppMesh
 */

/*!
 * Constructs a UpdateVirtualRouterRequestPrivate object for AppMesh \a action,
 * with public implementation \a q.
 */
UpdateVirtualRouterRequestPrivate::UpdateVirtualRouterRequestPrivate(
    const AppMeshRequest::Action action, UpdateVirtualRouterRequest * const q)
    : AppMeshRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateVirtualRouterRequest
 * class' copy constructor.
 */
UpdateVirtualRouterRequestPrivate::UpdateVirtualRouterRequestPrivate(
    const UpdateVirtualRouterRequestPrivate &other, UpdateVirtualRouterRequest * const q)
    : AppMeshRequestPrivate(other, q)
{

}

} // namespace AppMesh
} // namespace QtAws
