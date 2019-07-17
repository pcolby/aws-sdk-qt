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

#include "getdocumentationversionsresponse.h"
#include "getdocumentationversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetDocumentationVersionsResponse
 * \brief The GetDocumentationVersionsResponse class provides an interace for APIGateway GetDocumentationVersions responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getDocumentationVersions
 */

/*!
 * Constructs a GetDocumentationVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
GetDocumentationVersionsResponse::GetDocumentationVersionsResponse(
        const GetDocumentationVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetDocumentationVersionsResponsePrivate(this), parent)
{
    setRequest(new GetDocumentationVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDocumentationVersionsRequest * GetDocumentationVersionsResponse::request() const
{
    Q_D(const GetDocumentationVersionsResponse);
    return static_cast<const GetDocumentationVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway GetDocumentationVersions \a response.
 */
void GetDocumentationVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDocumentationVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::GetDocumentationVersionsResponsePrivate
 * \brief The GetDocumentationVersionsResponsePrivate class provides private implementation for GetDocumentationVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetDocumentationVersionsResponsePrivate object with public implementation \a q.
 */
GetDocumentationVersionsResponsePrivate::GetDocumentationVersionsResponsePrivate(
    GetDocumentationVersionsResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway GetDocumentationVersions response element from \a xml.
 */
void GetDocumentationVersionsResponsePrivate::parseGetDocumentationVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDocumentationVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
