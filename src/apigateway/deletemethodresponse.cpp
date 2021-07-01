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

#include "deletemethodresponse.h"
#include "deletemethodresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::DeleteMethodResponse
 * \brief The DeleteMethodResponse class provides an interace for APIGateway DeleteMethod responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::deleteMethod
 */

/*!
 * Constructs a DeleteMethodResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteMethodResponse::DeleteMethodResponse(
        const DeleteMethodRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new DeleteMethodResponsePrivate(this), parent)
{
    setRequest(new DeleteMethodRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteMethodRequest * DeleteMethodResponse::request() const
{
    Q_D(const DeleteMethodResponse);
    return static_cast<const DeleteMethodRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway DeleteMethod \a response.
 */
void DeleteMethodResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMethodResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::DeleteMethodResponsePrivate
 * \brief The DeleteMethodResponsePrivate class provides private implementation for DeleteMethodResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a DeleteMethodResponsePrivate object with public implementation \a q.
 */
DeleteMethodResponsePrivate::DeleteMethodResponsePrivate(
    DeleteMethodResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway DeleteMethod response element from \a xml.
 */
void DeleteMethodResponsePrivate::parseDeleteMethodResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMethodResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
