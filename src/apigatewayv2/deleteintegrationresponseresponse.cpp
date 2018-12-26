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

#include "deleteintegrationresponseresponse.h"
#include "deleteintegrationresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteIntegrationResponseResponse
 * \brief The DeleteIntegrationResponseResponse class provides an interace for ApiGatewayV2 DeleteIntegrationResponse responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteIntegrationResponse
 */

/*!
 * Constructs a DeleteIntegrationResponseResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteIntegrationResponseResponse::DeleteIntegrationResponseResponse(
        const DeleteIntegrationResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new DeleteIntegrationResponseResponsePrivate(this), parent)
{
    setRequest(new DeleteIntegrationResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteIntegrationResponseRequest * DeleteIntegrationResponseResponse::request() const
{
    Q_D(const DeleteIntegrationResponseResponse);
    return static_cast<const DeleteIntegrationResponseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 DeleteIntegrationResponse \a response.
 */
void DeleteIntegrationResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteIntegrationResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteIntegrationResponseResponsePrivate
 * \brief The DeleteIntegrationResponseResponsePrivate class provides private implementation for DeleteIntegrationResponseResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteIntegrationResponseResponsePrivate object with public implementation \a q.
 */
DeleteIntegrationResponseResponsePrivate::DeleteIntegrationResponseResponsePrivate(
    DeleteIntegrationResponseResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 DeleteIntegrationResponse response element from \a xml.
 */
void DeleteIntegrationResponseResponsePrivate::parseDeleteIntegrationResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIntegrationResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
