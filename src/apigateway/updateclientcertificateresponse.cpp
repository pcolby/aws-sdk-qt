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

#include "updateclientcertificateresponse.h"
#include "updateclientcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  UpdateClientCertificateResponse
 *
 * @brief  Handles APIGateway UpdateClientCertificate responses.
 *
 * @see    APIGatewayClient::updateClientCertificate
 */

/**
 * @brief  Constructs a new UpdateClientCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateClientCertificateResponse::UpdateClientCertificateResponse(
        const UpdateClientCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new UpdateClientCertificateResponsePrivate(this), parent)
{
    setRequest(new UpdateClientCertificateRequest(request));
    setReply(reply);
}

const UpdateClientCertificateRequest * UpdateClientCertificateResponse::request() const
{
    Q_D(const UpdateClientCertificateResponse);
    return static_cast<const UpdateClientCertificateRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway UpdateClientCertificate response.
 *
 * @param  response  Response to parse.
 */
void UpdateClientCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateClientCertificateResponsePrivate
 *
 * @brief  Private implementation for UpdateClientCertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateClientCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateClientCertificateResponse instance.
 */
UpdateClientCertificateResponsePrivate::UpdateClientCertificateResponsePrivate(
    UpdateClientCertificateQueueResponse * const q) : UpdateClientCertificatePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway UpdateClientCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateClientCertificateResponsePrivate::UpdateClientCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateClientCertificateResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
