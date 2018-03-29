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

#include "describeresizeresponse.h"
#include "describeresizeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/**
 * @class  DescribeResizeResponse
 *
 * @brief  Handles Redshift DescribeResize responses.
 *
 * @see    RedshiftClient::describeResize
 */

/**
 * @brief  Constructs a new DescribeResizeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeResizeResponse::DescribeResizeResponse(
        const DescribeResizeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new DescribeResizeResponsePrivate(this), parent)
{
    setRequest(new DescribeResizeRequest(request));
    setReply(reply);
}

const DescribeResizeRequest * DescribeResizeResponse::request() const
{
    Q_D(const DescribeResizeResponse);
    return static_cast<const DescribeResizeRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift DescribeResize response.
 *
 * @param  response  Response to parse.
 */
void DescribeResizeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeResizeResponsePrivate
 *
 * @brief  Private implementation for DescribeResizeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeResizeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeResizeResponse instance.
 */
DescribeResizeResponsePrivate::DescribeResizeResponsePrivate(
    DescribeResizeResponse * const q) : RedshiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an Redshift DescribeResizeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeResizeResponsePrivate::DescribeResizeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeResizeResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace QtAws
