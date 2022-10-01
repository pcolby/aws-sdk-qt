// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
