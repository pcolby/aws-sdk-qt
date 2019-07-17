/*
    Copyright 2013-2019 Paul Colby

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

#include "deletevirtualrouterresponse.h"
#include "deletevirtualrouterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppMesh {

/*!
 * \class QtAws::AppMesh::DeleteVirtualRouterResponse
 * \brief The DeleteVirtualRouterResponse class provides an interace for AppMesh DeleteVirtualRouter responses.
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
 * \sa AppMeshClient::deleteVirtualRouter
 */

/*!
 * Constructs a DeleteVirtualRouterResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteVirtualRouterResponse::DeleteVirtualRouterResponse(
        const DeleteVirtualRouterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppMeshResponse(new DeleteVirtualRouterResponsePrivate(this), parent)
{
    setRequest(new DeleteVirtualRouterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteVirtualRouterRequest * DeleteVirtualRouterResponse::request() const
{
    Q_D(const DeleteVirtualRouterResponse);
    return static_cast<const DeleteVirtualRouterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppMesh DeleteVirtualRouter \a response.
 */
void DeleteVirtualRouterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteVirtualRouterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppMesh::DeleteVirtualRouterResponsePrivate
 * \brief The DeleteVirtualRouterResponsePrivate class provides private implementation for DeleteVirtualRouterResponse.
 * \internal
 *
 * \inmodule QtAwsAppMesh
 */

/*!
 * Constructs a DeleteVirtualRouterResponsePrivate object with public implementation \a q.
 */
DeleteVirtualRouterResponsePrivate::DeleteVirtualRouterResponsePrivate(
    DeleteVirtualRouterResponse * const q) : AppMeshResponsePrivate(q)
{

}

/*!
 * Parses a AppMesh DeleteVirtualRouter response element from \a xml.
 */
void DeleteVirtualRouterResponsePrivate::parseDeleteVirtualRouterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVirtualRouterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppMesh
} // namespace QtAws
