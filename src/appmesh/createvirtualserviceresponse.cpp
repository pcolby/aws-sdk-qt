// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createvirtualserviceresponse.h"
#include "createvirtualserviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppMesh {

/*!
 * \class QtAws::AppMesh::CreateVirtualServiceResponse
 * \brief The CreateVirtualServiceResponse class provides an interace for AppMesh CreateVirtualService responses.
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
 * \sa AppMeshClient::createVirtualService
 */

/*!
 * Constructs a CreateVirtualServiceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateVirtualServiceResponse::CreateVirtualServiceResponse(
        const CreateVirtualServiceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppMeshResponse(new CreateVirtualServiceResponsePrivate(this), parent)
{
    setRequest(new CreateVirtualServiceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateVirtualServiceRequest * CreateVirtualServiceResponse::request() const
{
    Q_D(const CreateVirtualServiceResponse);
    return static_cast<const CreateVirtualServiceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppMesh CreateVirtualService \a response.
 */
void CreateVirtualServiceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateVirtualServiceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppMesh::CreateVirtualServiceResponsePrivate
 * \brief The CreateVirtualServiceResponsePrivate class provides private implementation for CreateVirtualServiceResponse.
 * \internal
 *
 * \inmodule QtAwsAppMesh
 */

/*!
 * Constructs a CreateVirtualServiceResponsePrivate object with public implementation \a q.
 */
CreateVirtualServiceResponsePrivate::CreateVirtualServiceResponsePrivate(
    CreateVirtualServiceResponse * const q) : AppMeshResponsePrivate(q)
{

}

/*!
 * Parses a AppMesh CreateVirtualService response element from \a xml.
 */
void CreateVirtualServiceResponsePrivate::parseCreateVirtualServiceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVirtualServiceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppMesh
} // namespace QtAws
