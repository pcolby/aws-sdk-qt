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

#include "getdocumentationpartresponse.h"
#include "getdocumentationpartresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetDocumentationPartResponse
 * \brief The GetDocumentationPartResponse class provides an interace for APIGateway GetDocumentationPart responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getDocumentationPart
 */

/*!
 * Constructs a GetDocumentationPartResponse object for \a reply to \a request, with parent \a parent.
 */
GetDocumentationPartResponse::GetDocumentationPartResponse(
        const GetDocumentationPartRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetDocumentationPartResponsePrivate(this), parent)
{
    setRequest(new GetDocumentationPartRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDocumentationPartRequest * GetDocumentationPartResponse::request() const
{
    return static_cast<const GetDocumentationPartRequest *>(APIGatewayResponse::request());
}

/*!
 * \reimp
 * Parses a successful APIGateway GetDocumentationPart \a response.
 */
void GetDocumentationPartResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDocumentationPartResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::GetDocumentationPartResponsePrivate
 * \brief The GetDocumentationPartResponsePrivate class provides private implementation for GetDocumentationPartResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetDocumentationPartResponsePrivate object with public implementation \a q.
 */
GetDocumentationPartResponsePrivate::GetDocumentationPartResponsePrivate(
    GetDocumentationPartResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway GetDocumentationPart response element from \a xml.
 */
void GetDocumentationPartResponsePrivate::parseGetDocumentationPartResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDocumentationPartResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
