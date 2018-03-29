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

#include "deletebgppeerresponse.h"
#include "deletebgppeerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/**
 * @class  DeleteBGPPeerResponse
 *
 * @brief  Handles DirectConnect DeleteBGPPeer responses.
 *
 * @see    DirectConnectClient::deleteBGPPeer
 */

/**
 * @brief  Constructs a new DeleteBGPPeerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBGPPeerResponse::DeleteBGPPeerResponse(
        const DeleteBGPPeerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeleteBGPPeerResponse(new DeleteBGPPeerResponsePrivate(this), parent)
{
    setRequest(new DeleteBGPPeerRequest(request));
    setReply(reply);
}

const DeleteBGPPeerRequest * DeleteBGPPeerResponse::request() const
{
    Q_D(const DeleteBGPPeerResponse);
    return static_cast<const DeleteBGPPeerRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect DeleteBGPPeer response.
 *
 * @param  response  Response to parse.
 */
void DeleteBGPPeerResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteBGPPeerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteBGPPeerResponsePrivate
 *
 * @brief  Private implementation for DeleteBGPPeerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBGPPeerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteBGPPeerResponse instance.
 */
DeleteBGPPeerResponsePrivate::DeleteBGPPeerResponsePrivate(
    DeleteBGPPeerResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect DeleteBGPPeerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteBGPPeerResponsePrivate::parseDeleteBGPPeerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBGPPeerResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace QtAws
