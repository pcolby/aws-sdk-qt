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

#include "describestacksummaryresponse.h"
#include "describestacksummaryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  DescribeStackSummaryResponse
 *
 * @brief  Handles OpsWorks DescribeStackSummary responses.
 *
 * @see    OpsWorksClient::describeStackSummary
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeStackSummaryResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new DescribeStackSummaryResponsePrivate(this), parent)
{
    setRequest(new DescribeStackSummaryRequest(request));
    setReply(reply);
}

const DescribeStackSummaryRequest * DescribeStackSummaryResponse::request() const
{
    Q_D(const DescribeStackSummaryResponse);
    return static_cast<const DescribeStackSummaryRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks DescribeStackSummary response.
 *
 * @param  response  Response to parse.
 */
void DescribeStackSummaryResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeStackSummaryResponsePrivate
 *
 * @brief  Private implementation for DescribeStackSummaryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStackSummaryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeStackSummaryResponse instance.
 */
DescribeStackSummaryResponsePrivate::DescribeStackSummaryResponsePrivate(
    DescribeStackSummaryQueueResponse * const q) : DescribeStackSummaryPrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks DescribeStackSummaryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeStackSummaryResponsePrivate::DescribeStackSummaryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStackSummaryResponse"));
    /// @todo
}
