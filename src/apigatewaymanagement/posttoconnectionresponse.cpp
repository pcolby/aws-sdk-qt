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

#include "posttoconnectionresponse.h"
#include "posttoconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayManagement {

/*!
 * \class QtAws::ApiGatewayManagement::PostToConnectionResponse
 * \brief The PostToConnectionResponse class provides an interace for ApiGatewayManagement PostToConnection responses.
 *
 * \inmodule QtAwsApiGatewayManagement
 *
 *  The Amazon API Gateway Management API allows you to directly manage runtime aspects of your deployed APIs. To use it,
 *  you must explicitly set the SDK's endpoint to point to the endpoint of your deployed API. The endpoint will be of the
 *  form https://{api-id}.execute-api.{region}.amazonaws.com/{stage}, or will be the endpoint corresponding to your API's
 *  custom domain and base path, if
 *
 * \sa ApiGatewayManagementClient::postToConnection
 */

/*!
 * Constructs a PostToConnectionResponse object for \a reply to \a request, with parent \a parent.
 */
PostToConnectionResponse::PostToConnectionResponse(
        const PostToConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayManagementResponse(new PostToConnectionResponsePrivate(this), parent)
{
    setRequest(new PostToConnectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PostToConnectionRequest * PostToConnectionResponse::request() const
{
    Q_D(const PostToConnectionResponse);
    return static_cast<const PostToConnectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayManagement PostToConnection \a response.
 */
void PostToConnectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PostToConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayManagement::PostToConnectionResponsePrivate
 * \brief The PostToConnectionResponsePrivate class provides private implementation for PostToConnectionResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayManagement
 */

/*!
 * Constructs a PostToConnectionResponsePrivate object with public implementation \a q.
 */
PostToConnectionResponsePrivate::PostToConnectionResponsePrivate(
    PostToConnectionResponse * const q) : ApiGatewayManagementResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayManagement PostToConnection response element from \a xml.
 */
void PostToConnectionResponsePrivate::parsePostToConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PostToConnectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayManagement
} // namespace QtAws
