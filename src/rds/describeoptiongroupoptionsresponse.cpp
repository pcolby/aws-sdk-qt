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

#include "describeoptiongroupoptionsresponse.h"
#include "describeoptiongroupoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  DescribeOptionGroupOptionsResponse
 *
 * @brief  Handles RDS DescribeOptionGroupOptions responses.
 *
 * @see    RDSClient::describeOptionGroupOptions
 */

/**
 * @brief  Constructs a new DescribeOptionGroupOptionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeOptionGroupOptionsResponse::DescribeOptionGroupOptionsResponse(
        const DescribeOptionGroupOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeOptionGroupOptionsResponse(new DescribeOptionGroupOptionsResponsePrivate(this), parent)
{
    setRequest(new DescribeOptionGroupOptionsRequest(request));
    setReply(reply);
}

const DescribeOptionGroupOptionsRequest * DescribeOptionGroupOptionsResponse::request() const
{
    Q_D(const DescribeOptionGroupOptionsResponse);
    return static_cast<const DescribeOptionGroupOptionsRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DescribeOptionGroupOptions response.
 *
 * @param  response  Response to parse.
 */
void DescribeOptionGroupOptionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeOptionGroupOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeOptionGroupOptionsResponsePrivate
 *
 * @brief  Private implementation for DescribeOptionGroupOptionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeOptionGroupOptionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeOptionGroupOptionsResponse instance.
 */
DescribeOptionGroupOptionsResponsePrivate::DescribeOptionGroupOptionsResponsePrivate(
    DescribeOptionGroupOptionsResponse * const q) : RDSResponsePrivate(q)
{

}

/**
 * @brief  Parse an RDS DescribeOptionGroupOptionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeOptionGroupOptionsResponsePrivate::parseDescribeOptionGroupOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeOptionGroupOptionsResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
