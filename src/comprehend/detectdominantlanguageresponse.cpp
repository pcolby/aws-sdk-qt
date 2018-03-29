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

#include "detectdominantlanguageresponse.h"
#include "detectdominantlanguageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/**
 * @class  DetectDominantLanguageResponse
 *
 * @brief  Handles Comprehend DetectDominantLanguage responses.
 *
 * @see    ComprehendClient::detectDominantLanguage
 */

/**
 * @brief  Constructs a new DetectDominantLanguageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetectDominantLanguageResponse::DetectDominantLanguageResponse(
        const DetectDominantLanguageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new DetectDominantLanguageResponsePrivate(this), parent)
{
    setRequest(new DetectDominantLanguageRequest(request));
    setReply(reply);
}

const DetectDominantLanguageRequest * DetectDominantLanguageResponse::request() const
{
    Q_D(const DetectDominantLanguageResponse);
    return static_cast<const DetectDominantLanguageRequest *>(d->request);
}

/**
 * @brief  Parse a Comprehend DetectDominantLanguage response.
 *
 * @param  response  Response to parse.
 */
void DetectDominantLanguageResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DetectDominantLanguageResponsePrivate
 *
 * @brief  Private implementation for DetectDominantLanguageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetectDominantLanguageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DetectDominantLanguageResponse instance.
 */
DetectDominantLanguageResponsePrivate::DetectDominantLanguageResponsePrivate(
    DetectDominantLanguageQueueResponse * const q) : DetectDominantLanguagePrivate(q)
{

}

/**
 * @brief  Parse an Comprehend DetectDominantLanguageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DetectDominantLanguageResponsePrivate::DetectDominantLanguageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetectDominantLanguageResponse"));
    /// @todo
}

} // namespace Comprehend
} // namespace QtAws
