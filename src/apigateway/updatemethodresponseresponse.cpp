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

#include "updatemethodresponseresponse.h"
#include "updatemethodresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateMethodResponseResponse
 * \brief The UpdateMethodResponseResponse class provides an interace for ApiGateway UpdateMethodResponse responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateMethodResponse
 */

/*!
 * Constructs a UpdateMethodResponseResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateMethodResponseResponse::UpdateMethodResponseResponse(
        const UpdateMethodResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new UpdateMethodResponseResponsePrivate(this), parent)
{
    setRequest(new UpdateMethodResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateMethodResponseRequest * UpdateMethodResponseResponse::request() const
{
    Q_D(const UpdateMethodResponseResponse);
    return static_cast<const UpdateMethodResponseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway UpdateMethodResponse \a response.
 */
void UpdateMethodResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateMethodResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::UpdateMethodResponseResponsePrivate
 * \brief The UpdateMethodResponseResponsePrivate class provides private implementation for UpdateMethodResponseResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateMethodResponseResponsePrivate object with public implementation \a q.
 */
UpdateMethodResponseResponsePrivate::UpdateMethodResponseResponsePrivate(
    UpdateMethodResponseResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway UpdateMethodResponse response element from \a xml.
 */
void UpdateMethodResponseResponsePrivate::parseUpdateMethodResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateMethodResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
