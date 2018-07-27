/*
    Copyright 2013-2018 Paul Colby

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

#include "replacetopicruleresponse.h"
#include "replacetopicruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::ReplaceTopicRuleResponse
 * \brief The ReplaceTopicRuleResponse class provides an interace for IoT ReplaceTopicRule responses.
 *
 * \inmodule QtAwsIoT
 *
 *  <fullname>AWS IoT</fullname>
 * 
 *  AWS IoT provides secure, bi-directional communication between Internet-connected devices (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the AWS cloud. You can discover your custom IoT-Data endpoint to communicate
 *  with, configure rules for data processing and integration with other services, organize resources associated with each
 *  device (Registry), configure logging, and create and manage policies and credentials to authenticate
 * 
 *  devices>
 * 
 *  For more information about how AWS IoT works, see the <a
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 *
 * \sa IoTClient::replaceTopicRule
 */

/*!
 * Constructs a ReplaceTopicRuleResponse object for \a reply to \a request, with parent \a parent.
 */
ReplaceTopicRuleResponse::ReplaceTopicRuleResponse(
        const ReplaceTopicRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ReplaceTopicRuleResponsePrivate(this), parent)
{
    setRequest(new ReplaceTopicRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ReplaceTopicRuleRequest * ReplaceTopicRuleResponse::request() const
{
    Q_D(const ReplaceTopicRuleResponse);
    return static_cast<const ReplaceTopicRuleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT ReplaceTopicRule \a response.
 */
void ReplaceTopicRuleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ReplaceTopicRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::ReplaceTopicRuleResponsePrivate
 * \brief The ReplaceTopicRuleResponsePrivate class provides private implementation for ReplaceTopicRuleResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a ReplaceTopicRuleResponsePrivate object with public implementation \a q.
 */
ReplaceTopicRuleResponsePrivate::ReplaceTopicRuleResponsePrivate(
    ReplaceTopicRuleResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT ReplaceTopicRule response element from \a xml.
 */
void ReplaceTopicRuleResponsePrivate::parseReplaceTopicRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReplaceTopicRuleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
