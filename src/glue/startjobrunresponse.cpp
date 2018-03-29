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

#include "startjobrunresponse.h"
#include "startjobrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  StartJobRunResponse
 *
 * @brief  Handles Glue StartJobRun responses.
 *
 * @see    GlueClient::startJobRun
 */

/**
 * @brief  Constructs a new StartJobRunResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartJobRunResponse::StartJobRunResponse(
        const StartJobRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new StartJobRunResponsePrivate(this), parent)
{
    setRequest(new StartJobRunRequest(request));
    setReply(reply);
}

const StartJobRunRequest * StartJobRunResponse::request() const
{
    Q_D(const StartJobRunResponse);
    return static_cast<const StartJobRunRequest *>(d->request);
}

/**
 * @brief  Parse a Glue StartJobRun response.
 *
 * @param  response  Response to parse.
 */
void StartJobRunResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartJobRunResponsePrivate
 *
 * @brief  Private implementation for StartJobRunResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartJobRunResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartJobRunResponse instance.
 */
StartJobRunResponsePrivate::StartJobRunResponsePrivate(
    StartJobRunQueueResponse * const q) : StartJobRunPrivate(q)
{

}

/**
 * @brief  Parse an Glue StartJobRunResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartJobRunResponsePrivate::StartJobRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartJobRunResponse"));
    /// @todo
}

} // namespace Glue
} // namespace AWS
