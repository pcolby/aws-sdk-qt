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

#include "getsqlinjectionmatchsetresponse.h"
#include "getsqlinjectionmatchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAF {

/**
 * @class  GetSqlInjectionMatchSetResponse
 *
 * @brief  Handles WAF GetSqlInjectionMatchSet responses.
 *
 * @see    WAFClient::getSqlInjectionMatchSet
 */

/**
 * @brief  Constructs a new GetSqlInjectionMatchSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSqlInjectionMatchSetResponse::GetSqlInjectionMatchSetResponse(
        const GetSqlInjectionMatchSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new GetSqlInjectionMatchSetResponsePrivate(this), parent)
{
    setRequest(new GetSqlInjectionMatchSetRequest(request));
    setReply(reply);
}

const GetSqlInjectionMatchSetRequest * GetSqlInjectionMatchSetResponse::request() const
{
    Q_D(const GetSqlInjectionMatchSetResponse);
    return static_cast<const GetSqlInjectionMatchSetRequest *>(d->request);
}

/**
 * @brief  Parse a WAF GetSqlInjectionMatchSet response.
 *
 * @param  response  Response to parse.
 */
void GetSqlInjectionMatchSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetSqlInjectionMatchSetResponsePrivate
 *
 * @brief  Private implementation for GetSqlInjectionMatchSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSqlInjectionMatchSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetSqlInjectionMatchSetResponse instance.
 */
GetSqlInjectionMatchSetResponsePrivate::GetSqlInjectionMatchSetResponsePrivate(
    GetSqlInjectionMatchSetQueueResponse * const q) : GetSqlInjectionMatchSetPrivate(q)
{

}

/**
 * @brief  Parse an WAF GetSqlInjectionMatchSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetSqlInjectionMatchSetResponsePrivate::GetSqlInjectionMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSqlInjectionMatchSetResponse"));
    /// @todo
}

} // namespace WAF
} // namespace AWS
