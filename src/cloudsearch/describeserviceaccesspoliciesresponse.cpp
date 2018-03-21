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

#include "describeserviceaccesspoliciesresponse.h"
#include "describeserviceaccesspoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudSearch {

/**
 * @class  DescribeServiceAccessPoliciesResponse
 *
 * @brief  Handles CloudSearch DescribeServiceAccessPolicies responses.
 *
 * @see    CloudSearchClient::describeServiceAccessPolicies
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeServiceAccessPoliciesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new DescribeServiceAccessPoliciesResponsePrivate(this), parent)
{
    setRequest(new DescribeServiceAccessPoliciesRequest(request));
    setReply(reply);
}

const DescribeServiceAccessPoliciesRequest * DescribeServiceAccessPoliciesResponse::request() const
{
    Q_D(const DescribeServiceAccessPoliciesResponse);
    return static_cast<const DescribeServiceAccessPoliciesRequest *>(d->request);
}

/**
 * @brief  Parse a CloudSearch DescribeServiceAccessPolicies response.
 *
 * @param  response  Response to parse.
 */
void DescribeServiceAccessPoliciesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeServiceAccessPoliciesResponsePrivate
 *
 * @brief  Private implementation for DescribeServiceAccessPoliciesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeServiceAccessPoliciesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeServiceAccessPoliciesResponse instance.
 */
DescribeServiceAccessPoliciesResponsePrivate::DescribeServiceAccessPoliciesResponsePrivate(
    DescribeServiceAccessPoliciesQueueResponse * const q) : DescribeServiceAccessPoliciesPrivate(q)
{

}

/**
 * @brief  Parse an CloudSearch DescribeServiceAccessPoliciesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeServiceAccessPoliciesResponsePrivate::DescribeServiceAccessPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeServiceAccessPoliciesResponse"));
    /// @todo
}

} // namespace CloudSearch
} // namespace AWS
