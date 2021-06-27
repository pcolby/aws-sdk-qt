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

#include "listgatewayroutesresponse.h"
#include "listgatewayroutesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppMesh {

/*!
 * \class QtAws::AppMesh::ListGatewayRoutesResponse
 * \brief The ListGatewayRoutesResponse class provides an interace for AppMesh ListGatewayRoutes responses.
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
 * Constructs a ListGatewayRoutesResponse object for \a reply to \a request, with parent \a parent.
 */
ListGatewayRoutesResponse::ListGatewayRoutesResponse(
        const ListGatewayRoutesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppMeshResponse(new ListGatewayRoutesResponsePrivate(this), parent)
{
    setRequest(new ListGatewayRoutesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListGatewayRoutesRequest * ListGatewayRoutesResponse::request() const
{
    return static_cast<const ListGatewayRoutesRequest *>(AppMeshResponse::request());
}

/*!
 * \reimp
 * Parses a successful AppMesh ListGatewayRoutes \a response.
 */
void ListGatewayRoutesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListGatewayRoutesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppMesh::ListGatewayRoutesResponsePrivate
 * \brief The ListGatewayRoutesResponsePrivate class provides private implementation for ListGatewayRoutesResponse.
 * \internal
 *
 * \inmodule QtAwsAppMesh
 */

/*!
 * Constructs a ListGatewayRoutesResponsePrivate object with public implementation \a q.
 */
ListGatewayRoutesResponsePrivate::ListGatewayRoutesResponsePrivate(
    ListGatewayRoutesResponse * const q) : AppMeshResponsePrivate(q)
{

}

/*!
 * Parses a AppMesh ListGatewayRoutes response element from \a xml.
 */
void ListGatewayRoutesResponsePrivate::parseListGatewayRoutesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGatewayRoutesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppMesh
} // namespace QtAws
