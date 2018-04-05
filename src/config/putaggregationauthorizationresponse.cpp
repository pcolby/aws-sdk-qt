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

#include "putaggregationauthorizationresponse.h"
#include "putaggregationauthorizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/**
 * @class  PutAggregationAuthorizationResponse
 *
 * @brief  Handles ConfigService PutAggregationAuthorization responses.
 *
 * @see    ConfigServiceClient::putAggregationAuthorization
 */

/**
 * @brief  Constructs a new PutAggregationAuthorizationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutAggregationAuthorizationResponse::PutAggregationAuthorizationResponse(
        const PutAggregationAuthorizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new PutAggregationAuthorizationResponsePrivate(this), parent)
{
    setRequest(new PutAggregationAuthorizationRequest(request));
    setReply(reply);
}

const PutAggregationAuthorizationRequest * PutAggregationAuthorizationResponse::request() const
{
    Q_D(const PutAggregationAuthorizationResponse);
    return static_cast<const PutAggregationAuthorizationRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService PutAggregationAuthorization response.
 *
 * @param  response  Response to parse.
 */
void PutAggregationAuthorizationResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutAggregationAuthorizationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutAggregationAuthorizationResponsePrivate
 *
 * @brief  Private implementation for PutAggregationAuthorizationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutAggregationAuthorizationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutAggregationAuthorizationResponse instance.
 */
PutAggregationAuthorizationResponsePrivate::PutAggregationAuthorizationResponsePrivate(
    PutAggregationAuthorizationResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ConfigService PutAggregationAuthorizationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutAggregationAuthorizationResponsePrivate::parsePutAggregationAuthorizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutAggregationAuthorizationResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace QtAws
