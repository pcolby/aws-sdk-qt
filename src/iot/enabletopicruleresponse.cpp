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

#include "enabletopicruleresponse.h"
#include "enabletopicruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::EnableTopicRuleResponse
 * \brief The EnableTopicRuleResponse class provides an interace for IoT EnableTopicRule responses.
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
 * \sa IoTClient::enableTopicRule
 */

/*!
 * Constructs a EnableTopicRuleResponse object for \a reply to \a request, with parent \a parent.
 */
EnableTopicRuleResponse::EnableTopicRuleResponse(
        const EnableTopicRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new EnableTopicRuleResponsePrivate(this), parent)
{
    setRequest(new EnableTopicRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnableTopicRuleRequest * EnableTopicRuleResponse::request() const
{
    Q_D(const EnableTopicRuleResponse);
    return static_cast<const EnableTopicRuleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT EnableTopicRule \a response.
 */
void EnableTopicRuleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EnableTopicRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::EnableTopicRuleResponsePrivate
 * \brief The EnableTopicRuleResponsePrivate class provides private implementation for EnableTopicRuleResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a EnableTopicRuleResponsePrivate object with public implementation \a q.
 */
EnableTopicRuleResponsePrivate::EnableTopicRuleResponsePrivate(
    EnableTopicRuleResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT EnableTopicRule response element from \a xml.
 */
void EnableTopicRuleResponsePrivate::parseEnableTopicRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableTopicRuleResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
