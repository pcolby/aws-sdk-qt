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

#include "updatetriggerresponse.h"
#include "updatetriggerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/**
 * @class  UpdateTriggerResponse
 *
 * @brief  Handles Glue UpdateTrigger responses.
 *
 * @see    GlueClient::updateTrigger
 */

/**
 * @brief  Constructs a new UpdateTriggerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateTriggerResponse::UpdateTriggerResponse(
        const UpdateTriggerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateTriggerResponsePrivate(this), parent)
{
    setRequest(new UpdateTriggerRequest(request));
    setReply(reply);
}

const UpdateTriggerRequest * UpdateTriggerResponse::request() const
{
    Q_D(const UpdateTriggerResponse);
    return static_cast<const UpdateTriggerRequest *>(d->request);
}

/**
 * @brief  Parse a Glue UpdateTrigger response.
 *
 * @param  response  Response to parse.
 */
void UpdateTriggerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateTriggerResponsePrivate
 *
 * @brief  Private implementation for UpdateTriggerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTriggerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateTriggerResponse instance.
 */
UpdateTriggerResponsePrivate::UpdateTriggerResponsePrivate(
    UpdateTriggerQueueResponse * const q) : UpdateTriggerPrivate(q)
{

}

/**
 * @brief  Parse an Glue UpdateTriggerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateTriggerResponsePrivate::UpdateTriggerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTriggerResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
