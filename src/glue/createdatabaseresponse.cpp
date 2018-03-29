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

#include "createdatabaseresponse.h"
#include "createdatabaseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/**
 * @class  CreateDatabaseResponse
 *
 * @brief  Handles Glue CreateDatabase responses.
 *
 * @see    GlueClient::createDatabase
 */

/**
 * @brief  Constructs a new CreateDatabaseResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDatabaseResponse::CreateDatabaseResponse(
        const CreateDatabaseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateDatabaseResponsePrivate(this), parent)
{
    setRequest(new CreateDatabaseRequest(request));
    setReply(reply);
}

const CreateDatabaseRequest * CreateDatabaseResponse::request() const
{
    Q_D(const CreateDatabaseResponse);
    return static_cast<const CreateDatabaseRequest *>(d->request);
}

/**
 * @brief  Parse a Glue CreateDatabase response.
 *
 * @param  response  Response to parse.
 */
void CreateDatabaseResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateDatabaseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDatabaseResponsePrivate
 *
 * @brief  Private implementation for CreateDatabaseResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDatabaseResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDatabaseResponse instance.
 */
CreateDatabaseResponsePrivate::CreateDatabaseResponsePrivate(
    CreateDatabaseResponse * const q) : GlueResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glue CreateDatabaseResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDatabaseResponsePrivate::CreateDatabaseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDatabaseResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
