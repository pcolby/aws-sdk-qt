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

#include "describeavailabilityoptionsresponse.h"
#include "describeavailabilityoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearch {

/**
 * @class  DescribeAvailabilityOptionsResponse
 *
 * @brief  Handles CloudSearch DescribeAvailabilityOptions responses.
 *
 * @see    CloudSearchClient::describeAvailabilityOptions
 */

/**
 * @brief  Constructs a new DescribeAvailabilityOptionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAvailabilityOptionsResponse::DescribeAvailabilityOptionsResponse(
        const DescribeAvailabilityOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new DescribeAvailabilityOptionsResponsePrivate(this), parent)
{
    setRequest(new DescribeAvailabilityOptionsRequest(request));
    setReply(reply);
}

const DescribeAvailabilityOptionsRequest * DescribeAvailabilityOptionsResponse::request() const
{
    Q_D(const DescribeAvailabilityOptionsResponse);
    return static_cast<const DescribeAvailabilityOptionsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudSearch DescribeAvailabilityOptions response.
 *
 * @param  response  Response to parse.
 */
void DescribeAvailabilityOptionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAvailabilityOptionsResponsePrivate
 *
 * @brief  Private implementation for DescribeAvailabilityOptionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAvailabilityOptionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAvailabilityOptionsResponse instance.
 */
DescribeAvailabilityOptionsResponsePrivate::DescribeAvailabilityOptionsResponsePrivate(
    DescribeAvailabilityOptionsResponse * const q) : CloudSearchResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudSearch DescribeAvailabilityOptionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAvailabilityOptionsResponsePrivate::DescribeAvailabilityOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAvailabilityOptionsResponse"));
    /// @todo
}

} // namespace CloudSearch
} // namespace QtAws
