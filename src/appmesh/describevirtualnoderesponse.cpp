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

#include "describevirtualnoderesponse.h"
#include "describevirtualnoderesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppMesh {

/*!
 * \class QtAws::AppMesh::DescribeVirtualNodeResponse
 * \brief The DescribeVirtualNodeResponse class provides an interace for AppMesh DescribeVirtualNode responses.
 *
 * \inmodule QtAwsAppMesh
 *
 *  AWS App Mesh is a service mesh based on the Envoy proxy that makes it easy to monitor and control microservices. App
 *  Mesh standardizes how your microservices communicate, giving you end-to-end visibility and helping to ensure high
 *  availability for your
 * 
 *  applications>
 * 
 *  App Mesh gives you consistent visibility and network traffic controls for every microservice in an application. You can
 *  use App Mesh with AWS Fargate, Amazon ECS, Amazon EKS, Kubernetes on AWS, and Amazon
 * 
 *  EC2> <note>
 * 
 *  App Mesh supports microservice applications that use service discovery naming for their components. For more information
 *  about service discovery on Amazon ECS, see <a
 *  href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-discovery.html">Service Discovery</a> in the
 *  <i>Amazon Elastic Container Service Developer Guide</i>. Kubernetes <code>kube-dns</code> and <code>coredns</code> are
 *  supported. For more information, see <a
 *  href="https://kubernetes.io/docs/concepts/services-networking/dns-pod-service/">DNS for Services and Pods</a> in the
 *  Kubernetes
 *
 * \sa AppMeshClient::describeVirtualNode
 */

/*!
 * Constructs a DescribeVirtualNodeResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeVirtualNodeResponse::DescribeVirtualNodeResponse(
        const DescribeVirtualNodeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppMeshResponse(new DescribeVirtualNodeResponsePrivate(this), parent)
{
    setRequest(new DescribeVirtualNodeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeVirtualNodeRequest * DescribeVirtualNodeResponse::request() const
{
    Q_D(const DescribeVirtualNodeResponse);
    return static_cast<const DescribeVirtualNodeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppMesh DescribeVirtualNode \a response.
 */
void DescribeVirtualNodeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeVirtualNodeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppMesh::DescribeVirtualNodeResponsePrivate
 * \brief The DescribeVirtualNodeResponsePrivate class provides private implementation for DescribeVirtualNodeResponse.
 * \internal
 *
 * \inmodule QtAwsAppMesh
 */

/*!
 * Constructs a DescribeVirtualNodeResponsePrivate object with public implementation \a q.
 */
DescribeVirtualNodeResponsePrivate::DescribeVirtualNodeResponsePrivate(
    DescribeVirtualNodeResponse * const q) : AppMeshResponsePrivate(q)
{

}

/*!
 * Parses a AppMesh DescribeVirtualNode response element from \a xml.
 */
void DescribeVirtualNodeResponsePrivate::parseDescribeVirtualNodeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVirtualNodeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppMesh
} // namespace QtAws
