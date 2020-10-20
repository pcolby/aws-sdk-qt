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

#include "deletedeploymentresponse.h"
#include "deletedeploymentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteDeploymentResponse
 * \brief The DeleteDeploymentResponse class provides an interace for ApiGatewayV2 DeleteDeployment responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteDeployment
 */

/*!
 * Constructs a DeleteDeploymentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDeploymentResponse::DeleteDeploymentResponse(
        const DeleteDeploymentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new DeleteDeploymentResponsePrivate(this), parent)
{
    setRequest(new DeleteDeploymentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDeploymentRequest * DeleteDeploymentResponse::request() const
{
    Q_D(const DeleteDeploymentResponse);
    return static_cast<const DeleteDeploymentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 DeleteDeployment \a response.
 */
void DeleteDeploymentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDeploymentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteDeploymentResponsePrivate
 * \brief The DeleteDeploymentResponsePrivate class provides private implementation for DeleteDeploymentResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteDeploymentResponsePrivate object with public implementation \a q.
 */
DeleteDeploymentResponsePrivate::DeleteDeploymentResponsePrivate(
    DeleteDeploymentResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 DeleteDeployment response element from \a xml.
 */
void DeleteDeploymentResponsePrivate::parseDeleteDeploymentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDeploymentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
