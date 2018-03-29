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

#include "startcontentmoderationresponse.h"
#include "startcontentmoderationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/**
 * @class  StartContentModerationResponse
 *
 * @brief  Handles Rekognition StartContentModeration responses.
 *
 * @see    RekognitionClient::startContentModeration
 */

/**
 * @brief  Constructs a new StartContentModerationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartContentModerationResponse::StartContentModerationResponse(
        const StartContentModerationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new StartContentModerationResponsePrivate(this), parent)
{
    setRequest(new StartContentModerationRequest(request));
    setReply(reply);
}

const StartContentModerationRequest * StartContentModerationResponse::request() const
{
    Q_D(const StartContentModerationResponse);
    return static_cast<const StartContentModerationRequest *>(d->request);
}

/**
 * @brief  Parse a Rekognition StartContentModeration response.
 *
 * @param  response  Response to parse.
 */
void StartContentModerationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartContentModerationResponsePrivate
 *
 * @brief  Private implementation for StartContentModerationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartContentModerationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartContentModerationResponse instance.
 */
StartContentModerationResponsePrivate::StartContentModerationResponsePrivate(
    StartContentModerationResponse * const q) : RekognitionResponsePrivate(q)
{

}

/**
 * @brief  Parse an Rekognition StartContentModerationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartContentModerationResponsePrivate::StartContentModerationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartContentModerationResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace QtAws
