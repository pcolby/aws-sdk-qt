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

#include "getrequestvalidatorsresponse.h"
#include "getrequestvalidatorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  GetRequestValidatorsResponse
 *
 * @brief  Handles APIGateway GetRequestValidators responses.
 *
 * @see    APIGatewayClient::getRequestValidators
 */

/**
 * @brief  Constructs a new GetRequestValidatorsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetRequestValidatorsResponse::GetRequestValidatorsResponse(
        const GetRequestValidatorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetRequestValidatorsResponsePrivate(this), parent)
{
    setRequest(new GetRequestValidatorsRequest(request));
    setReply(reply);
}

const GetRequestValidatorsRequest * GetRequestValidatorsResponse::request() const
{
    Q_D(const GetRequestValidatorsResponse);
    return static_cast<const GetRequestValidatorsRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetRequestValidators response.
 *
 * @param  response  Response to parse.
 */
void GetRequestValidatorsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetRequestValidatorsResponsePrivate
 *
 * @brief  Private implementation for GetRequestValidatorsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRequestValidatorsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetRequestValidatorsResponse instance.
 */
GetRequestValidatorsResponsePrivate::GetRequestValidatorsResponsePrivate(
    GetRequestValidatorsQueueResponse * const q) : GetRequestValidatorsPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetRequestValidatorsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetRequestValidatorsResponsePrivate::GetRequestValidatorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRequestValidatorsResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
