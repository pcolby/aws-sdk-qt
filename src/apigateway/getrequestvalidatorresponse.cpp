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

#include "getrequestvalidatorresponse.h"
#include "getrequestvalidatorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  GetRequestValidatorResponse
 *
 * @brief  Handles APIGateway GetRequestValidator responses.
 *
 * @see    APIGatewayClient::getRequestValidator
 */

/**
 * @brief  Constructs a new GetRequestValidatorResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetRequestValidatorResponse::GetRequestValidatorResponse(
        const GetRequestValidatorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetRequestValidatorResponsePrivate(this), parent)
{
    setRequest(new GetRequestValidatorRequest(request));
    setReply(reply);
}

const GetRequestValidatorRequest * GetRequestValidatorResponse::request() const
{
    Q_D(const GetRequestValidatorResponse);
    return static_cast<const GetRequestValidatorRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetRequestValidator response.
 *
 * @param  response  Response to parse.
 */
void GetRequestValidatorResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetRequestValidatorResponsePrivate
 *
 * @brief  Private implementation for GetRequestValidatorResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRequestValidatorResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetRequestValidatorResponse instance.
 */
GetRequestValidatorResponsePrivate::GetRequestValidatorResponsePrivate(
    GetRequestValidatorQueueResponse * const q) : GetRequestValidatorPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetRequestValidatorResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetRequestValidatorResponsePrivate::GetRequestValidatorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRequestValidatorResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
