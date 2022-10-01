// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startjobrunresponse.h"
#include "startjobrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emrcontainers {

/*!
 * \class QtAws::Emrcontainers::StartJobRunResponse
 * \brief The StartJobRunResponse class provides an interace for Emrcontainers StartJobRun responses.
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
 * \sa EmrcontainersClient::startJobRun
 */

/*!
 * Constructs a StartJobRunResponse object for \a reply to \a request, with parent \a parent.
 */
StartJobRunResponse::StartJobRunResponse(
        const StartJobRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrcontainersResponse(new StartJobRunResponsePrivate(this), parent)
{
    setRequest(new StartJobRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartJobRunRequest * StartJobRunResponse::request() const
{
    Q_D(const StartJobRunResponse);
    return static_cast<const StartJobRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emrcontainers StartJobRun \a response.
 */
void StartJobRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartJobRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emrcontainers::StartJobRunResponsePrivate
 * \brief The StartJobRunResponsePrivate class provides private implementation for StartJobRunResponse.
 * \internal
 *
 * \inmodule QtAwsEmrcontainers
 */

/*!
 * Constructs a StartJobRunResponsePrivate object with public implementation \a q.
 */
StartJobRunResponsePrivate::StartJobRunResponsePrivate(
    StartJobRunResponse * const q) : EmrcontainersResponsePrivate(q)
{

}

/*!
 * Parses a Emrcontainers StartJobRun response element from \a xml.
 */
void StartJobRunResponsePrivate::parseStartJobRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartJobRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emrcontainers
} // namespace QtAws
