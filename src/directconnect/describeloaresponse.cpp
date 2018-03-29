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

#include "describeloaresponse.h"
#include "describeloaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/**
 * @class  DescribeLoaResponse
 *
 * @brief  Handles DirectConnect DescribeLoa responses.
 *
 * @see    DirectConnectClient::describeLoa
 */

/**
 * @brief  Constructs a new DescribeLoaResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeLoaResponse::DescribeLoaResponse(
        const DescribeLoaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeLoaResponse(new DescribeLoaResponsePrivate(this), parent)
{
    setRequest(new DescribeLoaRequest(request));
    setReply(reply);
}

const DescribeLoaRequest * DescribeLoaResponse::request() const
{
    Q_D(const DescribeLoaResponse);
    return static_cast<const DescribeLoaRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect DescribeLoa response.
 *
 * @param  response  Response to parse.
 */
void DescribeLoaResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeLoaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeLoaResponsePrivate
 *
 * @brief  Private implementation for DescribeLoaResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLoaResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeLoaResponse instance.
 */
DescribeLoaResponsePrivate::DescribeLoaResponsePrivate(
    DescribeLoaResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect DescribeLoaResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeLoaResponsePrivate::parseDescribeLoaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLoaResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace QtAws
