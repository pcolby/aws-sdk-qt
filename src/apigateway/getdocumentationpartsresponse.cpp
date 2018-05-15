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

#include "getdocumentationpartsresponse.h"
#include "getdocumentationpartsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetDocumentationPartsResponse
 * \brief The GetDocumentationPartsResponse class provides an interace for APIGateway GetDocumentationParts responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getDocumentationParts
 */

/*!
 * Constructs a GetDocumentationPartsResponse object for \a reply to \a request, with parent \a parent.
 */
GetDocumentationPartsResponse::GetDocumentationPartsResponse(
        const GetDocumentationPartsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetDocumentationPartsResponsePrivate(this), parent)
{
    setRequest(new GetDocumentationPartsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDocumentationPartsRequest * GetDocumentationPartsResponse::request() const
{
    Q_D(const GetDocumentationPartsResponse);
    return static_cast<const GetDocumentationPartsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway GetDocumentationParts \a response.
 */
void GetDocumentationPartsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDocumentationPartsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::GetDocumentationPartsResponsePrivate
 * \brief The GetDocumentationPartsResponsePrivate class provides private implementation for GetDocumentationPartsResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetDocumentationPartsResponsePrivate object with public implementation \a q.
 */
GetDocumentationPartsResponsePrivate::GetDocumentationPartsResponsePrivate(
    GetDocumentationPartsResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway GetDocumentationParts response element from \a xml.
 */
void GetDocumentationPartsResponsePrivate::parseGetDocumentationPartsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDocumentationPartsResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
