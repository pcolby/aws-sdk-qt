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

#include "describedhcpoptionsresponse.h"
#include "describedhcpoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeDhcpOptionsResponse
 *
 * @brief  Handles EC2 DescribeDhcpOptions responses.
 *
 * @see    EC2Client::describeDhcpOptions
 */

/**
 * @brief  Constructs a new DescribeDhcpOptionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDhcpOptionsResponse::DescribeDhcpOptionsResponse(
        const DescribeDhcpOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeDhcpOptionsResponse(new DescribeDhcpOptionsResponsePrivate(this), parent)
{
    setRequest(new DescribeDhcpOptionsRequest(request));
    setReply(reply);
}

const DescribeDhcpOptionsRequest * DescribeDhcpOptionsResponse::request() const
{
    Q_D(const DescribeDhcpOptionsResponse);
    return static_cast<const DescribeDhcpOptionsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeDhcpOptions response.
 *
 * @param  response  Response to parse.
 */
void DescribeDhcpOptionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeDhcpOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDhcpOptionsResponsePrivate
 *
 * @brief  Private implementation for DescribeDhcpOptionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDhcpOptionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDhcpOptionsResponse instance.
 */
DescribeDhcpOptionsResponsePrivate::DescribeDhcpOptionsResponsePrivate(
    DescribeDhcpOptionsResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeDhcpOptionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDhcpOptionsResponsePrivate::parseDescribeDhcpOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDhcpOptionsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
