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

#include "describeauthorizerresponse.h"
#include "describeauthorizerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  DescribeAuthorizerResponse
 *
 * @brief  Handles IoT DescribeAuthorizer responses.
 *
 * @see    IoTClient::describeAuthorizer
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAuthorizerResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DescribeAuthorizerResponsePrivate(this), parent)
{
    setRequest(new DescribeAuthorizerRequest(request));
    setReply(reply);
}

const DescribeAuthorizerRequest * DescribeAuthorizerResponse::request() const
{
    Q_D(const DescribeAuthorizerResponse);
    return static_cast<const DescribeAuthorizerRequest *>(d->request);
}

/**
 * @brief  Parse a IoT DescribeAuthorizer response.
 *
 * @param  response  Response to parse.
 */
void DescribeAuthorizerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAuthorizerResponsePrivate
 *
 * @brief  Private implementation for DescribeAuthorizerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAuthorizerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAuthorizerResponse instance.
 */
DescribeAuthorizerResponsePrivate::DescribeAuthorizerResponsePrivate(
    DescribeAuthorizerQueueResponse * const q) : DescribeAuthorizerPrivate(q)
{

}

/**
 * @brief  Parse an IoT DescribeAuthorizerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAuthorizerResponsePrivate::DescribeAuthorizerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAuthorizerResponse"));
    /// @todo
}
