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

#include "updatedeploymentresponse.h"
#include "updatedeploymentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateDeploymentResponse
 * \brief The UpdateDeploymentResponse class provides an interace for ApiGateway UpdateDeployment responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateDeployment
 */

/*!
 * Constructs a UpdateDeploymentResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDeploymentResponse::UpdateDeploymentResponse(
        const UpdateDeploymentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new UpdateDeploymentResponsePrivate(this), parent)
{
    setRequest(new UpdateDeploymentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDeploymentRequest * UpdateDeploymentResponse::request() const
{
    Q_D(const UpdateDeploymentResponse);
    return static_cast<const UpdateDeploymentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway UpdateDeployment \a response.
 */
void UpdateDeploymentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDeploymentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::UpdateDeploymentResponsePrivate
 * \brief The UpdateDeploymentResponsePrivate class provides private implementation for UpdateDeploymentResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateDeploymentResponsePrivate object with public implementation \a q.
 */
UpdateDeploymentResponsePrivate::UpdateDeploymentResponsePrivate(
    UpdateDeploymentResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway UpdateDeployment response element from \a xml.
 */
void UpdateDeploymentResponsePrivate::parseUpdateDeploymentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDeploymentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
