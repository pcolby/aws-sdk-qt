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

#include "deletevaultnotificationsresponse.h"
#include "deletevaultnotificationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glacier {

/**
 * @class  DeleteVaultNotificationsResponse
 *
 * @brief  Handles Glacier DeleteVaultNotifications responses.
 *
 * @see    GlacierClient::deleteVaultNotifications
 */

/**
 * @brief  Constructs a new DeleteVaultNotificationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteVaultNotificationsResponse::DeleteVaultNotificationsResponse(
        const DeleteVaultNotificationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new DeleteVaultNotificationsResponsePrivate(this), parent)
{
    setRequest(new DeleteVaultNotificationsRequest(request));
    setReply(reply);
}

const DeleteVaultNotificationsRequest * DeleteVaultNotificationsResponse::request() const
{
    Q_D(const DeleteVaultNotificationsResponse);
    return static_cast<const DeleteVaultNotificationsRequest *>(d->request);
}

/**
 * @brief  Parse a Glacier DeleteVaultNotifications response.
 *
 * @param  response  Response to parse.
 */
void DeleteVaultNotificationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteVaultNotificationsResponsePrivate
 *
 * @brief  Private implementation for DeleteVaultNotificationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVaultNotificationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteVaultNotificationsResponse instance.
 */
DeleteVaultNotificationsResponsePrivate::DeleteVaultNotificationsResponsePrivate(
    DeleteVaultNotificationsResponse * const q) : GlacierResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glacier DeleteVaultNotificationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteVaultNotificationsResponsePrivate::DeleteVaultNotificationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVaultNotificationsResponse"));
    /// @todo
}

} // namespace Glacier
} // namespace QtAws
