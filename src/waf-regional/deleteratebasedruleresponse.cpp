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

#include "deleteratebasedruleresponse.h"
#include "deleteratebasedruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAFRegional {

/**
 * @class  DeleteRateBasedRuleResponse
 *
 * @brief  Handles WAFRegional DeleteRateBasedRule responses.
 *
 * @see    WAFRegionalClient::deleteRateBasedRule
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteRateBasedRuleResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new DeleteRateBasedRuleResponsePrivate(this), parent)
{
    setRequest(new DeleteRateBasedRuleRequest(request));
    setReply(reply);
}

const DeleteRateBasedRuleRequest * DeleteRateBasedRuleResponse::request() const
{
    Q_D(const DeleteRateBasedRuleResponse);
    return static_cast<const DeleteRateBasedRuleRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional DeleteRateBasedRule response.
 *
 * @param  response  Response to parse.
 */
void DeleteRateBasedRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteRateBasedRuleResponsePrivate
 *
 * @brief  Private implementation for DeleteRateBasedRuleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRateBasedRuleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteRateBasedRuleResponse instance.
 */
DeleteRateBasedRuleResponsePrivate::DeleteRateBasedRuleResponsePrivate(
    DeleteRateBasedRuleQueueResponse * const q) : DeleteRateBasedRulePrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional DeleteRateBasedRuleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteRateBasedRuleResponsePrivate::DeleteRateBasedRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRateBasedRuleResponse"));
    /// @todo
}
