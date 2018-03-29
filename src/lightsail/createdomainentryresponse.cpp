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

#include "createdomainentryresponse.h"
#include "createdomainentryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  CreateDomainEntryResponse
 *
 * @brief  Handles Lightsail CreateDomainEntry responses.
 *
 * @see    LightsailClient::createDomainEntry
 */

/**
 * @brief  Constructs a new CreateDomainEntryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDomainEntryResponse::CreateDomainEntryResponse(
        const CreateDomainEntryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new CreateDomainEntryResponsePrivate(this), parent)
{
    setRequest(new CreateDomainEntryRequest(request));
    setReply(reply);
}

const CreateDomainEntryRequest * CreateDomainEntryResponse::request() const
{
    Q_D(const CreateDomainEntryResponse);
    return static_cast<const CreateDomainEntryRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail CreateDomainEntry response.
 *
 * @param  response  Response to parse.
 */
void CreateDomainEntryResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDomainEntryResponsePrivate
 *
 * @brief  Private implementation for CreateDomainEntryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDomainEntryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDomainEntryResponse instance.
 */
CreateDomainEntryResponsePrivate::CreateDomainEntryResponsePrivate(
    CreateDomainEntryQueueResponse * const q) : CreateDomainEntryPrivate(q)
{

}

/**
 * @brief  Parse an Lightsail CreateDomainEntryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDomainEntryResponsePrivate::CreateDomainEntryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDomainEntryResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
