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

#include "getclientcertificatesresponse.h"
#include "getclientcertificatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetClientCertificatesResponse
 *
 * @brief  Handles APIGateway GetClientCertificates responses.
 *
 * @see    APIGatewayClient::getClientCertificates
 */

/**
 * @brief  Constructs a new GetClientCertificatesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetClientCertificatesResponse::GetClientCertificatesResponse(
        const GetClientCertificatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetClientCertificatesResponsePrivate(this), parent)
{
    setRequest(new GetClientCertificatesRequest(request));
    setReply(reply);
}

const GetClientCertificatesRequest * GetClientCertificatesResponse::request() const
{
    Q_D(const GetClientCertificatesResponse);
    return static_cast<const GetClientCertificatesRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetClientCertificates response.
 *
 * @param  response  Response to parse.
 */
void GetClientCertificatesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetClientCertificatesResponsePrivate
 *
 * @brief  Private implementation for GetClientCertificatesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetClientCertificatesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetClientCertificatesResponse instance.
 */
GetClientCertificatesResponsePrivate::GetClientCertificatesResponsePrivate(
    GetClientCertificatesResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetClientCertificatesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetClientCertificatesResponsePrivate::GetClientCertificatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetClientCertificatesResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
