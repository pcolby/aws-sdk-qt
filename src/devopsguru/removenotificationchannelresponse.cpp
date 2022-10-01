// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removenotificationchannelresponse.h"
#include "removenotificationchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DevOpsGuru {

/*!
 * \class QtAws::DevOpsGuru::RemoveNotificationChannelResponse
 * \brief The RemoveNotificationChannelResponse class provides an interace for DevOpsGuru RemoveNotificationChannel responses.
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
 * \sa DevOpsGuruClient::removeNotificationChannel
 */

/*!
 * Constructs a RemoveNotificationChannelResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveNotificationChannelResponse::RemoveNotificationChannelResponse(
        const RemoveNotificationChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DevOpsGuruResponse(new RemoveNotificationChannelResponsePrivate(this), parent)
{
    setRequest(new RemoveNotificationChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveNotificationChannelRequest * RemoveNotificationChannelResponse::request() const
{
    Q_D(const RemoveNotificationChannelResponse);
    return static_cast<const RemoveNotificationChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DevOpsGuru RemoveNotificationChannel \a response.
 */
void RemoveNotificationChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveNotificationChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DevOpsGuru::RemoveNotificationChannelResponsePrivate
 * \brief The RemoveNotificationChannelResponsePrivate class provides private implementation for RemoveNotificationChannelResponse.
 * \internal
 *
 * \inmodule QtAwsDevOpsGuru
 */

/*!
 * Constructs a RemoveNotificationChannelResponsePrivate object with public implementation \a q.
 */
RemoveNotificationChannelResponsePrivate::RemoveNotificationChannelResponsePrivate(
    RemoveNotificationChannelResponse * const q) : DevOpsGuruResponsePrivate(q)
{

}

/*!
 * Parses a DevOpsGuru RemoveNotificationChannel response element from \a xml.
 */
void RemoveNotificationChannelResponsePrivate::parseRemoveNotificationChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveNotificationChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DevOpsGuru
} // namespace QtAws
