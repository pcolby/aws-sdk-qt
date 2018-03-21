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

#include "deleteruleresponse.h"
#include "deleteruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAF {

/**
 * @class  DeleteRuleResponse
 *
 * @brief  Handles WAF DeleteRule responses.
 *
 * @see    WAFClient::deleteRule
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteRuleResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new DeleteRuleResponsePrivate(this), parent)
{
    setRequest(new DeleteRuleRequest(request));
    setReply(reply);
}

const DeleteRuleRequest * DeleteRuleResponse::request() const
{
    Q_D(const DeleteRuleResponse);
    return static_cast<const DeleteRuleRequest *>(d->request);
}

/**
 * @brief  Parse a WAF DeleteRule response.
 *
 * @param  response  Response to parse.
 */
void DeleteRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteRuleResponsePrivate
 *
 * @brief  Private implementation for DeleteRuleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRuleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteRuleResponse instance.
 */
DeleteRuleResponsePrivate::DeleteRuleResponsePrivate(
    DeleteRuleQueueResponse * const q) : DeleteRulePrivate(q)
{

}

/**
 * @brief  Parse an WAF DeleteRuleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteRuleResponsePrivate::DeleteRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRuleResponse"));
    /// @todo
}
