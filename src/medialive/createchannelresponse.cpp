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

#include "createchannelresponse.h"
#include "createchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/**
 * @class  CreateChannelResponse
 *
 * @brief  Handles MediaLive CreateChannel responses.
 *
 * @see    MediaLiveClient::createChannel
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
    : MediaLiveResponse(new CreateChannelResponsePrivate(this), parent)
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
 * @brief  Parse a MediaLive CreateChannel response.
 *
 * @param  response  Response to parse.
 */
void CreateChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateChannelResponse);
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
    CreateChannelResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/**
 * @brief  Parse an MediaLive CreateChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateChannelResponsePrivate::CreateChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateChannelResponse"));
    /// @todo
}

} // namespace MediaLive
} // namespace QtAws
