/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeaccounthealthresponse.h"
#include "describeaccounthealthresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DevOpsGuru {

/*!
 * \class QtAws::DevOpsGuru::DescribeAccountHealthResponse
 * \brief The DescribeAccountHealthResponse class provides an interace for DevOpsGuru DescribeAccountHealth responses.
 *
 * \inmodule QtAwsDevOpsGuru
 *
 *  Amazon DevOps Guru is a fully managed service that helps you identify anomalous behavior in business critical
 *  operational applications. You specify the AWS resources that you want DevOps Guru to cover, then the Amazon CloudWatch
 *  metrics and AWS CloudTrail events related to those resources are analyzed. When anomalous behavior is detected, DevOps
 *  Guru creates an <i>insight</i> that includes recommendations, related events, and related metrics that can help you
 *  improve your operational applications. For more information, see <a
 *  href="https://docs.aws.amazon.com/devops-guru/latest/userguide/welcome.html">What is Amazon DevOps Guru</a>.
 * 
 *  </p
 * 
 *  You can specify 1 or 2 Amazon Simple Notification Service topics so you are notified every time a new insight is
 *  created. You can also enable DevOps Guru to generate an OpsItem in AWS Systems Manager for each insight to help you
 *  manage and track your work addressing insights.
 * 
 *  </p
 * 
 *  To learn about the DevOps Guru workflow, see <a
 *  href="https://docs.aws.amazon.com/devops-guru/latest/userguide/welcome.html#how-it-works">How DevOps Guru works</a>. To
 *  learn about DevOps Guru concepts, see <a
 *  href="https://docs.aws.amazon.com/devops-guru/latest/userguide/concepts.html">Concepts in DevOps Guru</a>.
 *
 * \sa DevOpsGuruClient::describeAccountHealth
 */

/*!
 * Constructs a DescribeAccountHealthResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAccountHealthResponse::DescribeAccountHealthResponse(
        const DescribeAccountHealthRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DevOpsGuruResponse(new DescribeAccountHealthResponsePrivate(this), parent)
{
    setRequest(new DescribeAccountHealthRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAccountHealthRequest * DescribeAccountHealthResponse::request() const
{
    return static_cast<const DescribeAccountHealthRequest *>(DevOpsGuruResponse::request());
}

/*!
 * \reimp
 * Parses a successful DevOpsGuru DescribeAccountHealth \a response.
 */
void DescribeAccountHealthResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAccountHealthResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DevOpsGuru::DescribeAccountHealthResponsePrivate
 * \brief The DescribeAccountHealthResponsePrivate class provides private implementation for DescribeAccountHealthResponse.
 * \internal
 *
 * \inmodule QtAwsDevOpsGuru
 */

/*!
 * Constructs a DescribeAccountHealthResponsePrivate object with public implementation \a q.
 */
DescribeAccountHealthResponsePrivate::DescribeAccountHealthResponsePrivate(
    DescribeAccountHealthResponse * const q) : DevOpsGuruResponsePrivate(q)
{

}

/*!
 * Parses a DevOpsGuru DescribeAccountHealth response element from \a xml.
 */
void DescribeAccountHealthResponsePrivate::parseDescribeAccountHealthResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAccountHealthResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DevOpsGuru
} // namespace QtAws
