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

#include "getregexmatchsetresponse.h"
#include "getregexmatchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAFRegional {

/**
 * @class  GetRegexMatchSetResponse
 *
 * @brief  Handles WAFRegional GetRegexMatchSet responses.
 *
 * @see    WAFRegionalClient::getRegexMatchSet
 */

/**
 * @brief  Constructs a new GetRegexMatchSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetRegexMatchSetResponse::GetRegexMatchSetResponse(
        const GetRegexMatchSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new GetRegexMatchSetResponsePrivate(this), parent)
{
    setRequest(new GetRegexMatchSetRequest(request));
    setReply(reply);
}

const GetRegexMatchSetRequest * GetRegexMatchSetResponse::request() const
{
    Q_D(const GetRegexMatchSetResponse);
    return static_cast<const GetRegexMatchSetRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional GetRegexMatchSet response.
 *
 * @param  response  Response to parse.
 */
void GetRegexMatchSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetRegexMatchSetResponsePrivate
 *
 * @brief  Private implementation for GetRegexMatchSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRegexMatchSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetRegexMatchSetResponse instance.
 */
GetRegexMatchSetResponsePrivate::GetRegexMatchSetResponsePrivate(
    GetRegexMatchSetQueueResponse * const q) : GetRegexMatchSetPrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional GetRegexMatchSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetRegexMatchSetResponsePrivate::GetRegexMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRegexMatchSetResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace AWS
