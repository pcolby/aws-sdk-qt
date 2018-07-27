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

#include "deleteintegrationresponse.h"
#include "deleteintegrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::DeleteIntegrationResponse
 * \brief The DeleteIntegrationResponse class provides an interace for APIGateway DeleteIntegration responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::deleteIntegration
 */

/*!
 * Constructs a DeleteIntegrationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteIntegrationResponse::DeleteIntegrationResponse(
        const DeleteIntegrationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new DeleteIntegrationResponsePrivate(this), parent)
{
    setRequest(new DeleteIntegrationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteIntegrationRequest * DeleteIntegrationResponse::request() const
{
    Q_D(const DeleteIntegrationResponse);
    return static_cast<const DeleteIntegrationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway DeleteIntegration \a response.
 */
void DeleteIntegrationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteIntegrationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::DeleteIntegrationResponsePrivate
 * \brief The DeleteIntegrationResponsePrivate class provides private implementation for DeleteIntegrationResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a DeleteIntegrationResponsePrivate object with public implementation \a q.
 */
DeleteIntegrationResponsePrivate::DeleteIntegrationResponsePrivate(
    DeleteIntegrationResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway DeleteIntegration response element from \a xml.
 */
void DeleteIntegrationResponsePrivate::parseDeleteIntegrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIntegrationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
