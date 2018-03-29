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

#include "describenotificationsforbudgetresponse.h"
#include "describenotificationsforbudgetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Budgets {

/**
 * @class  DescribeNotificationsForBudgetResponse
 *
 * @brief  Handles Budgets DescribeNotificationsForBudget responses.
 *
 * @see    BudgetsClient::describeNotificationsForBudget
 */

/**
 * @brief  Constructs a new DescribeNotificationsForBudgetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeNotificationsForBudgetResponse::DescribeNotificationsForBudgetResponse(
        const DescribeNotificationsForBudgetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BudgetsResponse(new DescribeNotificationsForBudgetResponsePrivate(this), parent)
{
    setRequest(new DescribeNotificationsForBudgetRequest(request));
    setReply(reply);
}

const DescribeNotificationsForBudgetRequest * DescribeNotificationsForBudgetResponse::request() const
{
    Q_D(const DescribeNotificationsForBudgetResponse);
    return static_cast<const DescribeNotificationsForBudgetRequest *>(d->request);
}

/**
 * @brief  Parse a Budgets DescribeNotificationsForBudget response.
 *
 * @param  response  Response to parse.
 */
void DescribeNotificationsForBudgetResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeNotificationsForBudgetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeNotificationsForBudgetResponsePrivate
 *
 * @brief  Private implementation for DescribeNotificationsForBudgetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeNotificationsForBudgetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeNotificationsForBudgetResponse instance.
 */
DescribeNotificationsForBudgetResponsePrivate::DescribeNotificationsForBudgetResponsePrivate(
    DescribeNotificationsForBudgetResponse * const q) : BudgetsResponsePrivate(q)
{

}

/**
 * @brief  Parse an Budgets DescribeNotificationsForBudgetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeNotificationsForBudgetResponsePrivate::parseDescribeNotificationsForBudgetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeNotificationsForBudgetResponse"));
    /// @todo
}

} // namespace Budgets
} // namespace QtAws
