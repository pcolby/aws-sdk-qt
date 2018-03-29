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

#include "detectkeyphrasesresponse.h"
#include "detectkeyphrasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/**
 * @class  DetectKeyPhrasesResponse
 *
 * @brief  Handles Comprehend DetectKeyPhrases responses.
 *
 * @see    ComprehendClient::detectKeyPhrases
 */

/**
 * @brief  Constructs a new DetectKeyPhrasesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetectKeyPhrasesResponse::DetectKeyPhrasesResponse(
        const DetectKeyPhrasesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new DetectKeyPhrasesResponsePrivate(this), parent)
{
    setRequest(new DetectKeyPhrasesRequest(request));
    setReply(reply);
}

const DetectKeyPhrasesRequest * DetectKeyPhrasesResponse::request() const
{
    Q_D(const DetectKeyPhrasesResponse);
    return static_cast<const DetectKeyPhrasesRequest *>(d->request);
}

/**
 * @brief  Parse a Comprehend DetectKeyPhrases response.
 *
 * @param  response  Response to parse.
 */
void DetectKeyPhrasesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DetectKeyPhrasesResponsePrivate
 *
 * @brief  Private implementation for DetectKeyPhrasesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetectKeyPhrasesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DetectKeyPhrasesResponse instance.
 */
DetectKeyPhrasesResponsePrivate::DetectKeyPhrasesResponsePrivate(
    DetectKeyPhrasesQueueResponse * const q) : DetectKeyPhrasesPrivate(q)
{

}

/**
 * @brief  Parse an Comprehend DetectKeyPhrasesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DetectKeyPhrasesResponsePrivate::DetectKeyPhrasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetectKeyPhrasesResponse"));
    /// @todo
}

} // namespace Comprehend
} // namespace QtAws
