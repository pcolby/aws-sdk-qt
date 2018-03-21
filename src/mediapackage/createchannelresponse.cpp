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

#include "createchannelresponse.h"
#include "createchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MediaPackage {

/**
 * @class  CreateChannelResponse
 *
 * @brief  Handles MediaPackage CreateChannel responses.
 *
 * @see    MediaPackageClient::createChannel
 */

/**
 * @brief  Constructs a new CreateChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateChannelResponse::CreateChannelResponse(
        const CreateChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageResponse(new CreateChannelResponsePrivate(this), parent)
{
    setRequest(new CreateChannelRequest(request));
    setReply(reply);
}

const CreateChannelRequest * CreateChannelResponse::request() const
{
    Q_D(const CreateChannelResponse);
    return static_cast<const CreateChannelRequest *>(d->request);
}

/**
 * @brief  Parse a MediaPackage CreateChannel response.
 *
 * @param  response  Response to parse.
 */
void CreateChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateChannelResponsePrivate
 *
 * @brief  Private implementation for CreateChannelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateChannelResponse instance.
 */
CreateChannelResponsePrivate::CreateChannelResponsePrivate(
    CreateChannelQueueResponse * const q) : CreateChannelPrivate(q)
{

}

/**
 * @brief  Parse an MediaPackage CreateChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateChannelResponsePrivate::CreateChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateChannelResponse"));
    /// @todo
}

} // namespace MediaPackage
} // namespace AWS
