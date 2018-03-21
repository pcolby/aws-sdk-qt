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

#include "deletesmschannelresponse.h"
#include "deletesmschannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Pinpoint {

/**
 * @class  DeleteSmsChannelResponse
 *
 * @brief  Handles Pinpoint DeleteSmsChannel responses.
 *
 * @see    PinpointClient::deleteSmsChannel
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSmsChannelResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteSmsChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteSmsChannelRequest(request));
    setReply(reply);
}

const DeleteSmsChannelRequest * DeleteSmsChannelResponse::request() const
{
    Q_D(const DeleteSmsChannelResponse);
    return static_cast<const DeleteSmsChannelRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint DeleteSmsChannel response.
 *
 * @param  response  Response to parse.
 */
void DeleteSmsChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteSmsChannelResponsePrivate
 *
 * @brief  Private implementation for DeleteSmsChannelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSmsChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteSmsChannelResponse instance.
 */
DeleteSmsChannelResponsePrivate::DeleteSmsChannelResponsePrivate(
    DeleteSmsChannelQueueResponse * const q) : DeleteSmsChannelPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint DeleteSmsChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteSmsChannelResponsePrivate::DeleteSmsChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSmsChannelResponse"));
    /// @todo
}
