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

#include "createdocumentationversionresponse.h"
#include "createdocumentationversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::CreateDocumentationVersionResponse
 * \brief The CreateDocumentationVersionResponse class provides an interace for ApiGateway CreateDocumentationVersion responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::createDocumentationVersion
 */

/*!
 * Constructs a CreateDocumentationVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDocumentationVersionResponse::CreateDocumentationVersionResponse(
        const CreateDocumentationVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new CreateDocumentationVersionResponsePrivate(this), parent)
{
    setRequest(new CreateDocumentationVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDocumentationVersionRequest * CreateDocumentationVersionResponse::request() const
{
    Q_D(const CreateDocumentationVersionResponse);
    return static_cast<const CreateDocumentationVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway CreateDocumentationVersion \a response.
 */
void CreateDocumentationVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDocumentationVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::CreateDocumentationVersionResponsePrivate
 * \brief The CreateDocumentationVersionResponsePrivate class provides private implementation for CreateDocumentationVersionResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a CreateDocumentationVersionResponsePrivate object with public implementation \a q.
 */
CreateDocumentationVersionResponsePrivate::CreateDocumentationVersionResponsePrivate(
    CreateDocumentationVersionResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway CreateDocumentationVersion response element from \a xml.
 */
void CreateDocumentationVersionResponsePrivate::parseCreateDocumentationVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDocumentationVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
