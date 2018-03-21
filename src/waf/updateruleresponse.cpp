/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updateruleresponse.h"
#include "updateruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAF {

/**
 * @class  UpdateRuleResponse
 *
 * @brief  Handles WAF UpdateRule responses.
 *
 * @see    WAFClient::updateRule
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateRuleResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new UpdateRuleResponsePrivate(this), parent)
{
    setRequest(new UpdateRuleRequest(request));
    setReply(reply);
}

const UpdateRuleRequest * UpdateRuleResponse::request() const
{
    Q_D(const UpdateRuleResponse);
    return static_cast<const UpdateRuleRequest *>(d->request);
}

/**
 * @brief  Parse a WAF UpdateRule response.
 *
 * @param  response  Response to parse.
 */
void UpdateRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateRuleResponsePrivate
 *
 * @brief  Private implementation for UpdateRuleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRuleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateRuleResponse instance.
 */
UpdateRuleResponsePrivate::UpdateRuleResponsePrivate(
    UpdateRuleQueueResponse * const q) : UpdateRulePrivate(q)
{

}

/**
 * @brief  Parse an WAF UpdateRuleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateRuleResponsePrivate::UpdateRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRuleResponse"));
    /// @todo
}

} // namespace WAF
} // namespace AWS
