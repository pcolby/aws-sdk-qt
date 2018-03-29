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

#include "generateclientcertificateresponse.h"
#include "generateclientcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  GenerateClientCertificateResponse
 *
 * @brief  Handles APIGateway GenerateClientCertificate responses.
 *
 * @see    APIGatewayClient::generateClientCertificate
 */

/**
 * @brief  Constructs a new GenerateClientCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GenerateClientCertificateResponse::GenerateClientCertificateResponse(
        const GenerateClientCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GenerateClientCertificateResponsePrivate(this), parent)
{
    setRequest(new GenerateClientCertificateRequest(request));
    setReply(reply);
}

const GenerateClientCertificateRequest * GenerateClientCertificateResponse::request() const
{
    Q_D(const GenerateClientCertificateResponse);
    return static_cast<const GenerateClientCertificateRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GenerateClientCertificate response.
 *
 * @param  response  Response to parse.
 */
void GenerateClientCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GenerateClientCertificateResponsePrivate
 *
 * @brief  Private implementation for GenerateClientCertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GenerateClientCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GenerateClientCertificateResponse instance.
 */
GenerateClientCertificateResponsePrivate::GenerateClientCertificateResponsePrivate(
    GenerateClientCertificateQueueResponse * const q) : GenerateClientCertificatePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GenerateClientCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GenerateClientCertificateResponsePrivate::GenerateClientCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GenerateClientCertificateResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
