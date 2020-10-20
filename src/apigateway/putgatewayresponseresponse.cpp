/*
    Copyright 2013-2020 Paul Colby

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

#include "putgatewayresponseresponse.h"
#include "putgatewayresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::PutGatewayResponseResponse
 * \brief The PutGatewayResponseResponse class provides an interace for APIGateway PutGatewayResponse responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::putGatewayResponse
 */

/*!
 * Constructs a PutGatewayResponseResponse object for \a reply to \a request, with parent \a parent.
 */
PutGatewayResponseResponse::PutGatewayResponseResponse(
        const PutGatewayResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new PutGatewayResponseResponsePrivate(this), parent)
{
    setRequest(new PutGatewayResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutGatewayResponseRequest * PutGatewayResponseResponse::request() const
{
    Q_D(const PutGatewayResponseResponse);
    return static_cast<const PutGatewayResponseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway PutGatewayResponse \a response.
 */
void PutGatewayResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutGatewayResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::PutGatewayResponseResponsePrivate
 * \brief The PutGatewayResponseResponsePrivate class provides private implementation for PutGatewayResponseResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a PutGatewayResponseResponsePrivate object with public implementation \a q.
 */
PutGatewayResponseResponsePrivate::PutGatewayResponseResponsePrivate(
    PutGatewayResponseResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway PutGatewayResponse response element from \a xml.
 */
void PutGatewayResponseResponsePrivate::parsePutGatewayResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutGatewayResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
