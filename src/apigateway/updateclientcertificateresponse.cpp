/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
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
 * \brief The UpdateClientCertificateResponse class provides an interace for APIGateway UpdateClientCertificate responses.
 *
 * \inmodule QtAwsAPIGateway
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
 * Constructs a UpdateClientCertificateResponse object for \a reply to \a request, with parent \a parent.
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

/*!
 * \reimp
 */
const UpdateClientCertificateRequest * UpdateClientCertificateResponse::request() const
{
    return static_cast<const UpdateClientCertificateRequest *>(APIGatewayResponse::request());
}

/*!
 * \reimp
 * Parses a successful APIGateway UpdateClientCertificate \a response.
 */
void UpdateClientCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateClientCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::UpdateClientCertificateResponsePrivate
 * \brief The UpdateClientCertificateResponsePrivate class provides private implementation for UpdateClientCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a UpdateClientCertificateResponsePrivate object with public implementation \a q.
 */
UpdateClientCertificateResponsePrivate::UpdateClientCertificateResponsePrivate(
    UpdateClientCertificateResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway UpdateClientCertificate response element from \a xml.
 */
void UpdateClientCertificateResponsePrivate::parseUpdateClientCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateClientCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
