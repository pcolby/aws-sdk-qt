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

#include "getdocumentationversionresponse.h"
#include "getdocumentationversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetDocumentationVersionResponse
 * \brief The GetDocumentationVersionResponse class provides an interace for APIGateway GetDocumentationVersion responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getDocumentationVersion
 */

/*!
 * Constructs a GetDocumentationVersionResponse object for \a reply to \a request, with parent \a parent.
 */
GetDocumentationVersionResponse::GetDocumentationVersionResponse(
        const GetDocumentationVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetDocumentationVersionResponsePrivate(this), parent)
{
    setRequest(new GetDocumentationVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDocumentationVersionRequest * GetDocumentationVersionResponse::request() const
{
    return static_cast<const GetDocumentationVersionRequest *>(APIGatewayResponse::request());
}

/*!
 * \reimp
 * Parses a successful APIGateway GetDocumentationVersion \a response.
 */
void GetDocumentationVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDocumentationVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::GetDocumentationVersionResponsePrivate
 * \brief The GetDocumentationVersionResponsePrivate class provides private implementation for GetDocumentationVersionResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetDocumentationVersionResponsePrivate object with public implementation \a q.
 */
GetDocumentationVersionResponsePrivate::GetDocumentationVersionResponsePrivate(
    GetDocumentationVersionResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway GetDocumentationVersion response element from \a xml.
 */
void GetDocumentationVersionResponsePrivate::parseGetDocumentationVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDocumentationVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
