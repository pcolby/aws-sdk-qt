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

#include "retrievetaperecoverypointresponse.h"
#include "retrievetaperecoverypointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  RetrieveTapeRecoveryPointResponse
 *
 * @brief  Handles StorageGateway RetrieveTapeRecoveryPoint responses.
 *
 * @see    StorageGatewayClient::retrieveTapeRecoveryPoint
 */

/**
 * @brief  Constructs a new RetrieveTapeRecoveryPointResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RetrieveTapeRecoveryPointResponse::RetrieveTapeRecoveryPointResponse(
        const RetrieveTapeRecoveryPointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new RetrieveTapeRecoveryPointResponsePrivate(this), parent)
{
    setRequest(new RetrieveTapeRecoveryPointRequest(request));
    setReply(reply);
}

const RetrieveTapeRecoveryPointRequest * RetrieveTapeRecoveryPointResponse::request() const
{
    Q_D(const RetrieveTapeRecoveryPointResponse);
    return static_cast<const RetrieveTapeRecoveryPointRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway RetrieveTapeRecoveryPoint response.
 *
 * @param  response  Response to parse.
 */
void RetrieveTapeRecoveryPointResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RetrieveTapeRecoveryPointResponsePrivate
 *
 * @brief  Private implementation for RetrieveTapeRecoveryPointResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RetrieveTapeRecoveryPointResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RetrieveTapeRecoveryPointResponse instance.
 */
RetrieveTapeRecoveryPointResponsePrivate::RetrieveTapeRecoveryPointResponsePrivate(
    RetrieveTapeRecoveryPointResponse * const q) : StorageGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway RetrieveTapeRecoveryPointResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RetrieveTapeRecoveryPointResponsePrivate::RetrieveTapeRecoveryPointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RetrieveTapeRecoveryPointResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
