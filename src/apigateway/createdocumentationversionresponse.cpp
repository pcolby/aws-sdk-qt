// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
