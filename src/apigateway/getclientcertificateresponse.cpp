/*
    Copyright 2013-2018 Paul Colby

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

#include "getclientcertificateresponse.h"
#include "getclientcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetClientCertificateResponse
 * \brief The GetClientCertificateResponse class provides an interace for APIGateway GetClientCertificate responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getClientCertificate
 */

/*!
 * Constructs a GetClientCertificateResponse object for \a reply to \a request, with parent \a parent.
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

/*!
 * \reimp
 */
const GetClientCertificateRequest * GetClientCertificateResponse::request() const
{
    Q_D(const GetClientCertificateResponse);
    return static_cast<const GetClientCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway GetClientCertificate \a response.
 */
void GetClientCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetClientCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::GetClientCertificateResponsePrivate
 * \brief The GetClientCertificateResponsePrivate class provides private implementation for GetClientCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetClientCertificateResponsePrivate object with public implementation \a q.
 */
GetClientCertificateResponsePrivate::GetClientCertificateResponsePrivate(
    GetClientCertificateResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway GetClientCertificate response element from \a xml.
 */
void GetClientCertificateResponsePrivate::parseGetClientCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetClientCertificateResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
