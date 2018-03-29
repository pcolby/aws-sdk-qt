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

#include "deleteclientcertificateresponse.h"
#include "deleteclientcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  DeleteClientCertificateResponse
 *
 * @brief  Handles APIGateway DeleteClientCertificate responses.
 *
 * @see    APIGatewayClient::deleteClientCertificate
 */

/**
 * @brief  Constructs a new DeleteClientCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteClientCertificateResponse::DeleteClientCertificateResponse(
        const DeleteClientCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new DeleteClientCertificateResponsePrivate(this), parent)
{
    setRequest(new DeleteClientCertificateRequest(request));
    setReply(reply);
}

const DeleteClientCertificateRequest * DeleteClientCertificateResponse::request() const
{
    Q_D(const DeleteClientCertificateResponse);
    return static_cast<const DeleteClientCertificateRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway DeleteClientCertificate response.
 *
 * @param  response  Response to parse.
 */
void DeleteClientCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteClientCertificateResponsePrivate
 *
 * @brief  Private implementation for DeleteClientCertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteClientCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteClientCertificateResponse instance.
 */
DeleteClientCertificateResponsePrivate::DeleteClientCertificateResponsePrivate(
    DeleteClientCertificateQueueResponse * const q) : DeleteClientCertificatePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway DeleteClientCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteClientCertificateResponsePrivate::DeleteClientCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteClientCertificateResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
