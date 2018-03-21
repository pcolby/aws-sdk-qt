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

#include "deletebudgetresponse.h"
#include "deletebudgetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Budgets {

/**
 * @class  DeleteBudgetResponse
 *
 * @brief  Handles Budgets DeleteBudget responses.
 *
 * @see    BudgetsClient::deleteBudget
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBudgetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BudgetsResponse(new DeleteBudgetResponsePrivate(this), parent)
{
    setRequest(new DeleteBudgetRequest(request));
    setReply(reply);
}

const DeleteBudgetRequest * DeleteBudgetResponse::request() const
{
    Q_D(const DeleteBudgetResponse);
    return static_cast<const DeleteBudgetRequest *>(d->request);
}

/**
 * @brief  Parse a Budgets DeleteBudget response.
 *
 * @param  response  Response to parse.
 */
void DeleteBudgetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteBudgetResponsePrivate
 *
 * @brief  Private implementation for DeleteBudgetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBudgetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteBudgetResponse instance.
 */
DeleteBudgetResponsePrivate::DeleteBudgetResponsePrivate(
    DeleteBudgetQueueResponse * const q) : DeleteBudgetPrivate(q)
{

}

/**
 * @brief  Parse an Budgets DeleteBudgetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteBudgetResponsePrivate::DeleteBudgetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBudgetResponse"));
    /// @todo
}
