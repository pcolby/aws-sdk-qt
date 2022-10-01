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

#include "deletebasepathmappingresponse.h"
#include "deletebasepathmappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteBasePathMappingResponse
 * \brief The DeleteBasePathMappingResponse class provides an interace for ApiGateway DeleteBasePathMapping responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteBasePathMapping
 */

/*!
 * Constructs a DeleteBasePathMappingResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBasePathMappingResponse::DeleteBasePathMappingResponse(
        const DeleteBasePathMappingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new DeleteBasePathMappingResponsePrivate(this), parent)
{
    setRequest(new DeleteBasePathMappingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBasePathMappingRequest * DeleteBasePathMappingResponse::request() const
{
    Q_D(const DeleteBasePathMappingResponse);
    return static_cast<const DeleteBasePathMappingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway DeleteBasePathMapping \a response.
 */
void DeleteBasePathMappingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBasePathMappingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::DeleteBasePathMappingResponsePrivate
 * \brief The DeleteBasePathMappingResponsePrivate class provides private implementation for DeleteBasePathMappingResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteBasePathMappingResponsePrivate object with public implementation \a q.
 */
DeleteBasePathMappingResponsePrivate::DeleteBasePathMappingResponsePrivate(
    DeleteBasePathMappingResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway DeleteBasePathMapping response element from \a xml.
 */
void DeleteBasePathMappingResponsePrivate::parseDeleteBasePathMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBasePathMappingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
