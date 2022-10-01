// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createvirtualrouterrequest.h"
#include "createvirtualrouterrequest_p.h"
#include "createvirtualrouterresponse.h"
#include "appmeshrequest_p.h"

namespace QtAws {
namespace AppMesh {

/*!
 * \class QtAws::AppMesh::CreateVirtualRouterRequest
 * \brief The CreateVirtualRouterRequest class provides an interface for AppMesh CreateVirtualRouter requests.
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
 * \sa AppMeshClient::createVirtualRouter
 */

/*!
 * Constructs a copy of \a other.
 */
CreateVirtualRouterRequest::CreateVirtualRouterRequest(const CreateVirtualRouterRequest &other)
    : AppMeshRequest(new CreateVirtualRouterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateVirtualRouterRequest object.
 */
CreateVirtualRouterRequest::CreateVirtualRouterRequest()
    : AppMeshRequest(new CreateVirtualRouterRequestPrivate(AppMeshRequest::CreateVirtualRouterAction, this))
{

}

/*!
 * \reimp
 */
bool CreateVirtualRouterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateVirtualRouterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateVirtualRouterRequest::response(QNetworkReply * const reply) const
{
    return new CreateVirtualRouterResponse(*this, reply);
}

/*!
 * \class QtAws::AppMesh::CreateVirtualRouterRequestPrivate
 * \brief The CreateVirtualRouterRequestPrivate class provides private implementation for CreateVirtualRouterRequest.
 * \internal
 *
 * \inmodule QtAwsAppMesh
 */

/*!
 * Constructs a CreateVirtualRouterRequestPrivate object for AppMesh \a action,
 * with public implementation \a q.
 */
CreateVirtualRouterRequestPrivate::CreateVirtualRouterRequestPrivate(
    const AppMeshRequest::Action action, CreateVirtualRouterRequest * const q)
    : AppMeshRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateVirtualRouterRequest
 * class' copy constructor.
 */
CreateVirtualRouterRequestPrivate::CreateVirtualRouterRequestPrivate(
    const CreateVirtualRouterRequestPrivate &other, CreateVirtualRouterRequest * const q)
    : AppMeshRequestPrivate(other, q)
{

}

} // namespace AppMesh
} // namespace QtAws
