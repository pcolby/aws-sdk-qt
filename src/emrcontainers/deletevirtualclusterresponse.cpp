// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletevirtualclusterresponse.h"
#include "deletevirtualclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emrcontainers {

/*!
 * \class QtAws::Emrcontainers::DeleteVirtualClusterResponse
 * \brief The DeleteVirtualClusterResponse class provides an interace for Emrcontainers DeleteVirtualCluster responses.
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
 * \sa EmrcontainersClient::deleteVirtualCluster
 */

/*!
 * Constructs a DeleteVirtualClusterResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteVirtualClusterResponse::DeleteVirtualClusterResponse(
        const DeleteVirtualClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrcontainersResponse(new DeleteVirtualClusterResponsePrivate(this), parent)
{
    setRequest(new DeleteVirtualClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteVirtualClusterRequest * DeleteVirtualClusterResponse::request() const
{
    Q_D(const DeleteVirtualClusterResponse);
    return static_cast<const DeleteVirtualClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emrcontainers DeleteVirtualCluster \a response.
 */
void DeleteVirtualClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteVirtualClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emrcontainers::DeleteVirtualClusterResponsePrivate
 * \brief The DeleteVirtualClusterResponsePrivate class provides private implementation for DeleteVirtualClusterResponse.
 * \internal
 *
 * \inmodule QtAwsEmrcontainers
 */

/*!
 * Constructs a DeleteVirtualClusterResponsePrivate object with public implementation \a q.
 */
DeleteVirtualClusterResponsePrivate::DeleteVirtualClusterResponsePrivate(
    DeleteVirtualClusterResponse * const q) : EmrcontainersResponsePrivate(q)
{

}

/*!
 * Parses a Emrcontainers DeleteVirtualCluster response element from \a xml.
 */
void DeleteVirtualClusterResponsePrivate::parseDeleteVirtualClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVirtualClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emrcontainers
} // namespace QtAws
