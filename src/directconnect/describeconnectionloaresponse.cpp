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

#include "describeconnectionloaresponse.h"
#include "describeconnectionloaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectConnect {

/**
 * @class  DescribeConnectionLoaResponse
 *
 * @brief  Handles DirectConnect DescribeConnectionLoa responses.
 *
 * @see    DirectConnectClient::describeConnectionLoa
 */

/**
 * @brief  Constructs a new DescribeConnectionLoaResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeConnectionLoaResponse::DescribeConnectionLoaResponse(
        const DescribeConnectionLoaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DescribeConnectionLoaResponsePrivate(this), parent)
{
    setRequest(new DescribeConnectionLoaRequest(request));
    setReply(reply);
}

const DescribeConnectionLoaRequest * DescribeConnectionLoaResponse::request() const
{
    Q_D(const DescribeConnectionLoaResponse);
    return static_cast<const DescribeConnectionLoaRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect DescribeConnectionLoa response.
 *
 * @param  response  Response to parse.
 */
void DescribeConnectionLoaResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeConnectionLoaResponsePrivate
 *
 * @brief  Private implementation for DescribeConnectionLoaResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConnectionLoaResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeConnectionLoaResponse instance.
 */
DescribeConnectionLoaResponsePrivate::DescribeConnectionLoaResponsePrivate(
    DescribeConnectionLoaQueueResponse * const q) : DescribeConnectionLoaPrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect DescribeConnectionLoaResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeConnectionLoaResponsePrivate::DescribeConnectionLoaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConnectionLoaResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace AWS
