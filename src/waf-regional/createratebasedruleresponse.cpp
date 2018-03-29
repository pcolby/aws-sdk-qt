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

#include "createratebasedruleresponse.h"
#include "createratebasedruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAFRegional {

/**
 * @class  CreateRateBasedRuleResponse
 *
 * @brief  Handles WAFRegional CreateRateBasedRule responses.
 *
 * @see    WAFRegionalClient::createRateBasedRule
 */

/**
 * @brief  Constructs a new CreateRateBasedRuleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateRateBasedRuleResponse::CreateRateBasedRuleResponse(
        const CreateRateBasedRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new CreateRateBasedRuleResponsePrivate(this), parent)
{
    setRequest(new CreateRateBasedRuleRequest(request));
    setReply(reply);
}

const CreateRateBasedRuleRequest * CreateRateBasedRuleResponse::request() const
{
    Q_D(const CreateRateBasedRuleResponse);
    return static_cast<const CreateRateBasedRuleRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional CreateRateBasedRule response.
 *
 * @param  response  Response to parse.
 */
void CreateRateBasedRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateRateBasedRuleResponsePrivate
 *
 * @brief  Private implementation for CreateRateBasedRuleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateRateBasedRuleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateRateBasedRuleResponse instance.
 */
CreateRateBasedRuleResponsePrivate::CreateRateBasedRuleResponsePrivate(
    CreateRateBasedRuleQueueResponse * const q) : CreateRateBasedRulePrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional CreateRateBasedRuleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateRateBasedRuleResponsePrivate::CreateRateBasedRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRateBasedRuleResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace AWS
