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

#include "deletedomainentryresponse.h"
#include "deletedomainentryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  DeleteDomainEntryResponse
 *
 * @brief  Handles Lightsail DeleteDomainEntry responses.
 *
 * @see    LightsailClient::deleteDomainEntry
 */

/**
 * @brief  Constructs a new DeleteDomainEntryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDomainEntryResponse::DeleteDomainEntryResponse(
        const DeleteDomainEntryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new DeleteDomainEntryResponsePrivate(this), parent)
{
    setRequest(new DeleteDomainEntryRequest(request));
    setReply(reply);
}

const DeleteDomainEntryRequest * DeleteDomainEntryResponse::request() const
{
    Q_D(const DeleteDomainEntryResponse);
    return static_cast<const DeleteDomainEntryRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail DeleteDomainEntry response.
 *
 * @param  response  Response to parse.
 */
void DeleteDomainEntryResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteDomainEntryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteDomainEntryResponsePrivate
 *
 * @brief  Private implementation for DeleteDomainEntryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDomainEntryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDomainEntryResponse instance.
 */
DeleteDomainEntryResponsePrivate::DeleteDomainEntryResponsePrivate(
    DeleteDomainEntryResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail DeleteDomainEntryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDomainEntryResponsePrivate::parseDeleteDomainEntryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDomainEntryResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
