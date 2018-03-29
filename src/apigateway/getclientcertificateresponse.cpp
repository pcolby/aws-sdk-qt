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

#include "getclientcertificateresponse.h"
#include "getclientcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetClientCertificateResponse
 *
 * @brief  Handles APIGateway GetClientCertificate responses.
 *
 * @see    APIGatewayClient::getClientCertificate
 */

/**
 * @brief  Constructs a new GetClientCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetClientCertificateResponse::GetClientCertificateResponse(
        const GetClientCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetClientCertificateResponsePrivate(this), parent)
{
    setRequest(new GetClientCertificateRequest(request));
    setReply(reply);
}

const GetClientCertificateRequest * GetClientCertificateResponse::request() const
{
    Q_D(const GetClientCertificateResponse);
    return static_cast<const GetClientCertificateRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetClientCertificate response.
 *
 * @param  response  Response to parse.
 */
void GetClientCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetClientCertificateResponsePrivate
 *
 * @brief  Private implementation for GetClientCertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetClientCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetClientCertificateResponse instance.
 */
GetClientCertificateResponsePrivate::GetClientCertificateResponsePrivate(
    GetClientCertificateResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetClientCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetClientCertificateResponsePrivate::GetClientCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetClientCertificateResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
