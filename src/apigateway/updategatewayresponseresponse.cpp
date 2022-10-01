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

#include "updategatewayresponseresponse.h"
#include "updategatewayresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateGatewayResponseResponse
 * \brief The UpdateGatewayResponseResponse class provides an interace for ApiGateway UpdateGatewayResponse responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateGatewayResponse
 */

/*!
 * Constructs a UpdateGatewayResponseResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateGatewayResponseResponse::UpdateGatewayResponseResponse(
        const UpdateGatewayResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new UpdateGatewayResponseResponsePrivate(this), parent)
{
    setRequest(new UpdateGatewayResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateGatewayResponseRequest * UpdateGatewayResponseResponse::request() const
{
    Q_D(const UpdateGatewayResponseResponse);
    return static_cast<const UpdateGatewayResponseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway UpdateGatewayResponse \a response.
 */
void UpdateGatewayResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateGatewayResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::UpdateGatewayResponseResponsePrivate
 * \brief The UpdateGatewayResponseResponsePrivate class provides private implementation for UpdateGatewayResponseResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateGatewayResponseResponsePrivate object with public implementation \a q.
 */
UpdateGatewayResponseResponsePrivate::UpdateGatewayResponseResponsePrivate(
    UpdateGatewayResponseResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway UpdateGatewayResponse response element from \a xml.
 */
void UpdateGatewayResponseResponsePrivate::parseUpdateGatewayResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGatewayResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
