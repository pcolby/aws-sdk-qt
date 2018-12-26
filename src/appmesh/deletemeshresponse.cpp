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

#include "deletemeshresponse.h"
#include "deletemeshresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppMesh {

/*!
 * \class QtAws::AppMesh::DeleteMeshResponse
 * \brief The DeleteMeshResponse class provides an interace for AppMesh DeleteMesh responses.
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
 * \sa AppMeshClient::deleteMesh
 */

/*!
 * Constructs a DeleteMeshResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteMeshResponse::DeleteMeshResponse(
        const DeleteMeshRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppMeshResponse(new DeleteMeshResponsePrivate(this), parent)
{
    setRequest(new DeleteMeshRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteMeshRequest * DeleteMeshResponse::request() const
{
    Q_D(const DeleteMeshResponse);
    return static_cast<const DeleteMeshRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppMesh DeleteMesh \a response.
 */
void DeleteMeshResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMeshResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppMesh::DeleteMeshResponsePrivate
 * \brief The DeleteMeshResponsePrivate class provides private implementation for DeleteMeshResponse.
 * \internal
 *
 * \inmodule QtAwsAppMesh
 */

/*!
 * Constructs a DeleteMeshResponsePrivate object with public implementation \a q.
 */
DeleteMeshResponsePrivate::DeleteMeshResponsePrivate(
    DeleteMeshResponse * const q) : AppMeshResponsePrivate(q)
{

}

/*!
 * Parses a AppMesh DeleteMesh response element from \a xml.
 */
void DeleteMeshResponsePrivate::parseDeleteMeshResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMeshResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppMesh
} // namespace QtAws
