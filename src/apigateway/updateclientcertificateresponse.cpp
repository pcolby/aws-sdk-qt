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

#include "updateclientcertificateresponse.h"
#include "updateclientcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::UpdateClientCertificateResponse
 *
 * \brief The UpdateClientCertificateResponse class encapsulates APIGateway UpdateClientCertificate responses.
 *
 * \ingroup APIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::updateClientCertificate
 */

/*!
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

/*!
 * @brief  Parse a APIGateway UpdateClientCertificate response.
 *
 * @param  response  Response to parse.
 */
void UpdateClientCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateClientCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class UpdateClientCertificateResponsePrivate
 *
 * \brief Private implementation for UpdateClientCertificateResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateClientCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateClientCertificateResponse instance.
 */
UpdateClientCertificateResponsePrivate::UpdateClientCertificateResponsePrivate(
    UpdateClientCertificateResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * @brief  Parse an APIGateway UpdateClientCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateClientCertificateResponsePrivate::parseUpdateClientCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateClientCertificateResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
