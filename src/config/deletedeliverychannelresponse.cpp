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

#include "deletedeliverychannelresponse.h"
#include "deletedeliverychannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/**
 * @class  DeleteDeliveryChannelResponse
 *
 * @brief  Handles ConfigService DeleteDeliveryChannel responses.
 *
 * @see    ConfigServiceClient::deleteDeliveryChannel
 */

/**
 * @brief  Constructs a new DeleteDeliveryChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDeliveryChannelResponse::DeleteDeliveryChannelResponse(
        const DeleteDeliveryChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new DeleteDeliveryChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteDeliveryChannelRequest(request));
    setReply(reply);
}

const DeleteDeliveryChannelRequest * DeleteDeliveryChannelResponse::request() const
{
    Q_D(const DeleteDeliveryChannelResponse);
    return static_cast<const DeleteDeliveryChannelRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService DeleteDeliveryChannel response.
 *
 * @param  response  Response to parse.
 */
void DeleteDeliveryChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteDeliveryChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteDeliveryChannelResponsePrivate
 *
 * @brief  Private implementation for DeleteDeliveryChannelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDeliveryChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDeliveryChannelResponse instance.
 */
DeleteDeliveryChannelResponsePrivate::DeleteDeliveryChannelResponsePrivate(
    DeleteDeliveryChannelResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ConfigService DeleteDeliveryChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDeliveryChannelResponsePrivate::parseDeleteDeliveryChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDeliveryChannelResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace QtAws
