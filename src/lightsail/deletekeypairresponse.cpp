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

#include "deletekeypairresponse.h"
#include "deletekeypairresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  DeleteKeyPairResponse
 *
 * @brief  Handles Lightsail DeleteKeyPair responses.
 *
 * @see    LightsailClient::deleteKeyPair
 */

/**
 * @brief  Constructs a new DeleteKeyPairResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteKeyPairResponse::DeleteKeyPairResponse(
        const DeleteKeyPairRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeleteKeyPairResponse(new DeleteKeyPairResponsePrivate(this), parent)
{
    setRequest(new DeleteKeyPairRequest(request));
    setReply(reply);
}

const DeleteKeyPairRequest * DeleteKeyPairResponse::request() const
{
    Q_D(const DeleteKeyPairResponse);
    return static_cast<const DeleteKeyPairRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail DeleteKeyPair response.
 *
 * @param  response  Response to parse.
 */
void DeleteKeyPairResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteKeyPairResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteKeyPairResponsePrivate
 *
 * @brief  Private implementation for DeleteKeyPairResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteKeyPairResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteKeyPairResponse instance.
 */
DeleteKeyPairResponsePrivate::DeleteKeyPairResponsePrivate(
    DeleteKeyPairResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail DeleteKeyPairResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteKeyPairResponsePrivate::parseDeleteKeyPairResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteKeyPairResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
