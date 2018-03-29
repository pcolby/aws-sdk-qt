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

#include "detectentitiesresponse.h"
#include "detectentitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/**
 * @class  DetectEntitiesResponse
 *
 * @brief  Handles Comprehend DetectEntities responses.
 *
 * @see    ComprehendClient::detectEntities
 */

/**
 * @brief  Constructs a new DetectEntitiesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetectEntitiesResponse::DetectEntitiesResponse(
        const DetectEntitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new DetectEntitiesResponsePrivate(this), parent)
{
    setRequest(new DetectEntitiesRequest(request));
    setReply(reply);
}

const DetectEntitiesRequest * DetectEntitiesResponse::request() const
{
    Q_D(const DetectEntitiesResponse);
    return static_cast<const DetectEntitiesRequest *>(d->request);
}

/**
 * @brief  Parse a Comprehend DetectEntities response.
 *
 * @param  response  Response to parse.
 */
void DetectEntitiesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DetectEntitiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DetectEntitiesResponsePrivate
 *
 * @brief  Private implementation for DetectEntitiesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetectEntitiesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DetectEntitiesResponse instance.
 */
DetectEntitiesResponsePrivate::DetectEntitiesResponsePrivate(
    DetectEntitiesResponse * const q) : ComprehendResponsePrivate(q)
{

}

/**
 * @brief  Parse an Comprehend DetectEntitiesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DetectEntitiesResponsePrivate::parseDetectEntitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetectEntitiesResponse"));
    /// @todo
}

} // namespace Comprehend
} // namespace QtAws
