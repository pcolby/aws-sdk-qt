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

#include "describeactivitytyperesponse.h"
#include "describeactivitytyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SWF {

/**
 * @class  DescribeActivityTypeResponse
 *
 * @brief  Handles SWF DescribeActivityType responses.
 *
 * @see    SWFClient::describeActivityType
 */

/**
 * @brief  Constructs a new DescribeActivityTypeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeActivityTypeResponse::DescribeActivityTypeResponse(
        const DescribeActivityTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SWFResponse(new DescribeActivityTypeResponsePrivate(this), parent)
{
    setRequest(new DescribeActivityTypeRequest(request));
    setReply(reply);
}

const DescribeActivityTypeRequest * DescribeActivityTypeResponse::request() const
{
    Q_D(const DescribeActivityTypeResponse);
    return static_cast<const DescribeActivityTypeRequest *>(d->request);
}

/**
 * @brief  Parse a SWF DescribeActivityType response.
 *
 * @param  response  Response to parse.
 */
void DescribeActivityTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeActivityTypeResponsePrivate
 *
 * @brief  Private implementation for DescribeActivityTypeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeActivityTypeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeActivityTypeResponse instance.
 */
DescribeActivityTypeResponsePrivate::DescribeActivityTypeResponsePrivate(
    DescribeActivityTypeQueueResponse * const q) : DescribeActivityTypePrivate(q)
{

}

/**
 * @brief  Parse an SWF DescribeActivityTypeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeActivityTypeResponsePrivate::DescribeActivityTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeActivityTypeResponse"));
    /// @todo
}

} // namespace SWF
} // namespace AWS
