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

#include "describethingregistrationtaskresponse.h"
#include "describethingregistrationtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  DescribeThingRegistrationTaskResponse
 *
 * @brief  Handles IoT DescribeThingRegistrationTask responses.
 *
 * @see    IoTClient::describeThingRegistrationTask
 */

/**
 * @brief  Constructs a new DescribeThingRegistrationTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeThingRegistrationTaskResponse::DescribeThingRegistrationTaskResponse(
        const DescribeThingRegistrationTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DescribeThingRegistrationTaskResponsePrivate(this), parent)
{
    setRequest(new DescribeThingRegistrationTaskRequest(request));
    setReply(reply);
}

const DescribeThingRegistrationTaskRequest * DescribeThingRegistrationTaskResponse::request() const
{
    Q_D(const DescribeThingRegistrationTaskResponse);
    return static_cast<const DescribeThingRegistrationTaskRequest *>(d->request);
}

/**
 * @brief  Parse a IoT DescribeThingRegistrationTask response.
 *
 * @param  response  Response to parse.
 */
void DescribeThingRegistrationTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeThingRegistrationTaskResponsePrivate
 *
 * @brief  Private implementation for DescribeThingRegistrationTaskResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeThingRegistrationTaskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeThingRegistrationTaskResponse instance.
 */
DescribeThingRegistrationTaskResponsePrivate::DescribeThingRegistrationTaskResponsePrivate(
    DescribeThingRegistrationTaskQueueResponse * const q) : DescribeThingRegistrationTaskPrivate(q)
{

}

/**
 * @brief  Parse an IoT DescribeThingRegistrationTaskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeThingRegistrationTaskResponsePrivate::DescribeThingRegistrationTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeThingRegistrationTaskResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
