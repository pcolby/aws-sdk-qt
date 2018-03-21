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

#include "updatebudgetresponse.h"
#include "updatebudgetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Budgets {

/**
 * @class  UpdateBudgetResponse
 *
 * @brief  Handles Budgets UpdateBudget responses.
 *
 * @see    BudgetsClient::updateBudget
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateBudgetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BudgetsResponse(new UpdateBudgetResponsePrivate(this), parent)
{
    setRequest(new UpdateBudgetRequest(request));
    setReply(reply);
}

const UpdateBudgetRequest * UpdateBudgetResponse::request() const
{
    Q_D(const UpdateBudgetResponse);
    return static_cast<const UpdateBudgetRequest *>(d->request);
}

/**
 * @brief  Parse a Budgets UpdateBudget response.
 *
 * @param  response  Response to parse.
 */
void UpdateBudgetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateBudgetResponsePrivate
 *
 * @brief  Private implementation for UpdateBudgetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateBudgetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateBudgetResponse instance.
 */
UpdateBudgetResponsePrivate::UpdateBudgetResponsePrivate(
    UpdateBudgetQueueResponse * const q) : UpdateBudgetPrivate(q)
{

}

/**
 * @brief  Parse an Budgets UpdateBudgetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateBudgetResponsePrivate::UpdateBudgetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBudgetResponse"));
    /// @todo
}

} // namespace Budgets
} // namespace AWS
