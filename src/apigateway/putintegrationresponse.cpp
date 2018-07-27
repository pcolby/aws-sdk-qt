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

#include "putintegrationresponse.h"
#include "putintegrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::PutIntegrationResponse
 * \brief The PutIntegrationResponse class provides an interace for APIGateway PutIntegration responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::putIntegration
 */

/*!
 * Constructs a PutIntegrationResponse object for \a reply to \a request, with parent \a parent.
 */
PutIntegrationResponse::PutIntegrationResponse(
        const PutIntegrationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new PutIntegrationResponsePrivate(this), parent)
{
    setRequest(new PutIntegrationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutIntegrationRequest * PutIntegrationResponse::request() const
{
    Q_D(const PutIntegrationResponse);
    return static_cast<const PutIntegrationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway PutIntegration \a response.
 */
void PutIntegrationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutIntegrationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::PutIntegrationResponsePrivate
 * \brief The PutIntegrationResponsePrivate class provides private implementation for PutIntegrationResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a PutIntegrationResponsePrivate object with public implementation \a q.
 */
PutIntegrationResponsePrivate::PutIntegrationResponsePrivate(
    PutIntegrationResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway PutIntegration response element from \a xml.
 */
void PutIntegrationResponsePrivate::parsePutIntegrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutIntegrationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
