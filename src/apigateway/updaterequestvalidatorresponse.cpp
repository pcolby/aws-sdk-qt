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

#include "updaterequestvalidatorresponse.h"
#include "updaterequestvalidatorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  UpdateRequestValidatorResponse
 *
 * @brief  Handles APIGateway UpdateRequestValidator responses.
 *
 * @see    APIGatewayClient::updateRequestValidator
 */

/**
 * @brief  Constructs a new UpdateRequestValidatorResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateRequestValidatorResponse::UpdateRequestValidatorResponse(
        const UpdateRequestValidatorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new UpdateRequestValidatorResponsePrivate(this), parent)
{
    setRequest(new UpdateRequestValidatorRequest(request));
    setReply(reply);
}

const UpdateRequestValidatorRequest * UpdateRequestValidatorResponse::request() const
{
    Q_D(const UpdateRequestValidatorResponse);
    return static_cast<const UpdateRequestValidatorRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway UpdateRequestValidator response.
 *
 * @param  response  Response to parse.
 */
void UpdateRequestValidatorResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateRequestValidatorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateRequestValidatorResponsePrivate
 *
 * @brief  Private implementation for UpdateRequestValidatorResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRequestValidatorResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateRequestValidatorResponse instance.
 */
UpdateRequestValidatorResponsePrivate::UpdateRequestValidatorResponsePrivate(
    UpdateRequestValidatorResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway UpdateRequestValidatorResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateRequestValidatorResponsePrivate::parseUpdateRequestValidatorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRequestValidatorResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
