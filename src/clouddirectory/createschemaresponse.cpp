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

#include "createschemaresponse.h"
#include "createschemaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  CreateSchemaResponse
 *
 * @brief  Handles CloudDirectory CreateSchema responses.
 *
 * @see    CloudDirectoryClient::createSchema
 */

/**
 * @brief  Constructs a new CreateSchemaResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateSchemaResponse::CreateSchemaResponse(
        const CreateSchemaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new CreateSchemaResponsePrivate(this), parent)
{
    setRequest(new CreateSchemaRequest(request));
    setReply(reply);
}

const CreateSchemaRequest * CreateSchemaResponse::request() const
{
    Q_D(const CreateSchemaResponse);
    return static_cast<const CreateSchemaRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory CreateSchema response.
 *
 * @param  response  Response to parse.
 */
void CreateSchemaResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateSchemaResponsePrivate
 *
 * @brief  Private implementation for CreateSchemaResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSchemaResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateSchemaResponse instance.
 */
CreateSchemaResponsePrivate::CreateSchemaResponsePrivate(
    CreateSchemaResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory CreateSchemaResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateSchemaResponsePrivate::CreateSchemaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSchemaResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace QtAws
