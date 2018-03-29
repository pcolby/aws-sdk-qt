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

#include "stoptriggerresponse.h"
#include "stoptriggerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/**
 * @class  StopTriggerResponse
 *
 * @brief  Handles Glue StopTrigger responses.
 *
 * @see    GlueClient::stopTrigger
 */

/**
 * @brief  Constructs a new StopTriggerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopTriggerResponse::StopTriggerResponse(
        const StopTriggerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new StopTriggerResponsePrivate(this), parent)
{
    setRequest(new StopTriggerRequest(request));
    setReply(reply);
}

const StopTriggerRequest * StopTriggerResponse::request() const
{
    Q_D(const StopTriggerResponse);
    return static_cast<const StopTriggerRequest *>(d->request);
}

/**
 * @brief  Parse a Glue StopTrigger response.
 *
 * @param  response  Response to parse.
 */
void StopTriggerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StopTriggerResponsePrivate
 *
 * @brief  Private implementation for StopTriggerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopTriggerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopTriggerResponse instance.
 */
StopTriggerResponsePrivate::StopTriggerResponsePrivate(
    StopTriggerResponse * const q) : GlueResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glue StopTriggerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopTriggerResponsePrivate::StopTriggerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopTriggerResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
