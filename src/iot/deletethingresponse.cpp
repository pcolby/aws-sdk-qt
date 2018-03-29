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

#include "deletethingresponse.h"
#include "deletethingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  DeleteThingResponse
 *
 * @brief  Handles IoT DeleteThing responses.
 *
 * @see    IoTClient::deleteThing
 */

/**
 * @brief  Constructs a new DeleteThingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteThingResponse::DeleteThingResponse(
        const DeleteThingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DeleteThingResponsePrivate(this), parent)
{
    setRequest(new DeleteThingRequest(request));
    setReply(reply);
}

const DeleteThingRequest * DeleteThingResponse::request() const
{
    Q_D(const DeleteThingResponse);
    return static_cast<const DeleteThingRequest *>(d->request);
}

/**
 * @brief  Parse a IoT DeleteThing response.
 *
 * @param  response  Response to parse.
 */
void DeleteThingResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteThingResponsePrivate
 *
 * @brief  Private implementation for DeleteThingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteThingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteThingResponse instance.
 */
DeleteThingResponsePrivate::DeleteThingResponsePrivate(
    DeleteThingQueueResponse * const q) : DeleteThingPrivate(q)
{

}

/**
 * @brief  Parse an IoT DeleteThingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteThingResponsePrivate::DeleteThingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteThingResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
