// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdocumentationpartresponse.h"
#include "createdocumentationpartresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::CreateDocumentationPartResponse
 * \brief The CreateDocumentationPartResponse class provides an interace for ApiGateway CreateDocumentationPart responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::createDocumentationPart
 */

/*!
 * Constructs a CreateDocumentationPartResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDocumentationPartResponse::CreateDocumentationPartResponse(
        const CreateDocumentationPartRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new CreateDocumentationPartResponsePrivate(this), parent)
{
    setRequest(new CreateDocumentationPartRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDocumentationPartRequest * CreateDocumentationPartResponse::request() const
{
    Q_D(const CreateDocumentationPartResponse);
    return static_cast<const CreateDocumentationPartRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway CreateDocumentationPart \a response.
 */
void CreateDocumentationPartResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDocumentationPartResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::CreateDocumentationPartResponsePrivate
 * \brief The CreateDocumentationPartResponsePrivate class provides private implementation for CreateDocumentationPartResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a CreateDocumentationPartResponsePrivate object with public implementation \a q.
 */
CreateDocumentationPartResponsePrivate::CreateDocumentationPartResponsePrivate(
    CreateDocumentationPartResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway CreateDocumentationPart response element from \a xml.
 */
void CreateDocumentationPartResponsePrivate::parseCreateDocumentationPartResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDocumentationPartResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
