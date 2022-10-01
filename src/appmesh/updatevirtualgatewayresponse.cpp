// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatevirtualgatewayresponse.h"
#include "updatevirtualgatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppMesh {

/*!
 * \class QtAws::AppMesh::UpdateVirtualGatewayResponse
 * \brief The UpdateVirtualGatewayResponse class provides an interace for AppMesh UpdateVirtualGateway responses.
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
 * \sa AppMeshClient::updateVirtualGateway
 */

/*!
 * Constructs a UpdateVirtualGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateVirtualGatewayResponse::UpdateVirtualGatewayResponse(
        const UpdateVirtualGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppMeshResponse(new UpdateVirtualGatewayResponsePrivate(this), parent)
{
    setRequest(new UpdateVirtualGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateVirtualGatewayRequest * UpdateVirtualGatewayResponse::request() const
{
    Q_D(const UpdateVirtualGatewayResponse);
    return static_cast<const UpdateVirtualGatewayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppMesh UpdateVirtualGateway \a response.
 */
void UpdateVirtualGatewayResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateVirtualGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppMesh::UpdateVirtualGatewayResponsePrivate
 * \brief The UpdateVirtualGatewayResponsePrivate class provides private implementation for UpdateVirtualGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsAppMesh
 */

/*!
 * Constructs a UpdateVirtualGatewayResponsePrivate object with public implementation \a q.
 */
UpdateVirtualGatewayResponsePrivate::UpdateVirtualGatewayResponsePrivate(
    UpdateVirtualGatewayResponse * const q) : AppMeshResponsePrivate(q)
{

}

/*!
 * Parses a AppMesh UpdateVirtualGateway response element from \a xml.
 */
void UpdateVirtualGatewayResponsePrivate::parseUpdateVirtualGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateVirtualGatewayResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppMesh
} // namespace QtAws
