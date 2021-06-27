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

#include "updatedocumentationpartresponse.h"
#include "updatedocumentationpartresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::UpdateDocumentationPartResponse
 * \brief The UpdateDocumentationPartResponse class provides an interace for APIGateway UpdateDocumentationPart responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::updateDocumentationPart
 */

/*!
 * Constructs a UpdateDocumentationPartResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDocumentationPartResponse::UpdateDocumentationPartResponse(
        const UpdateDocumentationPartRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new UpdateDocumentationPartResponsePrivate(this), parent)
{
    setRequest(new UpdateDocumentationPartRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDocumentationPartRequest * UpdateDocumentationPartResponse::request() const
{
    return static_cast<const UpdateDocumentationPartRequest *>(APIGatewayResponse::request());
}

/*!
 * \reimp
 * Parses a successful APIGateway UpdateDocumentationPart \a response.
 */
void UpdateDocumentationPartResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDocumentationPartResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::UpdateDocumentationPartResponsePrivate
 * \brief The UpdateDocumentationPartResponsePrivate class provides private implementation for UpdateDocumentationPartResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a UpdateDocumentationPartResponsePrivate object with public implementation \a q.
 */
UpdateDocumentationPartResponsePrivate::UpdateDocumentationPartResponsePrivate(
    UpdateDocumentationPartResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway UpdateDocumentationPart response element from \a xml.
 */
void UpdateDocumentationPartResponsePrivate::parseUpdateDocumentationPartResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDocumentationPartResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
