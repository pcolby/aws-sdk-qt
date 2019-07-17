/*
    Copyright 2013-2019 Paul Colby

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
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::DeleteMethodResponseResponse
 * \brief The DeleteMethodResponseResponse class provides an interace for APIGateway DeleteMethodResponse responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::deleteMethodResponse
 */

/*!
 * Constructs a DeleteMethodResponseResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteMethodResponseResponse::DeleteMethodResponseResponse(
        const DeleteMethodResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new DeleteMethodResponseResponsePrivate(this), parent)
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
 * Parses a successful APIGateway DeleteMethodResponse \a response.
 */
void DeleteMethodResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMethodResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::DeleteMethodResponseResponsePrivate
 * \brief The DeleteMethodResponseResponsePrivate class provides private implementation for DeleteMethodResponseResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a DeleteMethodResponseResponsePrivate object with public implementation \a q.
 */
DeleteMethodResponseResponsePrivate::DeleteMethodResponseResponsePrivate(
    DeleteMethodResponseResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway DeleteMethodResponse response element from \a xml.
 */
void DeleteMethodResponseResponsePrivate::parseDeleteMethodResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMethodResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
