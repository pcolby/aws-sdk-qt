// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listvirtualnodesrequest.h"
#include "listvirtualnodesrequest_p.h"
#include "listvirtualnodesresponse.h"
#include "appmeshrequest_p.h"

namespace QtAws {
namespace AppMesh {

/*!
 * \class QtAws::AppMesh::ListVirtualNodesRequest
 * \brief The ListVirtualNodesRequest class provides an interface for AppMesh ListVirtualNodes requests.
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
 * \sa AppMeshClient::listVirtualNodes
 */

/*!
 * Constructs a copy of \a other.
 */
ListVirtualNodesRequest::ListVirtualNodesRequest(const ListVirtualNodesRequest &other)
    : AppMeshRequest(new ListVirtualNodesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListVirtualNodesRequest object.
 */
ListVirtualNodesRequest::ListVirtualNodesRequest()
    : AppMeshRequest(new ListVirtualNodesRequestPrivate(AppMeshRequest::ListVirtualNodesAction, this))
{

}

/*!
 * \reimp
 */
bool ListVirtualNodesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListVirtualNodesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListVirtualNodesRequest::response(QNetworkReply * const reply) const
{
    return new ListVirtualNodesResponse(*this, reply);
}

/*!
 * \class QtAws::AppMesh::ListVirtualNodesRequestPrivate
 * \brief The ListVirtualNodesRequestPrivate class provides private implementation for ListVirtualNodesRequest.
 * \internal
 *
 * \inmodule QtAwsAppMesh
 */

/*!
 * Constructs a ListVirtualNodesRequestPrivate object for AppMesh \a action,
 * with public implementation \a q.
 */
ListVirtualNodesRequestPrivate::ListVirtualNodesRequestPrivate(
    const AppMeshRequest::Action action, ListVirtualNodesRequest * const q)
    : AppMeshRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListVirtualNodesRequest
 * class' copy constructor.
 */
ListVirtualNodesRequestPrivate::ListVirtualNodesRequestPrivate(
    const ListVirtualNodesRequestPrivate &other, ListVirtualNodesRequest * const q)
    : AppMeshRequestPrivate(other, q)
{

}

} // namespace AppMesh
} // namespace QtAws
