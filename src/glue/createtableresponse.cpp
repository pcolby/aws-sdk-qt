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

#include "createtableresponse.h"
#include "createtableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/**
 * @class  CreateTableResponse
 *
 * @brief  Handles Glue CreateTable responses.
 *
 * @see    GlueClient::createTable
 */

/**
 * @brief  Constructs a new CreateTableResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateTableResponse::CreateTableResponse(
        const CreateTableRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateTableResponsePrivate(this), parent)
{
    setRequest(new CreateTableRequest(request));
    setReply(reply);
}

const CreateTableRequest * CreateTableResponse::request() const
{
    Q_D(const CreateTableResponse);
    return static_cast<const CreateTableRequest *>(d->request);
}

/**
 * @brief  Parse a Glue CreateTable response.
 *
 * @param  response  Response to parse.
 */
void CreateTableResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateTableResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateTableResponsePrivate
 *
 * @brief  Private implementation for CreateTableResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateTableResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateTableResponse instance.
 */
CreateTableResponsePrivate::CreateTableResponsePrivate(
    CreateTableResponse * const q) : GlueResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glue CreateTableResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateTableResponsePrivate::parseCreateTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTableResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
