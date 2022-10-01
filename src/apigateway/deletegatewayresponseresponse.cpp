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
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteGatewayResponseResponse
 * \brief The DeleteGatewayResponseResponse class provides an interace for ApiGateway DeleteGatewayResponse responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteGatewayResponse
 */

/*!
 * Constructs a DeleteGatewayResponseResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteGatewayResponseResponse::DeleteGatewayResponseResponse(
        const DeleteGatewayResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new DeleteGatewayResponseResponsePrivate(this), parent)
{
    setRequest(new DeleteGatewayResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteGatewayResponseRequest * DeleteGatewayResponseResponse::request() const
{
    Q_D(const DeleteGatewayResponseResponse);
    return static_cast<const DeleteGatewayResponseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway DeleteGatewayResponse \a response.
 */
void DeleteGatewayResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteGatewayResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::DeleteGatewayResponseResponsePrivate
 * \brief The DeleteGatewayResponseResponsePrivate class provides private implementation for DeleteGatewayResponseResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteGatewayResponseResponsePrivate object with public implementation \a q.
 */
DeleteGatewayResponseResponsePrivate::DeleteGatewayResponseResponsePrivate(
    DeleteGatewayResponseResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway DeleteGatewayResponse response element from \a xml.
 */
void DeleteGatewayResponseResponsePrivate::parseDeleteGatewayResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteGatewayResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
