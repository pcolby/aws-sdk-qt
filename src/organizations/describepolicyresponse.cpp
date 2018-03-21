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

#include "describepolicyresponse.h"
#include "describepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Organizations {

/**
 * @class  DescribePolicyResponse
 *
 * @brief  Handles Organizations DescribePolicy responses.
 *
 * @see    OrganizationsClient::describePolicy
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribePolicyResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new DescribePolicyResponsePrivate(this), parent)
{
    setRequest(new DescribePolicyRequest(request));
    setReply(reply);
}

const DescribePolicyRequest * DescribePolicyResponse::request() const
{
    Q_D(const DescribePolicyResponse);
    return static_cast<const DescribePolicyRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations DescribePolicy response.
 *
 * @param  response  Response to parse.
 */
void DescribePolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribePolicyResponsePrivate
 *
 * @brief  Private implementation for DescribePolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribePolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribePolicyResponse instance.
 */
DescribePolicyResponsePrivate::DescribePolicyResponsePrivate(
    DescribePolicyQueueResponse * const q) : DescribePolicyPrivate(q)
{

}

/**
 * @brief  Parse an Organizations DescribePolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribePolicyResponsePrivate::DescribePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePolicyResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace AWS
