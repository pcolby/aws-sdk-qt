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

#include "domainmetadataresponse.h"
#include "domainmetadataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SimpleDB {

/**
 * @class  DomainMetadataResponse
 *
 * @brief  Handles SimpleDB DomainMetadata responses.
 *
 * @see    SimpleDBClient::domainMetadata
 */

/**
 * @brief  Constructs a new DomainMetadataResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DomainMetadataResponse::DomainMetadataResponse(
        const DomainMetadataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SimpleDBResponse(new DomainMetadataResponsePrivate(this), parent)
{
    setRequest(new DomainMetadataRequest(request));
    setReply(reply);
}

const DomainMetadataRequest * DomainMetadataResponse::request() const
{
    Q_D(const DomainMetadataResponse);
    return static_cast<const DomainMetadataRequest *>(d->request);
}

/**
 * @brief  Parse a SimpleDB DomainMetadata response.
 *
 * @param  response  Response to parse.
 */
void DomainMetadataResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DomainMetadataResponsePrivate
 *
 * @brief  Private implementation for DomainMetadataResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DomainMetadataResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DomainMetadataResponse instance.
 */
DomainMetadataResponsePrivate::DomainMetadataResponsePrivate(
    DomainMetadataQueueResponse * const q) : DomainMetadataPrivate(q)
{

}

/**
 * @brief  Parse an SimpleDB DomainMetadataResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DomainMetadataResponsePrivate::DomainMetadataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DomainMetadataResponse"));
    /// @todo
}

} // namespace SimpleDB
} // namespace AWS
