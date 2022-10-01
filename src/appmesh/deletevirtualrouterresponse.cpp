// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
