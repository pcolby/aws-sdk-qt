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

#include "updatedatabaseresponse.h"
#include "updatedatabaseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/**
 * @class  UpdateDatabaseResponse
 *
 * @brief  Handles Glue UpdateDatabase responses.
 *
 * @see    GlueClient::updateDatabase
 */

/**
 * @brief  Constructs a new UpdateDatabaseResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDatabaseResponse::UpdateDatabaseResponse(
        const UpdateDatabaseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateDatabaseResponsePrivate(this), parent)
{
    setRequest(new UpdateDatabaseRequest(request));
    setReply(reply);
}

const UpdateDatabaseRequest * UpdateDatabaseResponse::request() const
{
    Q_D(const UpdateDatabaseResponse);
    return static_cast<const UpdateDatabaseRequest *>(d->request);
}

/**
 * @brief  Parse a Glue UpdateDatabase response.
 *
 * @param  response  Response to parse.
 */
void UpdateDatabaseResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateDatabaseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateDatabaseResponsePrivate
 *
 * @brief  Private implementation for UpdateDatabaseResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDatabaseResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateDatabaseResponse instance.
 */
UpdateDatabaseResponsePrivate::UpdateDatabaseResponsePrivate(
    UpdateDatabaseResponse * const q) : GlueResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glue UpdateDatabaseResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateDatabaseResponsePrivate::parseUpdateDatabaseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDatabaseResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
