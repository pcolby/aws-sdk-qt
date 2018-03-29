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

#include "stoptaskresponse.h"
#include "stoptaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECS {

/**
 * @class  StopTaskResponse
 *
 * @brief  Handles ECS StopTask responses.
 *
 * @see    ECSClient::stopTask
 */

/**
 * @brief  Constructs a new StopTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopTaskResponse::StopTaskResponse(
        const StopTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StopTaskResponse(new StopTaskResponsePrivate(this), parent)
{
    setRequest(new StopTaskRequest(request));
    setReply(reply);
}

const StopTaskRequest * StopTaskResponse::request() const
{
    Q_D(const StopTaskResponse);
    return static_cast<const StopTaskRequest *>(d->request);
}

/**
 * @brief  Parse a ECS StopTask response.
 *
 * @param  response  Response to parse.
 */
void StopTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(StopTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StopTaskResponsePrivate
 *
 * @brief  Private implementation for StopTaskResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopTaskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopTaskResponse instance.
 */
StopTaskResponsePrivate::StopTaskResponsePrivate(
    StopTaskResponse * const q) : ECSResponsePrivate(q)
{

}

/**
 * @brief  Parse an ECS StopTaskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopTaskResponsePrivate::parseStopTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopTaskResponse"));
    /// @todo
}

} // namespace ECS
} // namespace QtAws
