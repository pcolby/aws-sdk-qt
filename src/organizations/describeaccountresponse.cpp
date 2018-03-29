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

#include "describeaccountresponse.h"
#include "describeaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Organizations {

/**
 * @class  DescribeAccountResponse
 *
 * @brief  Handles Organizations DescribeAccount responses.
 *
 * @see    OrganizationsClient::describeAccount
 */

/**
 * @brief  Constructs a new DescribeAccountResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAccountResponse::DescribeAccountResponse(
        const DescribeAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new DescribeAccountResponsePrivate(this), parent)
{
    setRequest(new DescribeAccountRequest(request));
    setReply(reply);
}

const DescribeAccountRequest * DescribeAccountResponse::request() const
{
    Q_D(const DescribeAccountResponse);
    return static_cast<const DescribeAccountRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations DescribeAccount response.
 *
 * @param  response  Response to parse.
 */
void DescribeAccountResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAccountResponsePrivate
 *
 * @brief  Private implementation for DescribeAccountResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAccountResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAccountResponse instance.
 */
DescribeAccountResponsePrivate::DescribeAccountResponsePrivate(
    DescribeAccountQueueResponse * const q) : DescribeAccountPrivate(q)
{

}

/**
 * @brief  Parse an Organizations DescribeAccountResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAccountResponsePrivate::DescribeAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAccountResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace AWS
