// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmanagedendpointresponse.h"
#include "createmanagedendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emrcontainers {

/*!
 * \class QtAws::Emrcontainers::CreateManagedEndpointResponse
 * \brief The CreateManagedEndpointResponse class provides an interace for Emrcontainers CreateManagedEndpoint responses.
 *
 * \inmodule QtAwsEmrcontainers
 *
 *  Amazon EMR on EKS provides a deployment option for Amazon EMR that allows you to run open-source big data frameworks on
 *  Amazon Elastic Kubernetes Service (Amazon EKS). With this deployment option, you can focus on running analytics
 *  workloads while Amazon EMR on EKS builds, configures, and manages containers for open-source applications. For more
 *  information about Amazon EMR on EKS concepts and tasks, see <a
 *  href="https://docs.aws.amazon.com/emr/latest/EMR-on-EKS-DevelopmentGuide/emr-eks.html">What is Amazon EMR on
 * 
 *  EKS</a>>
 * 
 *  <i>Amazon EMR containers</i> is the API name for Amazon EMR on EKS. The <code>emr-containers</code> prefix is used in
 *  the following scenarios:
 * 
 *  </p <ul> <li>
 * 
 *  It is the prefix in the CLI commands for Amazon EMR on EKS. For example, <code>aws emr-containers
 * 
 *  start-job-run</code>> </li> <li>
 * 
 *  It is the prefix before IAM policy actions for Amazon EMR on EKS. For example, <code>"Action": [
 *  "emr-containers:StartJobRun"]</code>. For more information, see <a
 *  href="https://docs.aws.amazon.com/emr/latest/EMR-on-EKS-DevelopmentGuide/security_iam_service-with-iam.html#security_iam_service-with-iam-id-based-policies-actions">Policy
 *  actions for Amazon EMR on
 * 
 *  EKS</a>> </li> <li>
 * 
 *  It is the prefix used in Amazon EMR on EKS service endpoints. For example,
 *  <code>emr-containers.us-east-2.amazonaws.com</code>. For more information, see <a
 *  href="https://docs.aws.amazon.com/emr/latest/EMR-on-EKS-DevelopmentGuide/service-quotas.html#service-endpoints">Amazon
 *  EMR on EKS Service
 *
 * \sa EmrcontainersClient::createManagedEndpoint
 */

/*!
 * Constructs a CreateManagedEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
CreateManagedEndpointResponse::CreateManagedEndpointResponse(
        const CreateManagedEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrcontainersResponse(new CreateManagedEndpointResponsePrivate(this), parent)
{
    setRequest(new CreateManagedEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateManagedEndpointRequest * CreateManagedEndpointResponse::request() const
{
    Q_D(const CreateManagedEndpointResponse);
    return static_cast<const CreateManagedEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emrcontainers CreateManagedEndpoint \a response.
 */
void CreateManagedEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateManagedEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emrcontainers::CreateManagedEndpointResponsePrivate
 * \brief The CreateManagedEndpointResponsePrivate class provides private implementation for CreateManagedEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsEmrcontainers
 */

/*!
 * Constructs a CreateManagedEndpointResponsePrivate object with public implementation \a q.
 */
CreateManagedEndpointResponsePrivate::CreateManagedEndpointResponsePrivate(
    CreateManagedEndpointResponse * const q) : EmrcontainersResponsePrivate(q)
{

}

/*!
 * Parses a Emrcontainers CreateManagedEndpoint response element from \a xml.
 */
void CreateManagedEndpointResponsePrivate::parseCreateManagedEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateManagedEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emrcontainers
} // namespace QtAws
