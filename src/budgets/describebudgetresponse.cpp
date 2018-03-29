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

#include "describebudgetresponse.h"
#include "describebudgetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Budgets {

/**
 * @class  DescribeBudgetResponse
 *
 * @brief  Handles Budgets DescribeBudget responses.
 *
 * @see    BudgetsClient::describeBudget
 */

/**
 * @brief  Constructs a new DescribeBudgetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeBudgetResponse::DescribeBudgetResponse(
        const DescribeBudgetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeBudgetResponse(new DescribeBudgetResponsePrivate(this), parent)
{
    setRequest(new DescribeBudgetRequest(request));
    setReply(reply);
}

const DescribeBudgetRequest * DescribeBudgetResponse::request() const
{
    Q_D(const DescribeBudgetResponse);
    return static_cast<const DescribeBudgetRequest *>(d->request);
}

/**
 * @brief  Parse a Budgets DescribeBudget response.
 *
 * @param  response  Response to parse.
 */
void DescribeBudgetResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeBudgetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeBudgetResponsePrivate
 *
 * @brief  Private implementation for DescribeBudgetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeBudgetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeBudgetResponse instance.
 */
DescribeBudgetResponsePrivate::DescribeBudgetResponsePrivate(
    DescribeBudgetResponse * const q) : BudgetsResponsePrivate(q)
{

}

/**
 * @brief  Parse an Budgets DescribeBudgetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeBudgetResponsePrivate::parseDescribeBudgetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBudgetResponse"));
    /// @todo
}

} // namespace Budgets
} // namespace QtAws
