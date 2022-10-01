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

#include "updatemethodresponse.h"
#include "updatemethodresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateMethodResponse
 * \brief The UpdateMethodResponse class provides an interace for ApiGateway UpdateMethod responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateMethod
 */

/*!
 * Constructs a UpdateMethodResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateMethodResponse::UpdateMethodResponse(
        const UpdateMethodRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new UpdateMethodResponsePrivate(this), parent)
{
    setRequest(new UpdateMethodRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateMethodRequest * UpdateMethodResponse::request() const
{
    Q_D(const UpdateMethodResponse);
    return static_cast<const UpdateMethodRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway UpdateMethod \a response.
 */
void UpdateMethodResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateMethodResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::UpdateMethodResponsePrivate
 * \brief The UpdateMethodResponsePrivate class provides private implementation for UpdateMethodResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateMethodResponsePrivate object with public implementation \a q.
 */
UpdateMethodResponsePrivate::UpdateMethodResponsePrivate(
    UpdateMethodResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway UpdateMethod response element from \a xml.
 */
void UpdateMethodResponsePrivate::parseUpdateMethodResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateMethodResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
