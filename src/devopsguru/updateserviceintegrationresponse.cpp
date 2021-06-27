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

#include "updateserviceintegrationresponse.h"
#include "updateserviceintegrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DevOpsGuru {

/*!
 * \class QtAws::DevOpsGuru::UpdateServiceIntegrationResponse
 * \brief The UpdateServiceIntegrationResponse class provides an interace for DevOpsGuru UpdateServiceIntegration responses.
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
 * \sa DevOpsGuruClient::updateServiceIntegration
 */

/*!
 * Constructs a UpdateServiceIntegrationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateServiceIntegrationResponse::UpdateServiceIntegrationResponse(
        const UpdateServiceIntegrationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DevOpsGuruResponse(new UpdateServiceIntegrationResponsePrivate(this), parent)
{
    setRequest(new UpdateServiceIntegrationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateServiceIntegrationRequest * UpdateServiceIntegrationResponse::request() const
{
    return static_cast<const UpdateServiceIntegrationRequest *>(DevOpsGuruResponse::request());
}

/*!
 * \reimp
 * Parses a successful DevOpsGuru UpdateServiceIntegration \a response.
 */
void UpdateServiceIntegrationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateServiceIntegrationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DevOpsGuru::UpdateServiceIntegrationResponsePrivate
 * \brief The UpdateServiceIntegrationResponsePrivate class provides private implementation for UpdateServiceIntegrationResponse.
 * \internal
 *
 * \inmodule QtAwsDevOpsGuru
 */

/*!
 * Constructs a UpdateServiceIntegrationResponsePrivate object with public implementation \a q.
 */
UpdateServiceIntegrationResponsePrivate::UpdateServiceIntegrationResponsePrivate(
    UpdateServiceIntegrationResponse * const q) : DevOpsGuruResponsePrivate(q)
{

}

/*!
 * Parses a DevOpsGuru UpdateServiceIntegration response element from \a xml.
 */
void UpdateServiceIntegrationResponsePrivate::parseUpdateServiceIntegrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateServiceIntegrationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DevOpsGuru
} // namespace QtAws
