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

#include "deleterestapiresponse.h"
#include "deleterestapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::DeleteRestApiResponse
 * \brief The DeleteRestApiResponse class provides an interace for APIGateway DeleteRestApi responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::deleteRestApi
 */

/*!
 * Constructs a DeleteRestApiResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRestApiResponse::DeleteRestApiResponse(
        const DeleteRestApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new DeleteRestApiResponsePrivate(this), parent)
{
    setRequest(new DeleteRestApiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRestApiRequest * DeleteRestApiResponse::request() const
{
    Q_D(const DeleteRestApiResponse);
    return static_cast<const DeleteRestApiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway DeleteRestApi \a response.
 */
void DeleteRestApiResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteRestApiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::DeleteRestApiResponsePrivate
 * \brief The DeleteRestApiResponsePrivate class provides private implementation for DeleteRestApiResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a DeleteRestApiResponsePrivate object with public implementation \a q.
 */
DeleteRestApiResponsePrivate::DeleteRestApiResponsePrivate(
    DeleteRestApiResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway DeleteRestApi response element from \a xml.
 */
void DeleteRestApiResponsePrivate::parseDeleteRestApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRestApiResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
