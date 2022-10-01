// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgatewayroutesrequest.h"
#include "listgatewayroutesrequest_p.h"
#include "listgatewayroutesresponse.h"
#include "appmeshrequest_p.h"

namespace QtAws {
namespace AppMesh {

/*!
 * \class QtAws::AppMesh::ListGatewayRoutesRequest
 * \brief The ListGatewayRoutesRequest class provides an interface for AppMesh ListGatewayRoutes requests.
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
 * \sa AppMeshClient::listGatewayRoutes
 */

/*!
 * Constructs a copy of \a other.
 */
ListGatewayRoutesRequest::ListGatewayRoutesRequest(const ListGatewayRoutesRequest &other)
    : AppMeshRequest(new ListGatewayRoutesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListGatewayRoutesRequest object.
 */
ListGatewayRoutesRequest::ListGatewayRoutesRequest()
    : AppMeshRequest(new ListGatewayRoutesRequestPrivate(AppMeshRequest::ListGatewayRoutesAction, this))
{

}

/*!
 * \reimp
 */
bool ListGatewayRoutesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListGatewayRoutesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGatewayRoutesRequest::response(QNetworkReply * const reply) const
{
    return new ListGatewayRoutesResponse(*this, reply);
}

/*!
 * \class QtAws::AppMesh::ListGatewayRoutesRequestPrivate
 * \brief The ListGatewayRoutesRequestPrivate class provides private implementation for ListGatewayRoutesRequest.
 * \internal
 *
 * \inmodule QtAwsAppMesh
 */

/*!
 * Constructs a ListGatewayRoutesRequestPrivate object for AppMesh \a action,
 * with public implementation \a q.
 */
ListGatewayRoutesRequestPrivate::ListGatewayRoutesRequestPrivate(
    const AppMeshRequest::Action action, ListGatewayRoutesRequest * const q)
    : AppMeshRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListGatewayRoutesRequest
 * class' copy constructor.
 */
ListGatewayRoutesRequestPrivate::ListGatewayRoutesRequestPrivate(
    const ListGatewayRoutesRequestPrivate &other, ListGatewayRoutesRequest * const q)
    : AppMeshRequestPrivate(other, q)
{

}

} // namespace AppMesh
} // namespace QtAws
