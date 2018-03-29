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

#include "deletechannelresponse.h"
#include "deletechannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackage {

/**
 * @class  DeleteChannelResponse
 *
 * @brief  Handles MediaPackage DeleteChannel responses.
 *
 * @see    MediaPackageClient::deleteChannel
 */

/**
 * @brief  Constructs a new DeleteChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteChannelResponse::DeleteChannelResponse(
        const DeleteChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageResponse(new DeleteChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteChannelRequest(request));
    setReply(reply);
}

const DeleteChannelRequest * DeleteChannelResponse::request() const
{
    Q_D(const DeleteChannelResponse);
    return static_cast<const DeleteChannelRequest *>(d->request);
}

/**
 * @brief  Parse a MediaPackage DeleteChannel response.
 *
 * @param  response  Response to parse.
 */
void DeleteChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteChannelResponsePrivate
 *
 * @brief  Private implementation for DeleteChannelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteChannelResponse instance.
 */
DeleteChannelResponsePrivate::DeleteChannelResponsePrivate(
    DeleteChannelQueueResponse * const q) : DeleteChannelPrivate(q)
{

}

/**
 * @brief  Parse an MediaPackage DeleteChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteChannelResponsePrivate::DeleteChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteChannelResponse"));
    /// @todo
}

} // namespace MediaPackage
} // namespace QtAws
