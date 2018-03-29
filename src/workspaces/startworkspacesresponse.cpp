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

#include "startworkspacesresponse.h"
#include "startworkspacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/**
 * @class  StartWorkspacesResponse
 *
 * @brief  Handles WorkSpaces StartWorkspaces responses.
 *
 * @see    WorkSpacesClient::startWorkspaces
 */

/**
 * @brief  Constructs a new StartWorkspacesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartWorkspacesResponse::StartWorkspacesResponse(
        const StartWorkspacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StartWorkspacesResponse(new StartWorkspacesResponsePrivate(this), parent)
{
    setRequest(new StartWorkspacesRequest(request));
    setReply(reply);
}

const StartWorkspacesRequest * StartWorkspacesResponse::request() const
{
    Q_D(const StartWorkspacesResponse);
    return static_cast<const StartWorkspacesRequest *>(d->request);
}

/**
 * @brief  Parse a WorkSpaces StartWorkspaces response.
 *
 * @param  response  Response to parse.
 */
void StartWorkspacesResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartWorkspacesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartWorkspacesResponsePrivate
 *
 * @brief  Private implementation for StartWorkspacesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartWorkspacesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartWorkspacesResponse instance.
 */
StartWorkspacesResponsePrivate::StartWorkspacesResponsePrivate(
    StartWorkspacesResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/**
 * @brief  Parse an WorkSpaces StartWorkspacesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartWorkspacesResponsePrivate::parseStartWorkspacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartWorkspacesResponse"));
    /// @todo
}

} // namespace WorkSpaces
} // namespace QtAws
