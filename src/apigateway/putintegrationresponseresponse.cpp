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

#include "putintegrationresponseresponse.h"
#include "putintegrationresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::PutIntegrationResponseResponse
 * \brief The PutIntegrationResponseResponse class provides an interace for APIGateway PutIntegrationResponse responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::putIntegrationResponse
 */

/*!
 * Constructs a PutIntegrationResponseResponse object for \a reply to \a request, with parent \a parent.
 */
PutIntegrationResponseResponse::PutIntegrationResponseResponse(
        const PutIntegrationResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new PutIntegrationResponseResponsePrivate(this), parent)
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
 * Parses a successful APIGateway PutIntegrationResponse \a response.
 */
void PutIntegrationResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutIntegrationResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::PutIntegrationResponseResponsePrivate
 * \brief The PutIntegrationResponseResponsePrivate class provides private implementation for PutIntegrationResponseResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a PutIntegrationResponseResponsePrivate object with public implementation \a q.
 */
PutIntegrationResponseResponsePrivate::PutIntegrationResponseResponsePrivate(
    PutIntegrationResponseResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway PutIntegrationResponse response element from \a xml.
 */
void PutIntegrationResponseResponsePrivate::parsePutIntegrationResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutIntegrationResponseResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
