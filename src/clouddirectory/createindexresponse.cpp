/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createindexresponse.h"
#include "createindexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudDirectory {

/**
 * @class  CreateIndexResponse
 *
 * @brief  Handles CloudDirectory CreateIndex responses.
 *
 * @see    CloudDirectoryClient::createIndex
 */

/**
 * @brief  Constructs a new CreateIndexResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateIndexResponse::CreateIndexResponse(
        const CreateIndexRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new CreateIndexResponsePrivate(this), parent)
{
    setRequest(new CreateIndexRequest(request));
    setReply(reply);
}

const CreateIndexRequest * CreateIndexResponse::request() const
{
    Q_D(const CreateIndexResponse);
    return static_cast<const CreateIndexRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory CreateIndex response.
 *
 * @param  response  Response to parse.
 */
void CreateIndexResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateIndexResponsePrivate
 *
 * @brief  Private implementation for CreateIndexResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateIndexResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateIndexResponse instance.
 */
CreateIndexResponsePrivate::CreateIndexResponsePrivate(
    CreateIndexQueueResponse * const q) : CreateIndexPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory CreateIndexResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateIndexResponsePrivate::CreateIndexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateIndexResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace AWS
