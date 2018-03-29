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

#include "deleteconnectionresponse.h"
#include "deleteconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/**
 * @class  DeleteConnectionResponse
 *
 * @brief  Handles Glue DeleteConnection responses.
 *
 * @see    GlueClient::deleteConnection
 */

/**
 * @brief  Constructs a new DeleteConnectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteConnectionResponse::DeleteConnectionResponse(
        const DeleteConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteConnectionResponsePrivate(this), parent)
{
    setRequest(new DeleteConnectionRequest(request));
    setReply(reply);
}

const DeleteConnectionRequest * DeleteConnectionResponse::request() const
{
    Q_D(const DeleteConnectionResponse);
    return static_cast<const DeleteConnectionRequest *>(d->request);
}

/**
 * @brief  Parse a Glue DeleteConnection response.
 *
 * @param  response  Response to parse.
 */
void DeleteConnectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteConnectionResponsePrivate
 *
 * @brief  Private implementation for DeleteConnectionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteConnectionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteConnectionResponse instance.
 */
DeleteConnectionResponsePrivate::DeleteConnectionResponsePrivate(
    DeleteConnectionResponse * const q) : GlueResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glue DeleteConnectionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteConnectionResponsePrivate::DeleteConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConnectionResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
