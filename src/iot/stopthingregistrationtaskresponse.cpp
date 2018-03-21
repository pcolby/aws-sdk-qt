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

#include "stopthingregistrationtaskresponse.h"
#include "stopthingregistrationtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  StopThingRegistrationTaskResponse
 *
 * @brief  Handles IoT StopThingRegistrationTask responses.
 *
 * @see    IoTClient::stopThingRegistrationTask
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopThingRegistrationTaskResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new StopThingRegistrationTaskResponsePrivate(this), parent)
{
    setRequest(new StopThingRegistrationTaskRequest(request));
    setReply(reply);
}

const StopThingRegistrationTaskRequest * StopThingRegistrationTaskResponse::request() const
{
    Q_D(const StopThingRegistrationTaskResponse);
    return static_cast<const StopThingRegistrationTaskRequest *>(d->request);
}

/**
 * @brief  Parse a IoT StopThingRegistrationTask response.
 *
 * @param  response  Response to parse.
 */
void StopThingRegistrationTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StopThingRegistrationTaskResponsePrivate
 *
 * @brief  Private implementation for StopThingRegistrationTaskResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopThingRegistrationTaskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopThingRegistrationTaskResponse instance.
 */
StopThingRegistrationTaskResponsePrivate::StopThingRegistrationTaskResponsePrivate(
    StopThingRegistrationTaskQueueResponse * const q) : StopThingRegistrationTaskPrivate(q)
{

}

/**
 * @brief  Parse an IoT StopThingRegistrationTaskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopThingRegistrationTaskResponsePrivate::StopThingRegistrationTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopThingRegistrationTaskResponse"));
    /// @todo
}
