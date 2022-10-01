// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeresourcecollectionhealthresponse.h"
#include "describeresourcecollectionhealthresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DevOpsGuru {

/*!
 * \class QtAws::DevOpsGuru::DescribeResourceCollectionHealthResponse
 * \brief The DescribeResourceCollectionHealthResponse class provides an interace for DevOpsGuru DescribeResourceCollectionHealth responses.
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
 * \sa DevOpsGuruClient::describeResourceCollectionHealth
 */

/*!
 * Constructs a DescribeResourceCollectionHealthResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeResourceCollectionHealthResponse::DescribeResourceCollectionHealthResponse(
        const DescribeResourceCollectionHealthRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DevOpsGuruResponse(new DescribeResourceCollectionHealthResponsePrivate(this), parent)
{
    setRequest(new DescribeResourceCollectionHealthRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeResourceCollectionHealthRequest * DescribeResourceCollectionHealthResponse::request() const
{
    Q_D(const DescribeResourceCollectionHealthResponse);
    return static_cast<const DescribeResourceCollectionHealthRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DevOpsGuru DescribeResourceCollectionHealth \a response.
 */
void DescribeResourceCollectionHealthResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeResourceCollectionHealthResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DevOpsGuru::DescribeResourceCollectionHealthResponsePrivate
 * \brief The DescribeResourceCollectionHealthResponsePrivate class provides private implementation for DescribeResourceCollectionHealthResponse.
 * \internal
 *
 * \inmodule QtAwsDevOpsGuru
 */

/*!
 * Constructs a DescribeResourceCollectionHealthResponsePrivate object with public implementation \a q.
 */
DescribeResourceCollectionHealthResponsePrivate::DescribeResourceCollectionHealthResponsePrivate(
    DescribeResourceCollectionHealthResponse * const q) : DevOpsGuruResponsePrivate(q)
{

}

/*!
 * Parses a DevOpsGuru DescribeResourceCollectionHealth response element from \a xml.
 */
void DescribeResourceCollectionHealthResponsePrivate::parseDescribeResourceCollectionHealthResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeResourceCollectionHealthResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DevOpsGuru
} // namespace QtAws
