// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describegatewayrouteresponse.h"
#include "describegatewayrouteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppMesh {

/*!
 * \class QtAws::AppMesh::DescribeGatewayRouteResponse
 * \brief The DescribeGatewayRouteResponse class provides an interace for AppMesh DescribeGatewayRoute responses.
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
 * \sa AppMeshClient::describeGatewayRoute
 */

/*!
 * Constructs a DescribeGatewayRouteResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeGatewayRouteResponse::DescribeGatewayRouteResponse(
        const DescribeGatewayRouteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppMeshResponse(new DescribeGatewayRouteResponsePrivate(this), parent)
{
    setRequest(new DescribeGatewayRouteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeGatewayRouteRequest * DescribeGatewayRouteResponse::request() const
{
    Q_D(const DescribeGatewayRouteResponse);
    return static_cast<const DescribeGatewayRouteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppMesh DescribeGatewayRoute \a response.
 */
void DescribeGatewayRouteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeGatewayRouteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppMesh::DescribeGatewayRouteResponsePrivate
 * \brief The DescribeGatewayRouteResponsePrivate class provides private implementation for DescribeGatewayRouteResponse.
 * \internal
 *
 * \inmodule QtAwsAppMesh
 */

/*!
 * Constructs a DescribeGatewayRouteResponsePrivate object with public implementation \a q.
 */
DescribeGatewayRouteResponsePrivate::DescribeGatewayRouteResponsePrivate(
    DescribeGatewayRouteResponse * const q) : AppMeshResponsePrivate(q)
{

}

/*!
 * Parses a AppMesh DescribeGatewayRoute response element from \a xml.
 */
void DescribeGatewayRouteResponsePrivate::parseDescribeGatewayRouteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeGatewayRouteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppMesh
} // namespace QtAws
