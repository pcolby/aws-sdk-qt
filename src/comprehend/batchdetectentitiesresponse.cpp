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

#include "batchdetectentitiesresponse.h"
#include "batchdetectentitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/**
 * @class  BatchDetectEntitiesResponse
 *
 * @brief  Handles Comprehend BatchDetectEntities responses.
 *
 * @see    ComprehendClient::batchDetectEntities
 */

/**
 * @brief  Constructs a new BatchDetectEntitiesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchDetectEntitiesResponse::BatchDetectEntitiesResponse(
        const BatchDetectEntitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new BatchDetectEntitiesResponsePrivate(this), parent)
{
    setRequest(new BatchDetectEntitiesRequest(request));
    setReply(reply);
}

const BatchDetectEntitiesRequest * BatchDetectEntitiesResponse::request() const
{
    Q_D(const BatchDetectEntitiesResponse);
    return static_cast<const BatchDetectEntitiesRequest *>(d->request);
}

/**
 * @brief  Parse a Comprehend BatchDetectEntities response.
 *
 * @param  response  Response to parse.
 */
void BatchDetectEntitiesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BatchDetectEntitiesResponsePrivate
 *
 * @brief  Private implementation for BatchDetectEntitiesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchDetectEntitiesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchDetectEntitiesResponse instance.
 */
BatchDetectEntitiesResponsePrivate::BatchDetectEntitiesResponsePrivate(
    BatchDetectEntitiesResponse * const q) : ComprehendResponsePrivate(q)
{

}

/**
 * @brief  Parse an Comprehend BatchDetectEntitiesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchDetectEntitiesResponsePrivate::BatchDetectEntitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDetectEntitiesResponse"));
    /// @todo
}

} // namespace Comprehend
} // namespace QtAws
