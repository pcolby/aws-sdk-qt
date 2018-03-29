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

#include "getregexpatternsetresponse.h"
#include "getregexpatternsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAFRegional {

/**
 * @class  GetRegexPatternSetResponse
 *
 * @brief  Handles WAFRegional GetRegexPatternSet responses.
 *
 * @see    WAFRegionalClient::getRegexPatternSet
 */

/**
 * @brief  Constructs a new GetRegexPatternSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetRegexPatternSetResponse::GetRegexPatternSetResponse(
        const GetRegexPatternSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new GetRegexPatternSetResponsePrivate(this), parent)
{
    setRequest(new GetRegexPatternSetRequest(request));
    setReply(reply);
}

const GetRegexPatternSetRequest * GetRegexPatternSetResponse::request() const
{
    Q_D(const GetRegexPatternSetResponse);
    return static_cast<const GetRegexPatternSetRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional GetRegexPatternSet response.
 *
 * @param  response  Response to parse.
 */
void GetRegexPatternSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetRegexPatternSetResponsePrivate
 *
 * @brief  Private implementation for GetRegexPatternSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRegexPatternSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetRegexPatternSetResponse instance.
 */
GetRegexPatternSetResponsePrivate::GetRegexPatternSetResponsePrivate(
    GetRegexPatternSetQueueResponse * const q) : GetRegexPatternSetPrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional GetRegexPatternSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetRegexPatternSetResponsePrivate::GetRegexPatternSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRegexPatternSetResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace AWS
