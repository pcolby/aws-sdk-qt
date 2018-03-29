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

#include "describeservicesresponse.h"
#include "describeservicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Support {

/**
 * @class  DescribeServicesResponse
 *
 * @brief  Handles Support DescribeServices responses.
 *
 * @see    SupportClient::describeServices
 */

/**
 * @brief  Constructs a new DescribeServicesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeServicesResponse::DescribeServicesResponse(
        const DescribeServicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SupportResponse(new DescribeServicesResponsePrivate(this), parent)
{
    setRequest(new DescribeServicesRequest(request));
    setReply(reply);
}

const DescribeServicesRequest * DescribeServicesResponse::request() const
{
    Q_D(const DescribeServicesResponse);
    return static_cast<const DescribeServicesRequest *>(d->request);
}

/**
 * @brief  Parse a Support DescribeServices response.
 *
 * @param  response  Response to parse.
 */
void DescribeServicesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeServicesResponsePrivate
 *
 * @brief  Private implementation for DescribeServicesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeServicesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeServicesResponse instance.
 */
DescribeServicesResponsePrivate::DescribeServicesResponsePrivate(
    DescribeServicesResponse * const q) : SupportResponsePrivate(q)
{

}

/**
 * @brief  Parse an Support DescribeServicesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeServicesResponsePrivate::DescribeServicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeServicesResponse"));
    /// @todo
}

} // namespace Support
} // namespace QtAws
