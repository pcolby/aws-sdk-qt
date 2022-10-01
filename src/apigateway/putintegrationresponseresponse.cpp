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

#include "putintegrationresponseresponse.h"
#include "putintegrationresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::PutIntegrationResponseResponse
 * \brief The PutIntegrationResponseResponse class provides an interace for ApiGateway PutIntegrationResponse responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::putIntegrationResponse
 */

/*!
 * Constructs a PutIntegrationResponseResponse object for \a reply to \a request, with parent \a parent.
 */
PutIntegrationResponseResponse::PutIntegrationResponseResponse(
        const PutIntegrationResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new PutIntegrationResponseResponsePrivate(this), parent)
{
    setRequest(new PutIntegrationResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutIntegrationResponseRequest * PutIntegrationResponseResponse::request() const
{
    Q_D(const PutIntegrationResponseResponse);
    return static_cast<const PutIntegrationResponseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway PutIntegrationResponse \a response.
 */
void PutIntegrationResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutIntegrationResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::PutIntegrationResponseResponsePrivate
 * \brief The PutIntegrationResponseResponsePrivate class provides private implementation for PutIntegrationResponseResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a PutIntegrationResponseResponsePrivate object with public implementation \a q.
 */
PutIntegrationResponseResponsePrivate::PutIntegrationResponseResponsePrivate(
    PutIntegrationResponseResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway PutIntegrationResponse response element from \a xml.
 */
void PutIntegrationResponseResponsePrivate::parsePutIntegrationResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutIntegrationResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
