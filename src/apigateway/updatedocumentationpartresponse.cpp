// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedocumentationpartresponse.h"
#include "updatedocumentationpartresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateDocumentationPartResponse
 * \brief The UpdateDocumentationPartResponse class provides an interace for ApiGateway UpdateDocumentationPart responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateDocumentationPart
 */

/*!
 * Constructs a UpdateDocumentationPartResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDocumentationPartResponse::UpdateDocumentationPartResponse(
        const UpdateDocumentationPartRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new UpdateDocumentationPartResponsePrivate(this), parent)
{
    setRequest(new UpdateDocumentationPartRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDocumentationPartRequest * UpdateDocumentationPartResponse::request() const
{
    Q_D(const UpdateDocumentationPartResponse);
    return static_cast<const UpdateDocumentationPartRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway UpdateDocumentationPart \a response.
 */
void UpdateDocumentationPartResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDocumentationPartResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::UpdateDocumentationPartResponsePrivate
 * \brief The UpdateDocumentationPartResponsePrivate class provides private implementation for UpdateDocumentationPartResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateDocumentationPartResponsePrivate object with public implementation \a q.
 */
UpdateDocumentationPartResponsePrivate::UpdateDocumentationPartResponsePrivate(
    UpdateDocumentationPartResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway UpdateDocumentationPart response element from \a xml.
 */
void UpdateDocumentationPartResponsePrivate::parseUpdateDocumentationPartResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDocumentationPartResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
