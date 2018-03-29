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

#include "putdeliverychannelresponse.h"
#include "putdeliverychannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/**
 * @class  PutDeliveryChannelResponse
 *
 * @brief  Handles ConfigService PutDeliveryChannel responses.
 *
 * @see    ConfigServiceClient::putDeliveryChannel
 */

/**
 * @brief  Constructs a new PutDeliveryChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutDeliveryChannelResponse::PutDeliveryChannelResponse(
        const PutDeliveryChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new PutDeliveryChannelResponsePrivate(this), parent)
{
    setRequest(new PutDeliveryChannelRequest(request));
    setReply(reply);
}

const PutDeliveryChannelRequest * PutDeliveryChannelResponse::request() const
{
    Q_D(const PutDeliveryChannelResponse);
    return static_cast<const PutDeliveryChannelRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService PutDeliveryChannel response.
 *
 * @param  response  Response to parse.
 */
void PutDeliveryChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutDeliveryChannelResponsePrivate
 *
 * @brief  Private implementation for PutDeliveryChannelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutDeliveryChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutDeliveryChannelResponse instance.
 */
PutDeliveryChannelResponsePrivate::PutDeliveryChannelResponsePrivate(
    PutDeliveryChannelQueueResponse * const q) : PutDeliveryChannelPrivate(q)
{

}

/**
 * @brief  Parse an ConfigService PutDeliveryChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutDeliveryChannelResponsePrivate::PutDeliveryChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutDeliveryChannelResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace QtAws
