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

#include "describeconfigurationrecorderstatusresponse.h"
#include "describeconfigurationrecorderstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ConfigService {

/**
 * @class  DescribeConfigurationRecorderStatusResponse
 *
 * @brief  Handles ConfigService DescribeConfigurationRecorderStatus responses.
 *
 * @see    ConfigServiceClient::describeConfigurationRecorderStatus
 */

/**
 * @brief  Constructs a new DescribeConfigurationRecorderStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeConfigurationRecorderStatusResponse::DescribeConfigurationRecorderStatusResponse(
        const DescribeConfigurationRecorderStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new DescribeConfigurationRecorderStatusResponsePrivate(this), parent)
{
    setRequest(new DescribeConfigurationRecorderStatusRequest(request));
    setReply(reply);
}

const DescribeConfigurationRecorderStatusRequest * DescribeConfigurationRecorderStatusResponse::request() const
{
    Q_D(const DescribeConfigurationRecorderStatusResponse);
    return static_cast<const DescribeConfigurationRecorderStatusRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService DescribeConfigurationRecorderStatus response.
 *
 * @param  response  Response to parse.
 */
void DescribeConfigurationRecorderStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeConfigurationRecorderStatusResponsePrivate
 *
 * @brief  Private implementation for DescribeConfigurationRecorderStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConfigurationRecorderStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeConfigurationRecorderStatusResponse instance.
 */
DescribeConfigurationRecorderStatusResponsePrivate::DescribeConfigurationRecorderStatusResponsePrivate(
    DescribeConfigurationRecorderStatusQueueResponse * const q) : DescribeConfigurationRecorderStatusPrivate(q)
{

}

/**
 * @brief  Parse an ConfigService DescribeConfigurationRecorderStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeConfigurationRecorderStatusResponsePrivate::DescribeConfigurationRecorderStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConfigurationRecorderStatusResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace AWS
