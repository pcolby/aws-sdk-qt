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

#include "translatetextresponse.h"
#include "translatetextresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Translate {

/**
 * @class  TranslateTextResponse
 *
 * @brief  Handles Translate TranslateText responses.
 *
 * @see    TranslateClient::translateText
 */

/**
 * @brief  Constructs a new TranslateTextResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TranslateTextResponse::TranslateTextResponse(
        const TranslateTextRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranslateResponse(new TranslateTextResponsePrivate(this), parent)
{
    setRequest(new TranslateTextRequest(request));
    setReply(reply);
}

const TranslateTextRequest * TranslateTextResponse::request() const
{
    Q_D(const TranslateTextResponse);
    return static_cast<const TranslateTextRequest *>(d->request);
}

/**
 * @brief  Parse a Translate TranslateText response.
 *
 * @param  response  Response to parse.
 */
void TranslateTextResponse::parseSuccess(QIODevice &response)
{
    Q_D(TranslateTextResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  TranslateTextResponsePrivate
 *
 * @brief  Private implementation for TranslateTextResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TranslateTextResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TranslateTextResponse instance.
 */
TranslateTextResponsePrivate::TranslateTextResponsePrivate(
    TranslateTextResponse * const q) : TranslateResponsePrivate(q)
{

}

/**
 * @brief  Parse an Translate TranslateTextResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void TranslateTextResponsePrivate::TranslateTextResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TranslateTextResponse"));
    /// @todo
}

} // namespace Translate
} // namespace QtAws
