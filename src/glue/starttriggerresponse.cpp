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

#include "starttriggerresponse.h"
#include "starttriggerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/**
 * @class  StartTriggerResponse
 *
 * @brief  Handles Glue StartTrigger responses.
 *
 * @see    GlueClient::startTrigger
 */

/**
 * @brief  Constructs a new StartTriggerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartTriggerResponse::StartTriggerResponse(
        const StartTriggerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StartTriggerResponse(new StartTriggerResponsePrivate(this), parent)
{
    setRequest(new StartTriggerRequest(request));
    setReply(reply);
}

const StartTriggerRequest * StartTriggerResponse::request() const
{
    Q_D(const StartTriggerResponse);
    return static_cast<const StartTriggerRequest *>(d->request);
}

/**
 * @brief  Parse a Glue StartTrigger response.
 *
 * @param  response  Response to parse.
 */
void StartTriggerResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartTriggerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartTriggerResponsePrivate
 *
 * @brief  Private implementation for StartTriggerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartTriggerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartTriggerResponse instance.
 */
StartTriggerResponsePrivate::StartTriggerResponsePrivate(
    StartTriggerResponse * const q) : GlueResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glue StartTriggerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartTriggerResponsePrivate::parseStartTriggerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartTriggerResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
