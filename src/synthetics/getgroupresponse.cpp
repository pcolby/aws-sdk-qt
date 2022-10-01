// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgroupresponse.h"
#include "getgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Synthetics {

/*!
 * \class QtAws::Synthetics::GetGroupResponse
 * \brief The GetGroupResponse class provides an interace for Synthetics GetGroup responses.
 *
 * \inmodule QtAwsSynthetics
 *
 *  <fullname>Amazon CloudWatch Synthetics</fullname>
 * 
 *  You can use Amazon CloudWatch Synthetics to continually monitor your services. You can create and manage
 *  <i>canaries</i>, which are modular, lightweight scripts that monitor your endpoints and APIs from the outside-in. You
 *  can set up your canaries to run 24 hours a day, once per minute. The canaries help you check the availability and
 *  latency of your web services and troubleshoot anomalies by investigating load time data, screenshots of the UI, logs,
 *  and metrics. The canaries seamlessly integrate with CloudWatch ServiceLens to help you trace the causes of impacted
 *  nodes in your applications. For more information, see <a
 *  href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ServiceLens.html">Using ServiceLens to Monitor the
 *  Health of Your Applications</a> in the <i>Amazon CloudWatch User
 * 
 *  Guide</i>>
 * 
 *  Before you create and manage canaries, be aware of the security considerations. For more information, see <a
 *  href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/servicelens_canaries_security.html">Security
 *  Considerations for Synthetics
 *
 * \sa SyntheticsClient::getGroup
 */

/*!
 * Constructs a GetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
GetGroupResponse::GetGroupResponse(
        const GetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SyntheticsResponse(new GetGroupResponsePrivate(this), parent)
{
    setRequest(new GetGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetGroupRequest * GetGroupResponse::request() const
{
    Q_D(const GetGroupResponse);
    return static_cast<const GetGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Synthetics GetGroup \a response.
 */
void GetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Synthetics::GetGroupResponsePrivate
 * \brief The GetGroupResponsePrivate class provides private implementation for GetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsSynthetics
 */

/*!
 * Constructs a GetGroupResponsePrivate object with public implementation \a q.
 */
GetGroupResponsePrivate::GetGroupResponsePrivate(
    GetGroupResponse * const q) : SyntheticsResponsePrivate(q)
{

}

/*!
 * Parses a Synthetics GetGroup response element from \a xml.
 */
void GetGroupResponsePrivate::parseGetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Synthetics
} // namespace QtAws
