/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
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
 *
 * \brief The DeleteTopicRuleResponse class encapsulates IoT DeleteTopicRule responses.
 *
 * \ingroup IoT
 *
 *  <fullname>AWS IoT</fullname>
 * 
 *  AWS IoT provides secure, bi-directional communication between Internet-connected things (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the AWS cloud. You can discover your custom IoT-Data endpoint to communicate
 *  with, configure rules for data processing and integration with other services, organize resources associated with each
 *  thing (Thing Registry), configure logging, and create and manage policies and credentials to authenticate
 * 
 *  things>
 * 
 *  For more information about how AWS IoT works, see the <a
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 *
 * \sa IoTClient::deleteTopicRule
 */

/*!
 * @brief  Constructs a new DeleteTopicRuleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const DeleteTopicRuleRequest * DeleteTopicRuleResponse::request() const
{
    Q_D(const DeleteTopicRuleResponse);
    return static_cast<const DeleteTopicRuleRequest *>(d->request);
}

/*!
 * @brief  Parse a IoT DeleteTopicRule response.
 *
 * @param  response  Response to parse.
 */
void DeleteTopicRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteTopicRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteTopicRuleResponsePrivate
 *
 * \brief Private implementation for DeleteTopicRuleResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteTopicRuleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteTopicRuleResponse instance.
 */
DeleteTopicRuleResponsePrivate::DeleteTopicRuleResponsePrivate(
    DeleteTopicRuleResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * @brief  Parse an IoT DeleteTopicRuleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteTopicRuleResponsePrivate::parseDeleteTopicRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTopicRuleResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
