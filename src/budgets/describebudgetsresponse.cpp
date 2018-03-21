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

#include "describebudgetsresponse.h"
#include "describebudgetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Budgets {

/**
 * @class  DescribeBudgetsResponse
 *
 * @brief  Handles Budgets DescribeBudgets responses.
 *
 * @see    BudgetsClient::describeBudgets
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeBudgetsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BudgetsResponse(new DescribeBudgetsResponsePrivate(this), parent)
{
    setRequest(new DescribeBudgetsRequest(request));
    setReply(reply);
}

const DescribeBudgetsRequest * DescribeBudgetsResponse::request() const
{
    Q_D(const DescribeBudgetsResponse);
    return static_cast<const DescribeBudgetsRequest *>(d->request);
}

/**
 * @brief  Parse a Budgets DescribeBudgets response.
 *
 * @param  response  Response to parse.
 */
void DescribeBudgetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeBudgetsResponsePrivate
 *
 * @brief  Private implementation for DescribeBudgetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeBudgetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeBudgetsResponse instance.
 */
DescribeBudgetsResponsePrivate::DescribeBudgetsResponsePrivate(
    DescribeBudgetsQueueResponse * const q) : DescribeBudgetsPrivate(q)
{

}

/**
 * @brief  Parse an Budgets DescribeBudgetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeBudgetsResponsePrivate::DescribeBudgetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBudgetsResponse"));
    /// @todo
}

} // namespace Budgets
} // namespace AWS
