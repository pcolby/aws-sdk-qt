/*
    Copyright 2013-2019 Paul Colby

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

#include "deletetopicruleresponse.h"
#include "deletetopicruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::DeleteTopicRuleResponse
 * \brief The DeleteTopicRuleResponse class provides an interace for IoT DeleteTopicRule responses.
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
 *  Guide</a>>
 * 
 *  For information about how to use the credentials provider for AWS IoT, see <a
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/authorizing-direct-aws.html">Authorizing Direct Calls to AWS
 *
 * \sa IoTClient::deleteTopicRule
 */

/*!
 * Constructs a DeleteTopicRuleResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTopicRuleResponse::DeleteTopicRuleResponse(
        const DeleteTopicRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DeleteTopicRuleResponsePrivate(this), parent)
{
    setRequest(new DeleteTopicRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTopicRuleRequest * DeleteTopicRuleResponse::request() const
{
    Q_D(const DeleteTopicRuleResponse);
    return static_cast<const DeleteTopicRuleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT DeleteTopicRule \a response.
 */
void DeleteTopicRuleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTopicRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::DeleteTopicRuleResponsePrivate
 * \brief The DeleteTopicRuleResponsePrivate class provides private implementation for DeleteTopicRuleResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a DeleteTopicRuleResponsePrivate object with public implementation \a q.
 */
DeleteTopicRuleResponsePrivate::DeleteTopicRuleResponsePrivate(
    DeleteTopicRuleResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT DeleteTopicRule response element from \a xml.
 */
void DeleteTopicRuleResponsePrivate::parseDeleteTopicRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTopicRuleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
