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

#include "getlexiconresponse.h"
#include "getlexiconresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Polly {

/**
 * @class  GetLexiconResponse
 *
 * @brief  Handles Polly GetLexicon responses.
 *
 * @see    PollyClient::getLexicon
 */

/**
 * @brief  Constructs a new GetLexiconResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetLexiconResponse::GetLexiconResponse(
        const GetLexiconRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PollyResponse(new GetLexiconResponsePrivate(this), parent)
{
    setRequest(new GetLexiconRequest(request));
    setReply(reply);
}

const GetLexiconRequest * GetLexiconResponse::request() const
{
    Q_D(const GetLexiconResponse);
    return static_cast<const GetLexiconRequest *>(d->request);
}

/**
 * @brief  Parse a Polly GetLexicon response.
 *
 * @param  response  Response to parse.
 */
void GetLexiconResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetLexiconResponsePrivate
 *
 * @brief  Private implementation for GetLexiconResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetLexiconResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetLexiconResponse instance.
 */
GetLexiconResponsePrivate::GetLexiconResponsePrivate(
    GetLexiconResponse * const q) : PollyResponsePrivate(q)
{

}

/**
 * @brief  Parse an Polly GetLexiconResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetLexiconResponsePrivate::GetLexiconResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLexiconResponse"));
    /// @todo
}

} // namespace Polly
} // namespace QtAws
