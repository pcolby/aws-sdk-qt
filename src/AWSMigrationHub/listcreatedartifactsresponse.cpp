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

#include "listcreatedartifactsresponse.h"
#include "listcreatedartifactsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MigrationHub {

/**
 * @class  ListCreatedArtifactsResponse
 *
 * @brief  Handles MigrationHub ListCreatedArtifacts responses.
 *
 * @see    MigrationHubClient::listCreatedArtifacts
 */

/**
 * @brief  Constructs a new ListCreatedArtifactsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListCreatedArtifactsResponse::ListCreatedArtifactsResponse(
        const ListCreatedArtifactsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubResponse(new ListCreatedArtifactsResponsePrivate(this), parent)
{
    setRequest(new ListCreatedArtifactsRequest(request));
    setReply(reply);
}

const ListCreatedArtifactsRequest * ListCreatedArtifactsResponse::request() const
{
    Q_D(const ListCreatedArtifactsResponse);
    return static_cast<const ListCreatedArtifactsRequest *>(d->request);
}

/**
 * @brief  Parse a MigrationHub ListCreatedArtifacts response.
 *
 * @param  response  Response to parse.
 */
void ListCreatedArtifactsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListCreatedArtifactsResponsePrivate
 *
 * @brief  Private implementation for ListCreatedArtifactsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListCreatedArtifactsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListCreatedArtifactsResponse instance.
 */
ListCreatedArtifactsResponsePrivate::ListCreatedArtifactsResponsePrivate(
    ListCreatedArtifactsQueueResponse * const q) : ListCreatedArtifactsPrivate(q)
{

}

/**
 * @brief  Parse an MigrationHub ListCreatedArtifactsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListCreatedArtifactsResponsePrivate::ListCreatedArtifactsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCreatedArtifactsResponse"));
    /// @todo
}

} // namespace MigrationHub
} // namespace AWS
