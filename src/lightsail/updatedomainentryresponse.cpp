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

#include "updatedomainentryresponse.h"
#include "updatedomainentryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  UpdateDomainEntryResponse
 *
 * @brief  Handles Lightsail UpdateDomainEntry responses.
 *
 * @see    LightsailClient::updateDomainEntry
 */

/**
 * @brief  Constructs a new UpdateDomainEntryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDomainEntryResponse::UpdateDomainEntryResponse(
        const UpdateDomainEntryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new UpdateDomainEntryResponsePrivate(this), parent)
{
    setRequest(new UpdateDomainEntryRequest(request));
    setReply(reply);
}

const UpdateDomainEntryRequest * UpdateDomainEntryResponse::request() const
{
    Q_D(const UpdateDomainEntryResponse);
    return static_cast<const UpdateDomainEntryRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail UpdateDomainEntry response.
 *
 * @param  response  Response to parse.
 */
void UpdateDomainEntryResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateDomainEntryResponsePrivate
 *
 * @brief  Private implementation for UpdateDomainEntryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDomainEntryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateDomainEntryResponse instance.
 */
UpdateDomainEntryResponsePrivate::UpdateDomainEntryResponsePrivate(
    UpdateDomainEntryQueueResponse * const q) : UpdateDomainEntryPrivate(q)
{

}

/**
 * @brief  Parse an Lightsail UpdateDomainEntryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateDomainEntryResponsePrivate::UpdateDomainEntryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDomainEntryResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace AWS
