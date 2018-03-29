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

#include "createbudgetresponse.h"
#include "createbudgetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Budgets {

/**
 * @class  CreateBudgetResponse
 *
 * @brief  Handles Budgets CreateBudget responses.
 *
 * @see    BudgetsClient::createBudget
 */

/**
 * @brief  Constructs a new CreateBudgetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateBudgetResponse::CreateBudgetResponse(
        const CreateBudgetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateBudgetResponse(new CreateBudgetResponsePrivate(this), parent)
{
    setRequest(new CreateBudgetRequest(request));
    setReply(reply);
}

const CreateBudgetRequest * CreateBudgetResponse::request() const
{
    Q_D(const CreateBudgetResponse);
    return static_cast<const CreateBudgetRequest *>(d->request);
}

/**
 * @brief  Parse a Budgets CreateBudget response.
 *
 * @param  response  Response to parse.
 */
void CreateBudgetResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateBudgetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateBudgetResponsePrivate
 *
 * @brief  Private implementation for CreateBudgetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateBudgetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateBudgetResponse instance.
 */
CreateBudgetResponsePrivate::CreateBudgetResponsePrivate(
    CreateBudgetResponse * const q) : BudgetsResponsePrivate(q)
{

}

/**
 * @brief  Parse an Budgets CreateBudgetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateBudgetResponsePrivate::parseCreateBudgetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBudgetResponse"));
    /// @todo
}

} // namespace Budgets
} // namespace QtAws
