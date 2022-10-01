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

#include "updatedocumentationversionresponse.h"
#include "updatedocumentationversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateDocumentationVersionResponse
 * \brief The UpdateDocumentationVersionResponse class provides an interace for ApiGateway UpdateDocumentationVersion responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateDocumentationVersion
 */

/*!
 * Constructs a UpdateDocumentationVersionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDocumentationVersionResponse::UpdateDocumentationVersionResponse(
        const UpdateDocumentationVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new UpdateDocumentationVersionResponsePrivate(this), parent)
{
    setRequest(new UpdateDocumentationVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDocumentationVersionRequest * UpdateDocumentationVersionResponse::request() const
{
    Q_D(const UpdateDocumentationVersionResponse);
    return static_cast<const UpdateDocumentationVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway UpdateDocumentationVersion \a response.
 */
void UpdateDocumentationVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDocumentationVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::UpdateDocumentationVersionResponsePrivate
 * \brief The UpdateDocumentationVersionResponsePrivate class provides private implementation for UpdateDocumentationVersionResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateDocumentationVersionResponsePrivate object with public implementation \a q.
 */
UpdateDocumentationVersionResponsePrivate::UpdateDocumentationVersionResponsePrivate(
    UpdateDocumentationVersionResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway UpdateDocumentationVersion response element from \a xml.
 */
void UpdateDocumentationVersionResponsePrivate::parseUpdateDocumentationVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDocumentationVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
