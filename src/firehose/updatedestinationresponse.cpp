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

#include "updatedestinationresponse.h"
#include "updatedestinationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Firehose {

/**
 * @class  UpdateDestinationResponse
 *
 * @brief  Handles Firehose UpdateDestination responses.
 *
 * @see    FirehoseClient::updateDestination
 */

/**
 * @brief  Constructs a new UpdateDestinationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDestinationResponse::UpdateDestinationResponse(
        const UpdateDestinationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FirehoseResponse(new UpdateDestinationResponsePrivate(this), parent)
{
    setRequest(new UpdateDestinationRequest(request));
    setReply(reply);
}

const UpdateDestinationRequest * UpdateDestinationResponse::request() const
{
    Q_D(const UpdateDestinationResponse);
    return static_cast<const UpdateDestinationRequest *>(d->request);
}

/**
 * @brief  Parse a Firehose UpdateDestination response.
 *
 * @param  response  Response to parse.
 */
void UpdateDestinationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateDestinationResponsePrivate
 *
 * @brief  Private implementation for UpdateDestinationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDestinationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateDestinationResponse instance.
 */
UpdateDestinationResponsePrivate::UpdateDestinationResponsePrivate(
    UpdateDestinationQueueResponse * const q) : UpdateDestinationPrivate(q)
{

}

/**
 * @brief  Parse an Firehose UpdateDestinationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateDestinationResponsePrivate::UpdateDestinationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDestinationResponse"));
    /// @todo
}

} // namespace Firehose
} // namespace AWS
