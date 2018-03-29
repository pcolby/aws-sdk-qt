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

#include "deleteemailchannelresponse.h"
#include "deleteemailchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/**
 * @class  DeleteEmailChannelResponse
 *
 * @brief  Handles Pinpoint DeleteEmailChannel responses.
 *
 * @see    PinpointClient::deleteEmailChannel
 */

/**
 * @brief  Constructs a new DeleteEmailChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteEmailChannelResponse::DeleteEmailChannelResponse(
        const DeleteEmailChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeleteEmailChannelResponse(new DeleteEmailChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteEmailChannelRequest(request));
    setReply(reply);
}

const DeleteEmailChannelRequest * DeleteEmailChannelResponse::request() const
{
    Q_D(const DeleteEmailChannelResponse);
    return static_cast<const DeleteEmailChannelRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint DeleteEmailChannel response.
 *
 * @param  response  Response to parse.
 */
void DeleteEmailChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteEmailChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteEmailChannelResponsePrivate
 *
 * @brief  Private implementation for DeleteEmailChannelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEmailChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteEmailChannelResponse instance.
 */
DeleteEmailChannelResponsePrivate::DeleteEmailChannelResponsePrivate(
    DeleteEmailChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint DeleteEmailChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteEmailChannelResponsePrivate::parseDeleteEmailChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEmailChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
