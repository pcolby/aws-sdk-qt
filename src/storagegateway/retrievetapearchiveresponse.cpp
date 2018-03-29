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

#include "retrievetapearchiveresponse.h"
#include "retrievetapearchiveresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  RetrieveTapeArchiveResponse
 *
 * @brief  Handles StorageGateway RetrieveTapeArchive responses.
 *
 * @see    StorageGatewayClient::retrieveTapeArchive
 */

/**
 * @brief  Constructs a new RetrieveTapeArchiveResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RetrieveTapeArchiveResponse::RetrieveTapeArchiveResponse(
        const RetrieveTapeArchiveRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new RetrieveTapeArchiveResponsePrivate(this), parent)
{
    setRequest(new RetrieveTapeArchiveRequest(request));
    setReply(reply);
}

const RetrieveTapeArchiveRequest * RetrieveTapeArchiveResponse::request() const
{
    Q_D(const RetrieveTapeArchiveResponse);
    return static_cast<const RetrieveTapeArchiveRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway RetrieveTapeArchive response.
 *
 * @param  response  Response to parse.
 */
void RetrieveTapeArchiveResponse::parseSuccess(QIODevice &response)
{
    Q_D(RetrieveTapeArchiveResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RetrieveTapeArchiveResponsePrivate
 *
 * @brief  Private implementation for RetrieveTapeArchiveResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RetrieveTapeArchiveResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RetrieveTapeArchiveResponse instance.
 */
RetrieveTapeArchiveResponsePrivate::RetrieveTapeArchiveResponsePrivate(
    RetrieveTapeArchiveResponse * const q) : StorageGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway RetrieveTapeArchiveResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RetrieveTapeArchiveResponsePrivate::parseRetrieveTapeArchiveResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RetrieveTapeArchiveResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
