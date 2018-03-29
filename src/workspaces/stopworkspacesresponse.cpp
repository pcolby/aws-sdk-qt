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

#include "stopworkspacesresponse.h"
#include "stopworkspacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkSpaces {

/**
 * @class  StopWorkspacesResponse
 *
 * @brief  Handles WorkSpaces StopWorkspaces responses.
 *
 * @see    WorkSpacesClient::stopWorkspaces
 */

/**
 * @brief  Constructs a new StopWorkspacesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopWorkspacesResponse::StopWorkspacesResponse(
        const StopWorkspacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new StopWorkspacesResponsePrivate(this), parent)
{
    setRequest(new StopWorkspacesRequest(request));
    setReply(reply);
}

const StopWorkspacesRequest * StopWorkspacesResponse::request() const
{
    Q_D(const StopWorkspacesResponse);
    return static_cast<const StopWorkspacesRequest *>(d->request);
}

/**
 * @brief  Parse a WorkSpaces StopWorkspaces response.
 *
 * @param  response  Response to parse.
 */
void StopWorkspacesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StopWorkspacesResponsePrivate
 *
 * @brief  Private implementation for StopWorkspacesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopWorkspacesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopWorkspacesResponse instance.
 */
StopWorkspacesResponsePrivate::StopWorkspacesResponsePrivate(
    StopWorkspacesQueueResponse * const q) : StopWorkspacesPrivate(q)
{

}

/**
 * @brief  Parse an WorkSpaces StopWorkspacesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopWorkspacesResponsePrivate::StopWorkspacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopWorkspacesResponse"));
    /// @todo
}

} // namespace WorkSpaces
} // namespace AWS
