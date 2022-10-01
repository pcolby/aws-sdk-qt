// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedocumentationversionresponse.h"
#include "deletedocumentationversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteDocumentationVersionResponse
 * \brief The DeleteDocumentationVersionResponse class provides an interace for ApiGateway DeleteDocumentationVersion responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteDocumentationVersion
 */

/*!
 * Constructs a DeleteDocumentationVersionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDocumentationVersionResponse::DeleteDocumentationVersionResponse(
        const DeleteDocumentationVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new DeleteDocumentationVersionResponsePrivate(this), parent)
{
    setRequest(new DeleteDocumentationVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDocumentationVersionRequest * DeleteDocumentationVersionResponse::request() const
{
    Q_D(const DeleteDocumentationVersionResponse);
    return static_cast<const DeleteDocumentationVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway DeleteDocumentationVersion \a response.
 */
void DeleteDocumentationVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDocumentationVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::DeleteDocumentationVersionResponsePrivate
 * \brief The DeleteDocumentationVersionResponsePrivate class provides private implementation for DeleteDocumentationVersionResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteDocumentationVersionResponsePrivate object with public implementation \a q.
 */
DeleteDocumentationVersionResponsePrivate::DeleteDocumentationVersionResponsePrivate(
    DeleteDocumentationVersionResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway DeleteDocumentationVersion response element from \a xml.
 */
void DeleteDocumentationVersionResponsePrivate::parseDeleteDocumentationVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDocumentationVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
