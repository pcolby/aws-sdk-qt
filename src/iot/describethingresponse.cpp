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

#include "describethingresponse.h"
#include "describethingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::DescribeThingResponse
 *
 * \brief The DescribeThingResponse class provides an interace for IoT DescribeThing responses.
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
 * \sa IoTClient::describeThing
 */

/*!
 * @brief  Constructs a new DescribeThingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeThingResponse::DescribeThingResponse(
        const DescribeThingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DescribeThingResponsePrivate(this), parent)
{
    setRequest(new DescribeThingRequest(request));
    setReply(reply);
}

const DescribeThingRequest * DescribeThingResponse::request() const
{
    Q_D(const DescribeThingResponse);
    return static_cast<const DescribeThingRequest *>(d->request);
}

/*!
 * @brief  Parse a IoT DescribeThing response.
 *
 * @param  response  Response to parse.
 */
void DescribeThingResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeThingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeThingResponsePrivate
 *
 * \brief Private implementation for DescribeThingResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeThingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeThingResponse instance.
 */
DescribeThingResponsePrivate::DescribeThingResponsePrivate(
    DescribeThingResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * @brief  Parse an IoT DescribeThingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeThingResponsePrivate::parseDescribeThingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeThingResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
