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

#include "deletegatewayresponseresponse.h"
#include "deletegatewayresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::DeleteGatewayResponseResponse
 * \brief The DeleteGatewayResponseResponse class provides an interace for APIGateway DeleteGatewayResponse responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::deleteGatewayResponse
 */

/*!
 * Constructs a DeleteGatewayResponseResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteGatewayResponseResponse::DeleteGatewayResponseResponse(
        const DeleteGatewayResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new DeleteGatewayResponseResponsePrivate(this), parent)
{
    setRequest(new DeleteGatewayResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteGatewayResponseRequest * DeleteGatewayResponseResponse::request() const
{
    return static_cast<const DeleteGatewayResponseRequest *>(APIGatewayResponse::request());
}

/*!
 * \reimp
 * Parses a successful APIGateway DeleteGatewayResponse \a response.
 */
void DeleteGatewayResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteGatewayResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::DeleteGatewayResponseResponsePrivate
 * \brief The DeleteGatewayResponseResponsePrivate class provides private implementation for DeleteGatewayResponseResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a DeleteGatewayResponseResponsePrivate object with public implementation \a q.
 */
DeleteGatewayResponseResponsePrivate::DeleteGatewayResponseResponsePrivate(
    DeleteGatewayResponseResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway DeleteGatewayResponse response element from \a xml.
 */
void DeleteGatewayResponseResponsePrivate::parseDeleteGatewayResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteGatewayResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
