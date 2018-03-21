/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "startthingregistrationtaskresponse.h"
#include "startthingregistrationtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  StartThingRegistrationTaskResponse
 *
 * @brief  Handles IoT StartThingRegistrationTask responses.
 *
 * @see    IoTClient::startThingRegistrationTask
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartThingRegistrationTaskResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new StartThingRegistrationTaskResponsePrivate(this), parent)
{
    setRequest(new StartThingRegistrationTaskRequest(request));
    setReply(reply);
}

const StartThingRegistrationTaskRequest * StartThingRegistrationTaskResponse::request() const
{
    Q_D(const StartThingRegistrationTaskResponse);
    return static_cast<const StartThingRegistrationTaskRequest *>(d->request);
}

/**
 * @brief  Parse a IoT StartThingRegistrationTask response.
 *
 * @param  response  Response to parse.
 */
void StartThingRegistrationTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartThingRegistrationTaskResponsePrivate
 *
 * @brief  Private implementation for StartThingRegistrationTaskResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartThingRegistrationTaskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartThingRegistrationTaskResponse instance.
 */
StartThingRegistrationTaskResponsePrivate::StartThingRegistrationTaskResponsePrivate(
    StartThingRegistrationTaskQueueResponse * const q) : StartThingRegistrationTaskPrivate(q)
{

}

/**
 * @brief  Parse an IoT StartThingRegistrationTaskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartThingRegistrationTaskResponsePrivate::StartThingRegistrationTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartThingRegistrationTaskResponse"));
    /// @todo
}

} // namespace IoT
} // namespace AWS
