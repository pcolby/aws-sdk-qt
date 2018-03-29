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

#include "updateratebasedruleresponse.h"
#include "updateratebasedruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFRegional {

/**
 * @class  UpdateRateBasedRuleResponse
 *
 * @brief  Handles WAFRegional UpdateRateBasedRule responses.
 *
 * @see    WAFRegionalClient::updateRateBasedRule
 */

/**
 * @brief  Constructs a new UpdateRateBasedRuleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateRateBasedRuleResponse::UpdateRateBasedRuleResponse(
        const UpdateRateBasedRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new UpdateRateBasedRuleResponsePrivate(this), parent)
{
    setRequest(new UpdateRateBasedRuleRequest(request));
    setReply(reply);
}

const UpdateRateBasedRuleRequest * UpdateRateBasedRuleResponse::request() const
{
    Q_D(const UpdateRateBasedRuleResponse);
    return static_cast<const UpdateRateBasedRuleRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional UpdateRateBasedRule response.
 *
 * @param  response  Response to parse.
 */
void UpdateRateBasedRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateRateBasedRuleResponsePrivate
 *
 * @brief  Private implementation for UpdateRateBasedRuleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRateBasedRuleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateRateBasedRuleResponse instance.
 */
UpdateRateBasedRuleResponsePrivate::UpdateRateBasedRuleResponsePrivate(
    UpdateRateBasedRuleQueueResponse * const q) : UpdateRateBasedRulePrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional UpdateRateBasedRuleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateRateBasedRuleResponsePrivate::UpdateRateBasedRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRateBasedRuleResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace QtAws
