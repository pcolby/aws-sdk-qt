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

#include "describedefaultauthorizerresponse.h"
#include "describedefaultauthorizerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  DescribeDefaultAuthorizerResponse
 *
 * @brief  Handles IoT DescribeDefaultAuthorizer responses.
 *
 * @see    IoTClient::describeDefaultAuthorizer
 */

/**
 * @brief  Constructs a new DescribeDefaultAuthorizerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDefaultAuthorizerResponse::DescribeDefaultAuthorizerResponse(
        const DescribeDefaultAuthorizerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeDefaultAuthorizerResponse(new DescribeDefaultAuthorizerResponsePrivate(this), parent)
{
    setRequest(new DescribeDefaultAuthorizerRequest(request));
    setReply(reply);
}

const DescribeDefaultAuthorizerRequest * DescribeDefaultAuthorizerResponse::request() const
{
    Q_D(const DescribeDefaultAuthorizerResponse);
    return static_cast<const DescribeDefaultAuthorizerRequest *>(d->request);
}

/**
 * @brief  Parse a IoT DescribeDefaultAuthorizer response.
 *
 * @param  response  Response to parse.
 */
void DescribeDefaultAuthorizerResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeDefaultAuthorizerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDefaultAuthorizerResponsePrivate
 *
 * @brief  Private implementation for DescribeDefaultAuthorizerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDefaultAuthorizerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDefaultAuthorizerResponse instance.
 */
DescribeDefaultAuthorizerResponsePrivate::DescribeDefaultAuthorizerResponsePrivate(
    DescribeDefaultAuthorizerResponse * const q) : IoTResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoT DescribeDefaultAuthorizerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDefaultAuthorizerResponsePrivate::parseDescribeDefaultAuthorizerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDefaultAuthorizerResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
