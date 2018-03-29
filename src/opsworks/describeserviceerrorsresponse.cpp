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

#include "describeserviceerrorsresponse.h"
#include "describeserviceerrorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  DescribeServiceErrorsResponse
 *
 * @brief  Handles OpsWorks DescribeServiceErrors responses.
 *
 * @see    OpsWorksClient::describeServiceErrors
 */

/**
 * @brief  Constructs a new DescribeServiceErrorsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeServiceErrorsResponse::DescribeServiceErrorsResponse(
        const DescribeServiceErrorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new DescribeServiceErrorsResponsePrivate(this), parent)
{
    setRequest(new DescribeServiceErrorsRequest(request));
    setReply(reply);
}

const DescribeServiceErrorsRequest * DescribeServiceErrorsResponse::request() const
{
    Q_D(const DescribeServiceErrorsResponse);
    return static_cast<const DescribeServiceErrorsRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks DescribeServiceErrors response.
 *
 * @param  response  Response to parse.
 */
void DescribeServiceErrorsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeServiceErrorsResponsePrivate
 *
 * @brief  Private implementation for DescribeServiceErrorsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeServiceErrorsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeServiceErrorsResponse instance.
 */
DescribeServiceErrorsResponsePrivate::DescribeServiceErrorsResponsePrivate(
    DescribeServiceErrorsQueueResponse * const q) : DescribeServiceErrorsPrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks DescribeServiceErrorsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeServiceErrorsResponsePrivate::DescribeServiceErrorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeServiceErrorsResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace AWS
