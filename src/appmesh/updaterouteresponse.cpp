// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updaterouteresponse.h"
#include "updaterouteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppMesh {

/*!
 * \class QtAws::AppMesh::UpdateRouteResponse
 * \brief The UpdateRouteResponse class provides an interace for AppMesh UpdateRoute responses.
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
 * \sa AppMeshClient::updateRoute
 */

/*!
 * Constructs a UpdateRouteResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRouteResponse::UpdateRouteResponse(
        const UpdateRouteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppMeshResponse(new UpdateRouteResponsePrivate(this), parent)
{
    setRequest(new UpdateRouteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRouteRequest * UpdateRouteResponse::request() const
{
    Q_D(const UpdateRouteResponse);
    return static_cast<const UpdateRouteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppMesh UpdateRoute \a response.
 */
void UpdateRouteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRouteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppMesh::UpdateRouteResponsePrivate
 * \brief The UpdateRouteResponsePrivate class provides private implementation for UpdateRouteResponse.
 * \internal
 *
 * \inmodule QtAwsAppMesh
 */

/*!
 * Constructs a UpdateRouteResponsePrivate object with public implementation \a q.
 */
UpdateRouteResponsePrivate::UpdateRouteResponsePrivate(
    UpdateRouteResponse * const q) : AppMeshResponsePrivate(q)
{

}

/*!
 * Parses a AppMesh UpdateRoute response element from \a xml.
 */
void UpdateRouteResponsePrivate::parseUpdateRouteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRouteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppMesh
} // namespace QtAws
