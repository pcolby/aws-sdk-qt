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

#include "createglobaltableresponse.h"
#include "createglobaltableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDB {

/**
 * @class  CreateGlobalTableResponse
 *
 * @brief  Handles DynamoDB CreateGlobalTable responses.
 *
 * @see    DynamoDBClient::createGlobalTable
 */

/**
 * @brief  Constructs a new CreateGlobalTableResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateGlobalTableResponse::CreateGlobalTableResponse(
        const CreateGlobalTableRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBResponse(new CreateGlobalTableResponsePrivate(this), parent)
{
    setRequest(new CreateGlobalTableRequest(request));
    setReply(reply);
}

const CreateGlobalTableRequest * CreateGlobalTableResponse::request() const
{
    Q_D(const CreateGlobalTableResponse);
    return static_cast<const CreateGlobalTableRequest *>(d->request);
}

/**
 * @brief  Parse a DynamoDB CreateGlobalTable response.
 *
 * @param  response  Response to parse.
 */
void CreateGlobalTableResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateGlobalTableResponsePrivate
 *
 * @brief  Private implementation for CreateGlobalTableResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateGlobalTableResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateGlobalTableResponse instance.
 */
CreateGlobalTableResponsePrivate::CreateGlobalTableResponsePrivate(
    CreateGlobalTableResponse * const q) : DynamoDBResponsePrivate(q)
{

}

/**
 * @brief  Parse an DynamoDB CreateGlobalTableResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateGlobalTableResponsePrivate::CreateGlobalTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateGlobalTableResponse"));
    /// @todo
}

} // namespace DynamoDB
} // namespace QtAws
