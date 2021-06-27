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

#include "importdocumentationpartsresponse.h"
#include "importdocumentationpartsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::ImportDocumentationPartsResponse
 * \brief The ImportDocumentationPartsResponse class provides an interace for APIGateway ImportDocumentationParts responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::importDocumentationParts
 */

/*!
 * Constructs a ImportDocumentationPartsResponse object for \a reply to \a request, with parent \a parent.
 */
ImportDocumentationPartsResponse::ImportDocumentationPartsResponse(
        const ImportDocumentationPartsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new ImportDocumentationPartsResponsePrivate(this), parent)
{
    setRequest(new ImportDocumentationPartsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportDocumentationPartsRequest * ImportDocumentationPartsResponse::request() const
{
    return static_cast<const ImportDocumentationPartsRequest *>(APIGatewayResponse::request());
}

/*!
 * \reimp
 * Parses a successful APIGateway ImportDocumentationParts \a response.
 */
void ImportDocumentationPartsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportDocumentationPartsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::ImportDocumentationPartsResponsePrivate
 * \brief The ImportDocumentationPartsResponsePrivate class provides private implementation for ImportDocumentationPartsResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a ImportDocumentationPartsResponsePrivate object with public implementation \a q.
 */
ImportDocumentationPartsResponsePrivate::ImportDocumentationPartsResponsePrivate(
    ImportDocumentationPartsResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway ImportDocumentationParts response element from \a xml.
 */
void ImportDocumentationPartsResponsePrivate::parseImportDocumentationPartsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportDocumentationPartsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
