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

#include "describefleetsresponse.h"
#include "describefleetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/**
 * @class  DescribeFleetsResponse
 *
 * @brief  Handles AppStream DescribeFleets responses.
 *
 * @see    AppStreamClient::describeFleets
 */

/**
 * @brief  Constructs a new DescribeFleetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeFleetsResponse::DescribeFleetsResponse(
        const DescribeFleetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new DescribeFleetsResponsePrivate(this), parent)
{
    setRequest(new DescribeFleetsRequest(request));
    setReply(reply);
}

const DescribeFleetsRequest * DescribeFleetsResponse::request() const
{
    Q_D(const DescribeFleetsResponse);
    return static_cast<const DescribeFleetsRequest *>(d->request);
}

/**
 * @brief  Parse a AppStream DescribeFleets response.
 *
 * @param  response  Response to parse.
 */
void DescribeFleetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeFleetsResponsePrivate
 *
 * @brief  Private implementation for DescribeFleetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFleetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeFleetsResponse instance.
 */
DescribeFleetsResponsePrivate::DescribeFleetsResponsePrivate(
    DescribeFleetsQueueResponse * const q) : DescribeFleetsPrivate(q)
{

}

/**
 * @brief  Parse an AppStream DescribeFleetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeFleetsResponsePrivate::DescribeFleetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFleetsResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace QtAws
