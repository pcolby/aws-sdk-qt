// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listanomaliesforinsightresponse.h"
#include "listanomaliesforinsightresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DevOpsGuru {

/*!
 * \class QtAws::DevOpsGuru::ListAnomaliesForInsightResponse
 * \brief The ListAnomaliesForInsightResponse class provides an interace for DevOpsGuru ListAnomaliesForInsight responses.
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
 * \sa DevOpsGuruClient::listAnomaliesForInsight
 */

/*!
 * Constructs a ListAnomaliesForInsightResponse object for \a reply to \a request, with parent \a parent.
 */
ListAnomaliesForInsightResponse::ListAnomaliesForInsightResponse(
        const ListAnomaliesForInsightRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DevOpsGuruResponse(new ListAnomaliesForInsightResponsePrivate(this), parent)
{
    setRequest(new ListAnomaliesForInsightRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAnomaliesForInsightRequest * ListAnomaliesForInsightResponse::request() const
{
    Q_D(const ListAnomaliesForInsightResponse);
    return static_cast<const ListAnomaliesForInsightRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DevOpsGuru ListAnomaliesForInsight \a response.
 */
void ListAnomaliesForInsightResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAnomaliesForInsightResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DevOpsGuru::ListAnomaliesForInsightResponsePrivate
 * \brief The ListAnomaliesForInsightResponsePrivate class provides private implementation for ListAnomaliesForInsightResponse.
 * \internal
 *
 * \inmodule QtAwsDevOpsGuru
 */

/*!
 * Constructs a ListAnomaliesForInsightResponsePrivate object with public implementation \a q.
 */
ListAnomaliesForInsightResponsePrivate::ListAnomaliesForInsightResponsePrivate(
    ListAnomaliesForInsightResponse * const q) : DevOpsGuruResponsePrivate(q)
{

}

/*!
 * Parses a DevOpsGuru ListAnomaliesForInsight response element from \a xml.
 */
void ListAnomaliesForInsightResponsePrivate::parseListAnomaliesForInsightResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAnomaliesForInsightResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DevOpsGuru
} // namespace QtAws
