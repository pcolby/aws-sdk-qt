// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedocumentationpartresponse.h"
#include "deletedocumentationpartresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteDocumentationPartResponse
 * \brief The DeleteDocumentationPartResponse class provides an interace for ApiGateway DeleteDocumentationPart responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteDocumentationPart
 */

/*!
 * Constructs a DeleteDocumentationPartResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDocumentationPartResponse::DeleteDocumentationPartResponse(
        const DeleteDocumentationPartRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new DeleteDocumentationPartResponsePrivate(this), parent)
{
    setRequest(new DeleteDocumentationPartRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDocumentationPartRequest * DeleteDocumentationPartResponse::request() const
{
    Q_D(const DeleteDocumentationPartResponse);
    return static_cast<const DeleteDocumentationPartRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway DeleteDocumentationPart \a response.
 */
void DeleteDocumentationPartResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDocumentationPartResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::DeleteDocumentationPartResponsePrivate
 * \brief The DeleteDocumentationPartResponsePrivate class provides private implementation for DeleteDocumentationPartResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteDocumentationPartResponsePrivate object with public implementation \a q.
 */
DeleteDocumentationPartResponsePrivate::DeleteDocumentationPartResponsePrivate(
    DeleteDocumentationPartResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway DeleteDocumentationPart response element from \a xml.
 */
void DeleteDocumentationPartResponsePrivate::parseDeleteDocumentationPartResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDocumentationPartResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
