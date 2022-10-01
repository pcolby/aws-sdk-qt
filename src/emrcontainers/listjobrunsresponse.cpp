// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listjobrunsresponse.h"
#include "listjobrunsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emrcontainers {

/*!
 * \class QtAws::Emrcontainers::ListJobRunsResponse
 * \brief The ListJobRunsResponse class provides an interace for Emrcontainers ListJobRuns responses.
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
 * \sa EmrcontainersClient::listJobRuns
 */

/*!
 * Constructs a ListJobRunsResponse object for \a reply to \a request, with parent \a parent.
 */
ListJobRunsResponse::ListJobRunsResponse(
        const ListJobRunsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrcontainersResponse(new ListJobRunsResponsePrivate(this), parent)
{
    setRequest(new ListJobRunsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListJobRunsRequest * ListJobRunsResponse::request() const
{
    Q_D(const ListJobRunsResponse);
    return static_cast<const ListJobRunsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emrcontainers ListJobRuns \a response.
 */
void ListJobRunsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListJobRunsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emrcontainers::ListJobRunsResponsePrivate
 * \brief The ListJobRunsResponsePrivate class provides private implementation for ListJobRunsResponse.
 * \internal
 *
 * \inmodule QtAwsEmrcontainers
 */

/*!
 * Constructs a ListJobRunsResponsePrivate object with public implementation \a q.
 */
ListJobRunsResponsePrivate::ListJobRunsResponsePrivate(
    ListJobRunsResponse * const q) : EmrcontainersResponsePrivate(q)
{

}

/*!
 * Parses a Emrcontainers ListJobRuns response element from \a xml.
 */
void ListJobRunsResponsePrivate::parseListJobRunsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListJobRunsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emrcontainers
} // namespace QtAws
