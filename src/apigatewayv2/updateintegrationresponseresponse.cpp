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

#include "updateintegrationresponseresponse.h"
#include "updateintegrationresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::UpdateIntegrationResponseResponse
 * \brief The UpdateIntegrationResponseResponse class provides an interace for ApiGatewayV2 UpdateIntegrationResponse responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::updateIntegrationResponse
 */

/*!
 * Constructs a UpdateIntegrationResponseResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateIntegrationResponseResponse::UpdateIntegrationResponseResponse(
        const UpdateIntegrationResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new UpdateIntegrationResponseResponsePrivate(this), parent)
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
 * Parses a successful ApiGatewayV2 UpdateIntegrationResponse \a response.
 */
void UpdateIntegrationResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateIntegrationResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::UpdateIntegrationResponseResponsePrivate
 * \brief The UpdateIntegrationResponseResponsePrivate class provides private implementation for UpdateIntegrationResponseResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a UpdateIntegrationResponseResponsePrivate object with public implementation \a q.
 */
UpdateIntegrationResponseResponsePrivate::UpdateIntegrationResponseResponsePrivate(
    UpdateIntegrationResponseResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 UpdateIntegrationResponse response element from \a xml.
 */
void UpdateIntegrationResponseResponsePrivate::parseUpdateIntegrationResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateIntegrationResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
