/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updateintegrationresponseresponse.h"
#include "updateintegrationresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::UpdateIntegrationResponseResponse
 * \brief The UpdateIntegrationResponseResponse class provides an interace for APIGateway UpdateIntegrationResponse responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::updateIntegrationResponse
 */

/*!
 * Constructs a UpdateIntegrationResponseResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateIntegrationResponseResponse::UpdateIntegrationResponseResponse(
        const UpdateIntegrationResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new UpdateIntegrationResponseResponsePrivate(this), parent)
{
    setRequest(new UpdateIntegrationResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateIntegrationResponseRequest * UpdateIntegrationResponseResponse::request() const
{
    Q_D(const UpdateIntegrationResponseResponse);
    return static_cast<const UpdateIntegrationResponseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway UpdateIntegrationResponse \a response.
 */
void UpdateIntegrationResponseResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateIntegrationResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::UpdateIntegrationResponseResponsePrivate
 * \brief The UpdateIntegrationResponseResponsePrivate class provides private implementation for UpdateIntegrationResponseResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a UpdateIntegrationResponseResponsePrivate object with public implementation \a q.
 */
UpdateIntegrationResponseResponsePrivate::UpdateIntegrationResponseResponsePrivate(
    UpdateIntegrationResponseResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway UpdateIntegrationResponse response element from \a xml.
 */
void UpdateIntegrationResponseResponsePrivate::parseUpdateIntegrationResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateIntegrationResponseResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
