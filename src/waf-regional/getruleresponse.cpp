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

#include "getruleresponse.h"
#include "getruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFRegional {

/**
 * @class  GetRuleResponse
 *
 * @brief  Handles WAFRegional GetRule responses.
 *
 * @see    WAFRegionalClient::getRule
 */

/**
 * @brief  Constructs a new GetRuleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetRuleResponse::GetRuleResponse(
        const GetRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetRuleResponse(new GetRuleResponsePrivate(this), parent)
{
    setRequest(new GetRuleRequest(request));
    setReply(reply);
}

const GetRuleRequest * GetRuleResponse::request() const
{
    Q_D(const GetRuleResponse);
    return static_cast<const GetRuleRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional GetRule response.
 *
 * @param  response  Response to parse.
 */
void GetRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetRuleResponsePrivate
 *
 * @brief  Private implementation for GetRuleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRuleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetRuleResponse instance.
 */
GetRuleResponsePrivate::GetRuleResponsePrivate(
    GetRuleResponse * const q) : WAFRegionalResponsePrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional GetRuleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetRuleResponsePrivate::parseGetRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRuleResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace QtAws
