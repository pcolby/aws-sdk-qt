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

#include "putschemafromjsonresponse.h"
#include "putschemafromjsonresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudDirectory {

/**
 * @class  PutSchemaFromJsonResponse
 *
 * @brief  Handles CloudDirectory PutSchemaFromJson responses.
 *
 * @see    CloudDirectoryClient::putSchemaFromJson
 */

/**
 * @brief  Constructs a new PutSchemaFromJsonResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutSchemaFromJsonResponse::PutSchemaFromJsonResponse(
        const PutSchemaFromJsonRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new PutSchemaFromJsonResponsePrivate(this), parent)
{
    setRequest(new PutSchemaFromJsonRequest(request));
    setReply(reply);
}

const PutSchemaFromJsonRequest * PutSchemaFromJsonResponse::request() const
{
    Q_D(const PutSchemaFromJsonResponse);
    return static_cast<const PutSchemaFromJsonRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory PutSchemaFromJson response.
 *
 * @param  response  Response to parse.
 */
void PutSchemaFromJsonResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutSchemaFromJsonResponsePrivate
 *
 * @brief  Private implementation for PutSchemaFromJsonResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutSchemaFromJsonResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutSchemaFromJsonResponse instance.
 */
PutSchemaFromJsonResponsePrivate::PutSchemaFromJsonResponsePrivate(
    PutSchemaFromJsonQueueResponse * const q) : PutSchemaFromJsonPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory PutSchemaFromJsonResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutSchemaFromJsonResponsePrivate::PutSchemaFromJsonResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutSchemaFromJsonResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace AWS
