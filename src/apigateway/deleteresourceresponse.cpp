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

#include "deleteresourceresponse.h"
#include "deleteresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteResourceResponse
 * \brief The DeleteResourceResponse class provides an interace for ApiGateway DeleteResource responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteResource
 */

/*!
 * Constructs a DeleteResourceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteResourceResponse::DeleteResourceResponse(
        const DeleteResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new DeleteResourceResponsePrivate(this), parent)
{
    setRequest(new DeleteResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteResourceRequest * DeleteResourceResponse::request() const
{
    Q_D(const DeleteResourceResponse);
    return static_cast<const DeleteResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway DeleteResource \a response.
 */
void DeleteResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::DeleteResourceResponsePrivate
 * \brief The DeleteResourceResponsePrivate class provides private implementation for DeleteResourceResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteResourceResponsePrivate object with public implementation \a q.
 */
DeleteResourceResponsePrivate::DeleteResourceResponsePrivate(
    DeleteResourceResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway DeleteResource response element from \a xml.
 */
void DeleteResourceResponsePrivate::parseDeleteResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
