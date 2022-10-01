// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createvirtualservicerequest.h"
#include "createvirtualservicerequest_p.h"
#include "createvirtualserviceresponse.h"
#include "appmeshrequest_p.h"

namespace QtAws {
namespace AppMesh {

/*!
 * \class QtAws::AppMesh::CreateVirtualServiceRequest
 * \brief The CreateVirtualServiceRequest class provides an interface for AppMesh CreateVirtualService requests.
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
 * \sa AppMeshClient::createVirtualService
 */

/*!
 * Constructs a copy of \a other.
 */
CreateVirtualServiceRequest::CreateVirtualServiceRequest(const CreateVirtualServiceRequest &other)
    : AppMeshRequest(new CreateVirtualServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateVirtualServiceRequest object.
 */
CreateVirtualServiceRequest::CreateVirtualServiceRequest()
    : AppMeshRequest(new CreateVirtualServiceRequestPrivate(AppMeshRequest::CreateVirtualServiceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateVirtualServiceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateVirtualServiceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateVirtualServiceRequest::response(QNetworkReply * const reply) const
{
    return new CreateVirtualServiceResponse(*this, reply);
}

/*!
 * \class QtAws::AppMesh::CreateVirtualServiceRequestPrivate
 * \brief The CreateVirtualServiceRequestPrivate class provides private implementation for CreateVirtualServiceRequest.
 * \internal
 *
 * \inmodule QtAwsAppMesh
 */

/*!
 * Constructs a CreateVirtualServiceRequestPrivate object for AppMesh \a action,
 * with public implementation \a q.
 */
CreateVirtualServiceRequestPrivate::CreateVirtualServiceRequestPrivate(
    const AppMeshRequest::Action action, CreateVirtualServiceRequest * const q)
    : AppMeshRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateVirtualServiceRequest
 * class' copy constructor.
 */
CreateVirtualServiceRequestPrivate::CreateVirtualServiceRequestPrivate(
    const CreateVirtualServiceRequestPrivate &other, CreateVirtualServiceRequest * const q)
    : AppMeshRequestPrivate(other, q)
{

}

} // namespace AppMesh
} // namespace QtAws
