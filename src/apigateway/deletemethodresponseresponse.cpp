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

#include "deletemethodresponseresponse.h"
#include "deletemethodresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteMethodResponseResponse
 * \brief The DeleteMethodResponseResponse class provides an interace for ApiGateway DeleteMethodResponse responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteMethodResponse
 */

/*!
 * Constructs a DeleteMethodResponseResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteMethodResponseResponse::DeleteMethodResponseResponse(
        const DeleteMethodResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new DeleteMethodResponseResponsePrivate(this), parent)
{
    setRequest(new DeleteMethodResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteMethodResponseRequest * DeleteMethodResponseResponse::request() const
{
    Q_D(const DeleteMethodResponseResponse);
    return static_cast<const DeleteMethodResponseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway DeleteMethodResponse \a response.
 */
void DeleteMethodResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMethodResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::DeleteMethodResponseResponsePrivate
 * \brief The DeleteMethodResponseResponsePrivate class provides private implementation for DeleteMethodResponseResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteMethodResponseResponsePrivate object with public implementation \a q.
 */
DeleteMethodResponseResponsePrivate::DeleteMethodResponseResponsePrivate(
    DeleteMethodResponseResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway DeleteMethodResponse response element from \a xml.
 */
void DeleteMethodResponseResponsePrivate::parseDeleteMethodResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMethodResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
