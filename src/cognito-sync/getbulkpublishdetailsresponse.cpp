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

#include "getbulkpublishdetailsresponse.h"
#include "getbulkpublishdetailsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoSync {

/**
 * @class  GetBulkPublishDetailsResponse
 *
 * @brief  Handles CognitoSync GetBulkPublishDetails responses.
 *
 * @see    CognitoSyncClient::getBulkPublishDetails
 */

/**
 * @brief  Constructs a new GetBulkPublishDetailsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBulkPublishDetailsResponse::GetBulkPublishDetailsResponse(
        const GetBulkPublishDetailsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoSyncResponse(new GetBulkPublishDetailsResponsePrivate(this), parent)
{
    setRequest(new GetBulkPublishDetailsRequest(request));
    setReply(reply);
}

const GetBulkPublishDetailsRequest * GetBulkPublishDetailsResponse::request() const
{
    Q_D(const GetBulkPublishDetailsResponse);
    return static_cast<const GetBulkPublishDetailsRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoSync GetBulkPublishDetails response.
 *
 * @param  response  Response to parse.
 */
void GetBulkPublishDetailsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetBulkPublishDetailsResponsePrivate
 *
 * @brief  Private implementation for GetBulkPublishDetailsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBulkPublishDetailsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBulkPublishDetailsResponse instance.
 */
GetBulkPublishDetailsResponsePrivate::GetBulkPublishDetailsResponsePrivate(
    GetBulkPublishDetailsQueueResponse * const q) : GetBulkPublishDetailsPrivate(q)
{

}

/**
 * @brief  Parse an CognitoSync GetBulkPublishDetailsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBulkPublishDetailsResponsePrivate::GetBulkPublishDetailsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBulkPublishDetailsResponse"));
    /// @todo
}

} // namespace CognitoSync
} // namespace AWS
