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

#include "deleteaggregationauthorizationresponse.h"
#include "deleteaggregationauthorizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/**
 * @class  DeleteAggregationAuthorizationResponse
 *
 * @brief  Handles ConfigService DeleteAggregationAuthorization responses.
 *
 * @see    ConfigServiceClient::deleteAggregationAuthorization
 */

/**
 * @brief  Constructs a new DeleteAggregationAuthorizationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteAggregationAuthorizationResponse::DeleteAggregationAuthorizationResponse(
        const DeleteAggregationAuthorizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new DeleteAggregationAuthorizationResponsePrivate(this), parent)
{
    setRequest(new DeleteAggregationAuthorizationRequest(request));
    setReply(reply);
}

const DeleteAggregationAuthorizationRequest * DeleteAggregationAuthorizationResponse::request() const
{
    Q_D(const DeleteAggregationAuthorizationResponse);
    return static_cast<const DeleteAggregationAuthorizationRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService DeleteAggregationAuthorization response.
 *
 * @param  response  Response to parse.
 */
void DeleteAggregationAuthorizationResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteAggregationAuthorizationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteAggregationAuthorizationResponsePrivate
 *
 * @brief  Private implementation for DeleteAggregationAuthorizationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAggregationAuthorizationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteAggregationAuthorizationResponse instance.
 */
DeleteAggregationAuthorizationResponsePrivate::DeleteAggregationAuthorizationResponsePrivate(
    DeleteAggregationAuthorizationResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ConfigService DeleteAggregationAuthorizationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteAggregationAuthorizationResponsePrivate::parseDeleteAggregationAuthorizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAggregationAuthorizationResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace QtAws
