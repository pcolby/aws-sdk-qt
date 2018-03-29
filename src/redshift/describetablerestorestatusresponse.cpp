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

#include "describetablerestorestatusresponse.h"
#include "describetablerestorestatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/**
 * @class  DescribeTableRestoreStatusResponse
 *
 * @brief  Handles Redshift DescribeTableRestoreStatus responses.
 *
 * @see    RedshiftClient::describeTableRestoreStatus
 */

/**
 * @brief  Constructs a new DescribeTableRestoreStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeTableRestoreStatusResponse::DescribeTableRestoreStatusResponse(
        const DescribeTableRestoreStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new DescribeTableRestoreStatusResponsePrivate(this), parent)
{
    setRequest(new DescribeTableRestoreStatusRequest(request));
    setReply(reply);
}

const DescribeTableRestoreStatusRequest * DescribeTableRestoreStatusResponse::request() const
{
    Q_D(const DescribeTableRestoreStatusResponse);
    return static_cast<const DescribeTableRestoreStatusRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift DescribeTableRestoreStatus response.
 *
 * @param  response  Response to parse.
 */
void DescribeTableRestoreStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeTableRestoreStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeTableRestoreStatusResponsePrivate
 *
 * @brief  Private implementation for DescribeTableRestoreStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTableRestoreStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeTableRestoreStatusResponse instance.
 */
DescribeTableRestoreStatusResponsePrivate::DescribeTableRestoreStatusResponsePrivate(
    DescribeTableRestoreStatusResponse * const q) : RedshiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an Redshift DescribeTableRestoreStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeTableRestoreStatusResponsePrivate::DescribeTableRestoreStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTableRestoreStatusResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace QtAws
