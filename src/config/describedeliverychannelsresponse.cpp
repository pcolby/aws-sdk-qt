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

#include "describedeliverychannelsresponse.h"
#include "describedeliverychannelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/**
 * @class  DescribeDeliveryChannelsResponse
 *
 * @brief  Handles ConfigService DescribeDeliveryChannels responses.
 *
 * @see    ConfigServiceClient::describeDeliveryChannels
 */

/**
 * @brief  Constructs a new DescribeDeliveryChannelsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDeliveryChannelsResponse::DescribeDeliveryChannelsResponse(
        const DescribeDeliveryChannelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeDeliveryChannelsResponse(new DescribeDeliveryChannelsResponsePrivate(this), parent)
{
    setRequest(new DescribeDeliveryChannelsRequest(request));
    setReply(reply);
}

const DescribeDeliveryChannelsRequest * DescribeDeliveryChannelsResponse::request() const
{
    Q_D(const DescribeDeliveryChannelsResponse);
    return static_cast<const DescribeDeliveryChannelsRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService DescribeDeliveryChannels response.
 *
 * @param  response  Response to parse.
 */
void DescribeDeliveryChannelsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeDeliveryChannelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDeliveryChannelsResponsePrivate
 *
 * @brief  Private implementation for DescribeDeliveryChannelsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDeliveryChannelsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDeliveryChannelsResponse instance.
 */
DescribeDeliveryChannelsResponsePrivate::DescribeDeliveryChannelsResponsePrivate(
    DescribeDeliveryChannelsResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ConfigService DescribeDeliveryChannelsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDeliveryChannelsResponsePrivate::parseDescribeDeliveryChannelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDeliveryChannelsResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace QtAws
