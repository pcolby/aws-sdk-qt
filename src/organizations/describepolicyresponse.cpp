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

#include "describepolicyresponse.h"
#include "describepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Organizations {

/**
 * @class  DescribePolicyResponse
 *
 * @brief  Handles Organizations DescribePolicy responses.
 *
 * @see    OrganizationsClient::describePolicy
 */

/**
 * @brief  Constructs a new DescribePolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribePolicyResponse::DescribePolicyResponse(
        const DescribePolicyRequest &request,
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
} // namespace QtAws
