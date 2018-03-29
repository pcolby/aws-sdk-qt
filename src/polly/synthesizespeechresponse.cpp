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

#include "synthesizespeechresponse.h"
#include "synthesizespeechresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Polly {

/**
 * @class  SynthesizeSpeechResponse
 *
 * @brief  Handles Polly SynthesizeSpeech responses.
 *
 * @see    PollyClient::synthesizeSpeech
 */

/**
 * @brief  Constructs a new SynthesizeSpeechResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SynthesizeSpeechResponse::SynthesizeSpeechResponse(
        const SynthesizeSpeechRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PollyResponse(new SynthesizeSpeechResponsePrivate(this), parent)
{
    setRequest(new SynthesizeSpeechRequest(request));
    setReply(reply);
}

const SynthesizeSpeechRequest * SynthesizeSpeechResponse::request() const
{
    Q_D(const SynthesizeSpeechResponse);
    return static_cast<const SynthesizeSpeechRequest *>(d->request);
}

/**
 * @brief  Parse a Polly SynthesizeSpeech response.
 *
 * @param  response  Response to parse.
 */
void SynthesizeSpeechResponse::parseSuccess(QIODevice &response)
{
    Q_D(SynthesizeSpeechResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SynthesizeSpeechResponsePrivate
 *
 * @brief  Private implementation for SynthesizeSpeechResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SynthesizeSpeechResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SynthesizeSpeechResponse instance.
 */
SynthesizeSpeechResponsePrivate::SynthesizeSpeechResponsePrivate(
    SynthesizeSpeechResponse * const q) : PollyResponsePrivate(q)
{

}

/**
 * @brief  Parse an Polly SynthesizeSpeechResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SynthesizeSpeechResponsePrivate::parseSynthesizeSpeechResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SynthesizeSpeechResponse"));
    /// @todo
}

} // namespace Polly
} // namespace QtAws
