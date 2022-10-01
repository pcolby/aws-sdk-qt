// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startcostestimationresponse.h"
#include "startcostestimationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DevOpsGuru {

/*!
 * \class QtAws::DevOpsGuru::StartCostEstimationResponse
 * \brief The StartCostEstimationResponse class provides an interace for DevOpsGuru StartCostEstimation responses.
 *
 * \inmodule QtAwsDevOpsGuru
 *
 *  Amazon DevOps Guru is a fully managed service that helps you identify anomalous behavior in business critical
 *  operational applications. You specify the Amazon Web Services resources that you want DevOps Guru to cover, then the
 *  Amazon CloudWatch metrics and Amazon Web Services CloudTrail events related to those resources are analyzed. When
 *  anomalous behavior is detected, DevOps Guru creates an <i>insight</i> that includes recommendations, related events, and
 *  related metrics that can help you improve your operational applications. For more information, see <a
 *  href="https://docs.aws.amazon.com/devops-guru/latest/userguide/welcome.html">What is Amazon DevOps Guru</a>.
 * 
 *  </p
 * 
 *  You can specify 1 or 2 Amazon Simple Notification Service topics so you are notified every time a new insight is
 *  created. You can also enable DevOps Guru to generate an OpsItem in Amazon Web Services Systems Manager for each insight
 *  to help you manage and track your work addressing insights.
 * 
 *  </p
 * 
 *  To learn about the DevOps Guru workflow, see <a
 *  href="https://docs.aws.amazon.com/devops-guru/latest/userguide/welcome.html#how-it-works">How DevOps Guru works</a>. To
 *  learn about DevOps Guru concepts, see <a
 *  href="https://docs.aws.amazon.com/devops-guru/latest/userguide/concepts.html">Concepts in DevOps Guru</a>.
 *
 * \sa DevOpsGuruClient::startCostEstimation
 */

/*!
 * Constructs a StartCostEstimationResponse object for \a reply to \a request, with parent \a parent.
 */
StartCostEstimationResponse::StartCostEstimationResponse(
        const StartCostEstimationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DevOpsGuruResponse(new StartCostEstimationResponsePrivate(this), parent)
{
    setRequest(new StartCostEstimationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartCostEstimationRequest * StartCostEstimationResponse::request() const
{
    Q_D(const StartCostEstimationResponse);
    return static_cast<const StartCostEstimationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DevOpsGuru StartCostEstimation \a response.
 */
void StartCostEstimationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartCostEstimationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DevOpsGuru::StartCostEstimationResponsePrivate
 * \brief The StartCostEstimationResponsePrivate class provides private implementation for StartCostEstimationResponse.
 * \internal
 *
 * \inmodule QtAwsDevOpsGuru
 */

/*!
 * Constructs a StartCostEstimationResponsePrivate object with public implementation \a q.
 */
StartCostEstimationResponsePrivate::StartCostEstimationResponsePrivate(
    StartCostEstimationResponse * const q) : DevOpsGuruResponsePrivate(q)
{

}

/*!
 * Parses a DevOpsGuru StartCostEstimation response element from \a xml.
 */
void StartCostEstimationResponsePrivate::parseStartCostEstimationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartCostEstimationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DevOpsGuru
} // namespace QtAws
