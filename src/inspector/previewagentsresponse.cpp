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

#include "previewagentsresponse.h"
#include "previewagentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Inspector {

/**
 * @class  PreviewAgentsResponse
 *
 * @brief  Handles Inspector PreviewAgents responses.
 *
 * @see    InspectorClient::previewAgents
 */

/**
 * @brief  Constructs a new PreviewAgentsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PreviewAgentsResponse::PreviewAgentsResponse(
        const PreviewAgentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new PreviewAgentsResponsePrivate(this), parent)
{
    setRequest(new PreviewAgentsRequest(request));
    setReply(reply);
}

const PreviewAgentsRequest * PreviewAgentsResponse::request() const
{
    Q_D(const PreviewAgentsResponse);
    return static_cast<const PreviewAgentsRequest *>(d->request);
}

/**
 * @brief  Parse a Inspector PreviewAgents response.
 *
 * @param  response  Response to parse.
 */
void PreviewAgentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PreviewAgentsResponsePrivate
 *
 * @brief  Private implementation for PreviewAgentsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PreviewAgentsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PreviewAgentsResponse instance.
 */
PreviewAgentsResponsePrivate::PreviewAgentsResponsePrivate(
    PreviewAgentsQueueResponse * const q) : PreviewAgentsPrivate(q)
{

}

/**
 * @brief  Parse an Inspector PreviewAgentsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PreviewAgentsResponsePrivate::PreviewAgentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PreviewAgentsResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace AWS
